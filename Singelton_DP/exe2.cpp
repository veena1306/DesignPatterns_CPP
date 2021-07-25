class Singleton
{
  private :
  int data;
  static Singleton* instance;
  static Singleton* getinstance();
  
  Singleton()
  {
   data = 0;
  } 
  
  void setdata(int x)
  {
    data = x; 
  }
  
  int getdata()
  {
   return x; 
  }  
};

Singleton* Singleton :: instance = 0;

Singleton* Singleton :: getinstance() 
{
  if(!instance) 
  {
    instance = new Singleton(); 
  }
   return instance;
}

int main()
{
  Singleton* s1 = s1->getinstance();
  cout << s1->getdata() <<endl;
  s1->setdata(100);
  cout << s1->getdata() <<endl;
  return 0;
  } 









