class Test{
 public:  
  Test()=default;
  Test(const Test&)=default;
  Test(Test&&)=default;
  Test& operator=(const Test&)=default;
  Test& operator=(Test&&)=default;
  ~Test()=default;  
};
