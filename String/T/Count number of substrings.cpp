#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int  

int distinctSubstring(string str) 
{ 
   
    set<string> result ; 

   
    for (int i = 0; i <= str.length(); i++) 
    { 
        for (int j = 1; j <= str.length()-i; j++) 
        { 

            // Add each substring in Set 
            result.insert(str.substr(i, j)); 
        } 
    } 

    for(auto it:result){
        cout<<it<<" ";
    }

    cout<<endl;
    return result.size(); 
} 

// the number of subarrays with at most K distinct elements
int most_k_chars(string& s, int k)
{
    if (s.size() == 0) {
        return 0;
    }
    unordered_map<char, int> map;
    int num = 0, left = 0;
 
    for (int i = 0; i < s.size(); i++) {
        map[s[i]]++;
        while (map.size() > k) {
            map[s[left]]--;
            if (map[s[left]] == 0) {
                map.erase(s[left]);
            }
            left++;
        }
        num += i - left + 1;
    }
    return num;
}
 
int exact_k_chars(string& s, int k)
{
    return most_k_chars(s, k) - most_k_chars(s, k - 1);
}  


long long int substrCount(string a , int k) {
      long long int n = a.length();
        
    	int alpha[26];  memset(alpha , 0 , sizeof(alpha));
        
      int i = 0 , j = 0 , Size = 0;
        
      long long int greater = 0;
        
      while(i < n) {
            alpha[a[i] - 'a']++;
            
            if(alpha[a[i] - 'a'] == 1)
            Size++;
            
            if(Size > k)
            {
            
                while(Size > k)
                {
                    alpha[a[j] - 'a']--;
                    
                    if(alpha[a[j] - 'a'] == 0)  Size--;
                    
                    j++;
                }
                
                greater += j;
                
                j--;
                
                alpha[a[j] - 'a']++;
                
                if(alpha[a[j] - 'a'] == 1)
                Size++;
            }
            i++;
      }
        
        i = 0 , j = 0 , Size = 0;
        
        long long int smaller = 0;
        
        memset(alpha , 0 , sizeof(alpha));
        
        while(i < n)
        {
            alpha[a[i] - 'a']++;
            
            if(alpha[a[i] - 'a'] == 1)
            Size++;
            
            if(Size >= k)
            {
            
                while(Size >= k)
                {
                    alpha[a[j] - 'a']--;
                    
                    if(alpha[a[j] - 'a'] == 0)  Size--;
                    
                    j++;
                }
                
                j--;
                
                smaller += (i - j);
                
                alpha[a[j] - 'a']++;
                
                if(alpha[a[j] - 'a'] == 1)
                Size++;
            }
            else
            smaller += (i+1);
            
            i++;
        }
        
        return (((n * (n + 1)) / 2) - (greater + smaller));
}


long long int substrCount1(string str, int k) {
  
  
    int n = str.length();
 
    // Initialize result
    int res = 0;
 
    // To store count of characters from 'a' to 'z'
    int cnt[26];
 
    // Consider all substrings beginning with
    // str[i]
    for (int i = 0; i < n; i++)
    {
        int dist_count = 0;
 
        // Initializing array with 0
        memset(cnt, 0, sizeof(cnt));
 
        // Consider all substrings between str[i..j]
        for (int j=i; j<n; j++)
        {
            // If this is a new character for this
            // substring, increment dist_count.
            if (cnt[str[j] - 'a'] == 0)
                dist_count++;
 
            // Increment count of current character
            cnt[str[j] - 'a']++;
 
            // If distinct character count becomes k,
            // then increment result.
            if (dist_count == k)
                res++;
            if(dist_count > k) break;
        }
    }
 
    return res;
     	
}


int main() {

//   int k;cin>>k;
  string s;cin>>s;

  cout<<distinctSubstring(s);
}



