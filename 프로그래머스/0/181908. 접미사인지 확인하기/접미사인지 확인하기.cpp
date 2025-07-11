#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int my_len = my_string.length();
    int suf_len = is_suffix.length();

    for (int i = 0; i < suf_len; i++) {
        if (my_string[my_len - suf_len + i] != is_suffix[i]) {
            return 0;
        }
    }

    return 1;
}