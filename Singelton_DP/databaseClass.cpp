/* A component which is instantiated just only once */

class SingletonDatabase
{
  private :
  SingletonDatabase()
  {
    cout << "initializing the database" <<endl;
    ifstream ifs("capital.txt");
    
   string s, s2;
   while(getline(ifs,s)) {
     getline(ifs,s2);
     int pop = lexical_cast<int>s2;
     capital[s] = pop;
   }
  }
  map <string, int>capitals;
 
  public :
  SingletonDatabase(SingletonDatabase const&) = delete;
  void operator = (SingletonDatabase const&) = delete;
  
  static SingletonDatabase& get()
  {
   static SingletonDatabase db;
    return db;
  }
  
  int getpopulation(const string& name)
  {
    return cappitals[name]; 
  }
};

int main()
{
  string city = "Tokyo";
  cout << city << "has population <<
  SingletonDatabase::get().getpopulation(city)<<endl;;
  
  
  
}
