#include <string>
#include <vector>

namespace crypto_square {
    class cipher {
    public:
        cipher(std::string c) : plaintext(c) {};
        std::string normalize_plain_text();
        unsigned size();
        std::vector<std::string> plain_text_segments();
        std::string cipher_text();
        std::string normalized_cipher_text();
        
    private:
        std::string plaintext;
    };
}