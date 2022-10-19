#ifndef DMY_H
#define DMY_H

class DMY
{
private:
    int date;
    int month;
    int year;
public:
    DMY();
    DMY(int,int,int);
    int get_Date();
    int get_Month();
    int get_Year();
    void set_Date(int date);
    void set_Month(int month);
    void set_Year(int year);
    ~DMY();
};

#endif // DMY_H
