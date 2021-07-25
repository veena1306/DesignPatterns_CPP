class Singleton
{ 
  private :
  static Singleton* Instance;   // Here instance will be stored
  Singleton();   //private constructor 
  
  public :
  static Singleton* getInstance();
};

Singleton::Singleton()
{
}

Singletion* Singletion:: getInstance()
{
 if(instance == 0)
 {
   instance = new Singletion();
 }
  return instance;
}

/* Null, because instance will be initialized on demand. */
Singletion* Singletion:: Instance = 0;

int main()
{
  Singletion* s::Singletion.getInstance();
  Singletion* r::Singletion.getInstance();

}



