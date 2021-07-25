static singleton
{
  private:
  string value_;
  static singleton *instance;
  singleton(const string value) :: value_(value)
  {
  }
  static singleton *getinstance(const string &value);
  public :
  
  singleton(singleton &) = delete;
  singleton& operator=(singleton &) = delete;
  
};

singleton* singleton :: instance = NULL;

singleton* singleton :: getinstance(const string &value)
{
  if(!instance)
  {
   instance = new singleton(value); 
  }
   return instance;
}

int main()
{
 singleton *s =  simgleton::getInstance("FOO");
 singleton *r =  simgleton::getInstance("TOO");

}


