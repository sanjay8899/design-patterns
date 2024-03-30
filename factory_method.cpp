# include <bits/stdc++.h>
using namespace std;

 class Button
    {
        public:
        virtual void render()
        {
          cout<<"\n"<<"Base class Button";
        }
    };
    class Dialog
    {
        public:
       virtual Button* create_button()
        {
          return new Button();
        }
        
        void render_button()
        {
          Button* B = create_button();
            B->render();
        }
    };

    class WindowsButton: public Button
    {
        void render()
        {
            std::cout<<"\n"<<"This is windows button";
        }
    };
    class MacButton: public Button
    {
        void render()
        {
            std::cout<<"\n"<<"This is mac button";
        }
    };
    class WindowsDialog: public Dialog
    {
        public:
        Button* create_button()
        {
          return new WindowsButton();
        }
       

    };
    class MacDialog: public Dialog
    {
        public:
         Button* create_button()
        {
          return new MacButton();
        }
    };
    
int main()
{
   
    Dialog *dialog = new Dialog();
    cout<<"Are you on Mac or Windows?: ";
    string oss="";
    cin>>oss;
    cout<<"okay got it "<<oss<<" ...";
    string os_lower="";
    for(char c:oss)
    {
        os_lower+=tolower(c);
    }
    if(os_lower=="windows")
    {
        dialog = new WindowsDialog();
    }
    else
    {
        dialog = new MacDialog();
    }
    dialog->render_button();
    return 0;
}