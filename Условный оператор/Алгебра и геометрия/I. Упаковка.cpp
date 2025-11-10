#include <iostream>
using namespace std;
int main()
{
    int l1, w1, h1, l2, w2, h2, lc, wc, hc, tmp;

    cin >> l1 >> w1 >> h1;
    tmp = l1;
    l1 = max(l1, w1);
    w1 = min(tmp, w1);

    cin >> l2 >> w2 >> h2;
    tmp = l2;
    l2 = max(l2, w2);
    w2 = min(tmp, w2);

    cin >> lc >> wc >> hc;
    tmp = lc;
    lc = max(lc, wc);
    wc = min(tmp, wc);
    
    if (h1 + h2 <= hc && l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc)
    {
        cout << "YES";
    }
    else if (l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc && h1 <= hc && h2 <= hc)
    {
        if (l1 <= lc && w1 <= wc)
        {
            if ((l2 <= wc - w1 && w2 <= lc) || (w2 <= wc - w1 && l2 <= lc) || (l2 <= lc - l1 && w2 <= wc) || (w2 <= lc - l1 && l2 <= wc))
            {
                cout << "YES";
            }
            else if (w1 <= lc && l1 <= wc)
            {
                if ((l2 <= wc - l1 && w2 <= lc) || (l2 <= lc && w2 <= wc - l1) || (l2 <= lc - w1 && w2 <= wc) || (w2 <= lc - w1 && l2 <= wc))
                {
                    cout << "YES";
                }
                else
                {
                    cout << "NO";
                }
            }
            else
            {
                cout << "NO";
            }
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
    cout << "NO";
    }
}