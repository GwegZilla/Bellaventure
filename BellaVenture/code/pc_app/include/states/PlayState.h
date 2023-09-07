#include <QState>

class PlayState : public QState {


public :
    void onEntry(QEvent *event) override;
    void onExit(QEvent *event) override;

};
