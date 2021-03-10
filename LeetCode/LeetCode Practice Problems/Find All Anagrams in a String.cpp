class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k = p.size();
        int n = s.size();
        vector<int> vec;
        int count1[26]={0};
        for(int i=0;i<k;i++)
        {
            count1[p[i]-'a']++;
        }
        int i=0,j=0,count2[26]={0};
        while(j<n)
        {
            count2[s[j]-'a']++;
            if(j-i+1 < k)
                j++;
            else if(j-i+1 == k)
            {
                int flag = 1;
                for(int x=0;x<26;x++)
                {
                    if(count1[x] != count2[x])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    vec.push_back(i);
                }
                count2[s[i]-'a']--;
                i++;j++;
            }
        }
        return vec;
    }
};
