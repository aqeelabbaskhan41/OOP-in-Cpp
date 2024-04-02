
class Copy
{
    private:
         int a,b;
         int* p;
    public:
        Copy(int x,int y);
        Copy(Copy &obj);
        void print();
        void change();

};


