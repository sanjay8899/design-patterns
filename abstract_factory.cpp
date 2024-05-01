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
    class TaskBar
    {
      public:
      virtual void render()
      {
          cout<<"\n"<<"Base class Task Bar";
        }
    };
    class MacTaskBar: public TaskBar
    {
      public:
      void render()
      {
        cout<<"\n"<<" Here you go, Mac Task Bar";
      }
    };
    class WindowsTaskBar: public TaskBar
    {
      public:
      void render()
      {
        cout<<"\n"<<" Here you go, Windows Task Bar";
      }
    };
    class Dialog
    {
        public:
       virtual Button* create_button()
        {
          return new Button();
        }
        virtual TaskBar* create_taskbar()
        {
          return new TaskBar();
        }
        void render()
        {
          Button* B = create_button();
          TaskBar* T= create_taskbar();
          T->render();
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
        TaskBar* create_taskbar()
        {
          return new WindowsTaskBar();
        }
       

    };
    class MacDialog: public Dialog
    {
        public:
         Button* create_button()
        {
          return new MacButton();
        }
        TaskBar* create_taskbar()
        {
          return new MacTaskBar();
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
    dialog->render();
    return 0;
}