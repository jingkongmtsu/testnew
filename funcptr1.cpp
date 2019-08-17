#include <iostream>
using namespace std;
class golu
{
   int i;
public:
   void man()
   {
      cout<<"\ntry to learn \n";
   }
};
int main()
{
   golu m, *n;
   void (golu::*t)() =&golu::man; //making pointer to member function

   (m.*t)();
   n=&m;//confused is it object pointer
   (n->*t)();
}
