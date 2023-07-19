#include <QAbstractState>

class WarmupState : public QAbstractState {


public :
    void onEntry(QEvent *event) override;
    void onExit(QEvent *event) override;

};
