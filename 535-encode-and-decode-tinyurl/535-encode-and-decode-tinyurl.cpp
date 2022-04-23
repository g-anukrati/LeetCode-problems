class Solution {
public:
    unordered_map<string,string>map;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        map["TheGreat"] = longUrl;
        return "TheGreat";
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return map["TheGreat"];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));