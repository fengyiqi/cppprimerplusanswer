// exercise 02

#ifndef CD_H_
#define CD_H_

class Cd
{
private:
    char * performers;
    char * label;
    int selections;
    double playtime;
public:
    Cd(const char * s1, const char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    virtual Cd & operator=(const Cd & d);

};



class Classic: public Cd
{
private:
    char * mainworks;
public:
    Classic(const char * mw, const char * s1, const char * s2, int n, double x);
    Classic();
    ~Classic();
    virtual void Report() const;
    virtual Classic & operator=(const Classic & d);
};

#endif
