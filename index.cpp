
class A {
public:
     A () {} // does not init 'm_i'
     int getI () const;

private:
     int m_i;
};

int j = A() .getI ();   
