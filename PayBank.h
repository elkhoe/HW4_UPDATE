//
// Created by Manprit Heer on 2/27/18.
//

#ifndef HW4_UPDATE_PAYBANK_H
#define HW4_UPDATE_PAYBANK_H


class PayBank : public Space{
public:
    virtual void activate(Player& activatingPlayer) override;
    virtual int Monopoly::Space::getSalary() const;
protected:
private:
};
#endif //HW4_UPDATE_PAYBANK_H
