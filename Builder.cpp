# include <bits/stdc++.h>
using namespace std;
class car{
  public:
  vector<string> parts;
  void list_parts()
  {
    cout<<"\n"<<"your car has: ";
    for(int i=0;i<parts.size();i++)
    {
      
      cout<<"\n"<<parts[i];
    }
  }
};
class Builder
{
  public:
  car *c;
  Builder()
  {
    c = new car();
  }
  void add_door()
  {
    c->parts.push_back("door");
  }
  void add_window()
  {
    c->parts.push_back("window");
  }
  void add_ac()
  {
    c->parts.push_back("AC");
  }
  void add_tyre()
  {
    c->parts.push_back("tyre");
  }
  void add_sunroof()
  {
    c->parts.push_back("sunroof");
  }
  void show_car()
  {
    c->list_parts();
  }
};
int main()
{
   Builder B1,B2;
   B1.add_sunroof();
   B1.add_tyre();
   B1.add_door();
   B1.show_car();
   
   B2.add_tyre();
   B2.add_door();
   B2.add_ac();
   B2.add_window();
   B2.show_car();
    return 0;
}