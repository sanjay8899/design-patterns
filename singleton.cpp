//This one is a WIP, has errors
# include <bits/stdc++.h>
using namespace std;
class Government
{public:
  static Government* G;
  Government* get_instance();
  protected:
  Government()
  {}
  
};
Government* Government::get_instance()
{
  if(G==nullptr)
    {
      G=new Government();
    }
    return G;
}
int main()
{
  //Government G1,G2;
  Government *G1;
  Government *G2;
  
  if(G1==G2)
  {
    cout<<"single instance";
  }
  else
  {
  cout<<"multiple instances";
  }
  return 0;
}