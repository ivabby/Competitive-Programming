class Solution {
public:
    string validIPAddress(string IP) {
        
        bool f1 = true;
        if((IP.find('.') != string::npos && IP.find(':') != string::npos))
            return "Neither";
        
        if(IP.find('.') != string::npos)
        {
            IP = IP + ".";
            int cnt = 0;
            string val = "";
            for(auto i : IP)
            {
                if(i != '.')
                {
                    if(i>='0' && i<='9')
                        val += i;
                    else
                        return "Neither";
                }
                else
                {
                    cnt++;
                    if(val == "" ||( val[0] == '0'  && val.length() > 1)|| val.length() > 4) return "Neither";
                    int v = stoi(val);
                    if(v<0 || v>255)
                       return "Neither";
                    val = "";
                }
            }
            return (cnt == 4)?"IPv4":"Neither";
        }
        else
        {
            IP = IP + ":";
            string val = "";
            int cnt = 0;
            for(auto i : IP)
            {
                if(i != ':')
                {
                    if((i>'f' && i<='z') || (i>'F' && i<='Z'))
                        return "Neither";
                    if(!((i>='a' && i<='z') || (i>='A' && i<='Z') || (i>='0' && i<='9')))
                        return "Neither";
                    val = val + i;
                }
                else
                {
                    cnt++;
                    if(val == "" || val.length() < 0 || val.length() > 4)
                        return "Neither";
                    val = "";
                }
            }
            return (cnt == 8)?"IPv6":"Neither";
        }
        
        return "Neither";
    }
};
