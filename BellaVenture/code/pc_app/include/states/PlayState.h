#include <QAbstractState>

class PlayState : public QAbstractState {


public :
    void onEntry(QEvent *event) override;
    void onExit(QEvent *event) override;

};
