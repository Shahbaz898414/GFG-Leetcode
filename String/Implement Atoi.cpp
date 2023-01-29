#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

// leetcode
int myAtoi(string input) {
  // long  int result = 0;
  //   int indicator = 1;
  //   for(int i = 0; i<str.size();) {
  //       i = str.find_first_not_of(' ');
  //       if(str[i] == '-' || str[i] == '+')
  //           indicator = (str[i++] == '-')? -1 : 1;
  //       while('0'<= str[i] && str[i] <= '9')  {
  //           result = result*10 + (str[i++]-'0');
  //           if(result*indicator >= INT_MAX) return INT_MAX;
  //           if(result*indicator <= INT_MIN) return INT_MIN;                
  //       }
  //       return result*indicator;
        
  //   }

    int sign = 1; 
        int result = 0; 
        int index = 0;
        int n = input.size();
        
        while (index < n && input[index] == ' ') { 
            index++; 
        }
        
        if (index < n && input[index] == '+') {
            sign = 1;
            index++;
        } else if (index < n && input[index] == '-') {
            sign = -1;
            index++;
        }
        
        while (index < n && isdigit(input[index])) {
            int digit = input[index] - '0';
            if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && digit > INT_MAX % 10)) { 
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            result = 10 * result + digit;
            index++;
        }
        
        return sign * result;
        
}


// gfg

int atoi(string s) {
    int sign=0,len=s.size();

    long int out;

    for (int i = 0; i <len; i++) {
      if(i==0 and s[i]==45){
        sign=1;
        continue;
      }

      if(s[i]>='0' and s[i]<='9'){
        if(i==0){
          out=s[i]-48;
        }else{
          out=out*10;
          out+=(s[i]-48);
        }
      }else return -1;
    }

    if(s[0] == '-') {
      out=out*-1;
    }

    return out;
}



int main() {

  string s;cin>>s;

  cout<<myAtoi(s);


}



