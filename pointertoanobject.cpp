#include <iostream>
using namespace std;

class My_Class;
 
    
void 
int num;
public:
void show_num();
};

void My_Class::show_num()
{
cout << num << "\n";
}

int main()

{
  My_Class ob, *p; // declare an object and pointer to it

  ob.set_num(1); // access ob directly
  ob.show_num();

  p = &ob; // assign p the address of ob
  p->show_num(); // access ob using pointer

  return 0;
}


