public class Codec {
    
    HashMap<String,String> shortToLongMap = new HashMap();
    HashMap<String,String> longToShortMap = new HashMap();
    
    // Encodes a URL to a shortened URL.
    public String encode(String longUrl) {
        if(longToShortMap.containsKey(longUrl)) {
            return longToShortMap.get(longUrl);
        }    
        
        String url = encodeHelper(longUrl.length());
        shortToLongMap.put(url , longUrl);
        longToShortMap.put(longUrl , url);
        return url;
    }

    // Decodes a shortened URL to its original URL.
    public String decode(String shortUrl) {
        return shortToLongMap.get(shortUrl);
    }
    
    
    public String encodeHelper(int n) {
        final char[] BASE62 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789".toCharArray();
        
        String st = "";
        
        while(n > 0) {
            st += BASE62[n%62];
            n /= 62;
        }
        
        return st;
    }
}
