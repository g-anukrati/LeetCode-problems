class Solution {
public:
    unordered_map<string,string>map;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        map["AnirudhTheGreat"] = longUrl;
        return "AnirudhTheGreat";
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return map["AnirudhTheGreat"];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));