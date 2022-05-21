#include<string>
#include <unordered_map>
bool scramble(const std::string& s1, const std::string& s2){
 
  std::unordered_map<char, int> umap; 
  /*if (s1.size()==0||)
      return {}; */ 
  for (int i=0;i<s2.size();i++)
      umap[(s2[i])]++;
  for (int i=0;i<s1.size();i++)
      cout>>umap[(s1[i])];
 
 
}
int main()
{	


scramble("rkqodlw", "world");
scramble("cedewaraaossoqqyt", "codewars");


}
