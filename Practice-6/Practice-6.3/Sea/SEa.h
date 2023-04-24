#include "../Ocean/Ocean.h"

class Sea : public Ocean
{
private:
    bool fromOcean;
    bool fromSea;
    Sea *parent;
    Ocean *ocean;
    string name;
public:
    Sea();
    Sea(const string& n, const string& l, double s, double d, double sA, double t, double sal);
    Sea(Sea *obj, string n);
    Sea(Ocean *obj, string n);

    void setName(const string& n);
    string getName() const override;

    friend ostream &operator<<(ostream &stream, Sea obj);
    friend istream &operator>>(istream &stream, Sea &obj);
};