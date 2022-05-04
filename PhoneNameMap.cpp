#include <iostream>
#include<map>

int main(){

  int i, n;

  std::cin >> n;
  std::string name, number, key;
  std::map<std::string, std::string> phone_dir;

  for(i = 0; i < n; i++){
      
    std::cin >> name >> number;
    phone_dir.insert(std::pair <std::string, std::string> (name, number));

  }

  while(std::cin >> key){

    if(auto res = phone_dir.find(key); res != phone_dir.end()){
      std::cout << key << " = " << res->second << "\n";
    }
    
    else{
      std::cout << "Not found" << "\n";
    }
  
  }

  return 0;

} 