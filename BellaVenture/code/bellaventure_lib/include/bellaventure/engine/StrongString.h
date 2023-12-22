#pragma once

#include <iostream>
#include <string>
#include <map>


namespace BellaVenture {

// a string-like identifier that is typed on a tag type
template<class Tag>
struct StrongString
{
    // needs to be default-constuctable because of use in map[] below
    StrongString(std::string s) : _value(std::move(s)) {}
    StrongString() : _value() {}

    // provide access to the underlying string value
    const std::string& value() const { return _value; }
private:
    std::string _value;

    // will only compare against same type of id.
    friend bool operator < (const StrongString& l, const StrongString& r) {
        return l._value < r._value;
    }
    // will only compare against same type of id.
    friend bool operator == (const StrongString& l, const StrongString& r) {
        return l._value == r._value;
    }
};
}
