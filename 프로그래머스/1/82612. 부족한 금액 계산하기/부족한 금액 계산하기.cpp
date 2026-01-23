using namespace std;

long long solution(int price, int money, int count)
{   
    long long total = (long long)price * count * (count + 1) / 2;
    long long diff = total - money;

    return diff > 0 ? diff : 0;
}