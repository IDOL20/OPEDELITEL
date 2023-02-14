
#include <iostream>
using namespace std;
int razmer = 0;double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0;
double determinant2 = 0;double determinant3 = 0;double determinant4 = 0;double determinant5 = 0;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите порядок квадратной матрицы до 5 (включая 5):\n";
    cin >> razmer;

    switch (razmer) {
    case 2:
        cout << "Введите элемент А11=";cin >> a;cout << "Введите элемент А12=";cin >> b;
        cout << "Введите элемент А21=";cin >> c;cout << "Введите элемент А22=";cin >> d;
        cout << "\n";
        cout << "Ваша матрица:";cout << "\n";
        cout << a << "\t" << b << "\n";
        cout << c << "\t" << d << "\n";
        break;
    case 3:
        cout << "Введите элемент А11=";cin >> a;cout << "Введите элемент А12=";cin >> b;cout << "Введите элемент А13=";cin >> c;
        cout << "Введите элемент А21=";cin >> d;cout << "Введите элемент А22=";cin >> e;cout << "Введите элемент А23=";cin >> f;
        cout << "Введите элемент А31=";cin >> g;cout << "Введите элемент А32=";cin >> h;cout << "Введите элемент А33=";cin >> i;
        cout << "\n";
        cout << "Ваша матрица:";cout << "\n";
        cout << a << "\t" << b << "\t" << c << "\n";
        cout << d << "\t" << e << "\t" << f << "\n";
        cout << g << "\t" << h << "\t" << i << "\n";
        break;
    case 4:
        cout << "Введите элемент А11=";cin >> a;cout << "Введите элемент А12=";cin >> b;cout << "Введите элемент А13=";cin >> c;cout << "Введите элемент А14=";cin >> d;
        cout << "Введите элемент А21=";cin >> e;cout << "Введите элемент А22=";cin >> f;cout << "Введите элемент А23=";cin >> g;cout << "Введите элемент А24=";cin >> h;
        cout << "Введите элемент А31=";cin >> i;cout << "Введите элемент А32=";cin >> j;cout << "Введите элемент А33=";cin >> k;cout << "Введите элемент А34=";cin >> l;
        cout << "Введите элемент А41=";cin >> m;cout << "Введите элемент А42=";cin >> n;cout << "Введите элемент А43=";cin >> o;cout << "Введите элемент А44=";cin >> p;
        cout << "\n";
        cout << "Ваша матрица:";cout << "\n";
        cout << a << "\t" << b << "\t" << c << "\t" << d << "\n";
        cout << e << "\t" << f << "\t" << g << "\t" << h << "\n";
        cout << i << "\t" << j << "\t" << k << "\t" << l << "\n";
        cout << m << "\t" << n << "\t" << o << "\t" << p << "\n";
        break;
    case 5:
        cout << "Введите элемент А11=";cin >> a;cout << "Введите элемент А12=";cin >> b;cout << "Введите элемент А13=";cin >> c;cout << "Введите элемент А14=";cin >> d;cout << "Введите элемент А15=";cin >> e;
        cout << "Введите элемент А21=";cin >> f;cout << "Введите элемент А22=";cin >> g;cout << "Введите элемент А23=";cin >> h;cout << "Введите элемент А24=";cin >> i;cout << "Введите элемент А25=";cin >> j;
        cout << "Введите элемент А31=";cin >> k;cout << "Введите элемент А32=";cin >> l;cout << "Введите элемент А33=";cin >> m;cout << "Введите элемент А34=";cin >> n;cout << "Введите элемент А35=";cin >> o;
        cout << "Введите элемент А41=";cin >> p;cout << "Введите элемент А42=";cin >> q;cout << "Введите элемент А43=";cin >> r;cout << "Введите элемент А44=";cin >> s;cout << "Введите элемент А45=";cin >> t;
        cout << "Введите элемент А51=";cin >> u;cout << "Введите элемент А52=";cin >> v;cout << "Введите элемент А53=";cin >> w;cout << "Введите элемент А54=";cin >> x;cout << "Введите элемент А55=";cin >> y;
        cout << "\n";
        cout << "Ваша матрица:";cout << "\n";
        cout << a << "\t" << b << "\t" << c << "\t" << d << "\t" << e << "\n";
        cout << f << "\t" << g << "\t" << h << "\t" << i << "\t" << j << "\n";
        cout << k << "\t" << l << "\t" << m << "\t" << n << "\t" << o << "\n";
        cout << p << "\t" << q << "\t" << r << "\t" << s << "\t" << t << "\n";
        cout << u << "\t" << v << "\t" << w << "\t" << x << "\t" << y << "\n";
        break;
    default:
        cout << "Введен неправильный порядок матрицы.\nПопробуйте снова.:)";
        return 0;
    }


    cout << "\n";
    if (razmer == 2)
    {
        cout << "Определитель матрицы 2x2 равен:\n";
        determinant2 = (a * d) - (c * b);
        cout << determinant2;
    }
    else if (razmer == 3)
    {
        cout << "Определитель матрицы 3x3 равен:\n";
        determinant3 = ((a * e * i) + (b * f * g) + (d * h * c)) - ((g * e * c) + (a * f * h) + (d * b * i));
        cout << determinant3;

    }
    else if (razmer == 4)
    {
        cout << "Определитель матрицы 4x4 равен:\n";
        double a1 = ((f * k * p) + (j * o * h) + (g * l * n)) - ((n * k * h) + (o * l * f) + (j * g * p));
        double a11 = a * a1;
        double b1 = ((e * k * p) + (g * l * m) + (i * o * h)) - ((k * h * m) + (o * l * e) + (i * g * p));
        double b12 = b * b1;
        double c1 = ((e * j * p) + (f * l * m) + (i * n * h)) - ((m * j * h) + (n * l * e) + (i * f * p));
        double c13 = c * c1;
        double d1 = ((e * j * o) + (i * n * g) + (f * k * m)) - ((m * j * g) + (n * k * e) + (i * f * o));
        double d14 = d * d1;
        determinant4 = a11 - b12 + c13 - d14;
        cout << determinant4 << "\n";
    }
    else if (razmer == 5)
    {
        cout << "Определитель матрицы 5x5 равен:\n";
        double g1 = ((m * s * y) + (r * x * o) + (n * t * w)) - ((o * s * w) + (t * x * m) + (r * n * y));
        double g11 = g * g1;
        double h1 = ((l * s * y) + (q * x * o) + (n * t * v)) - ((o * s * v) + (l * t * x) + (q * n * y));
        double h12 = h * h1;
        double i1 = ((l * r * y) + (q * w * o) + (m * t * v)) - ((o * r * v) + (l * t * w) + (q * m * y));
        double i13 = i * i1;
        double j1 = ((l * r * x) + (q * w * n) + (m * s * v)) - ((n * r * v) + (q * m * x) + (s * w * l));
        double j14 = j * j1;
        double detA = g11 - h12 + i13 - j14;//detA
        double f1 = ((m * s * y) + (r * x * o) + (n * t * w)) - ((o * s * w) + (r * n * y) + (x * t * m));
        double f11 = f * f1;
        double h11 = ((k * s * y) + (u * n * t) + (p * x * o)) - ((o * s * u) + (p * n * y) + (x * t * k));
        double h121 = h * h11;
        double i11 = ((k * r * y) + (p * w * o) + (m * t * u)) - ((o * r * u) + (k * t * w) + (p * m * y));
        double i131 = i * i11;
        double j11 = ((k * r * x) + (p * w * n) + (m * s * u)) - ((n * r * u) + (k * s * w) + (p * m * x));
        double j141 = j * j11;
        double detB = f11 - h121 + i131 - j141;//detB
        double ff1 = ((l * s * y) + (q * x * o) + (n * t * v)) - ((o * s * v) + (l * t * x) + (q * n * y));
        double ff11 = f * ff1;
        double hh11 = ((k * s * y) + (p * x * o) + (n * t * u)) - ((o * s * u) + (k * t * x) + (p * n * y));
        double hh121 = g * hh11;
        double ii11 = ((k * q * y) + (p * v * o) + (l * t * u)) - ((o * q * u) + (k * t * v) + (p * l * y));
        double ii131 = i * ii11;
        double jj11 = ((k * q * x) + (p * v * n) + (l * s * u)) - ((n * q * u) + (v * s * k) + (p * l * x));
        double jj141 = j * jj11;
        double detC = ff11 - hh121 + ii131 - jj141;//detC
        double ff1a = ((l * r * y) + (q * w * o) + (m * t * v)) - ((o * r * v) + (t * w * l) + (q * m * y));
        double ff11a = f * ff1a;
        double hh11a = ((k * r * y) + (p * w * o) + (m * t * u)) - ((o * r * u) + (k * t * w) + (p * m * y));
        double hh121a = g * hh11a;
        double ii11a = ((k * q * y) + (p * o * v) + (l * t * u)) - ((o * q * u) + (v * t * k) + (p * l * y));
        double ii131a = h * ii11a;
        double jj11a = ((k * q * w) + (p * v * m) + (l * r * u)) - ((m * q * u) + (k * r * v) + (p * l * w));
        double jj141a = j * jj11a;
        double detD = ff11a - hh121a + ii131a - jj141a;//detD
        double ff1ab = ((l * r * x) + (m * s * v) + (q * w * n)) - ((n * r * v) + (l * s * w) + (q * m * x));
        double ff11ab = f * ff1ab;
        double hh11ab = ((k * r * x) + (p * w * n) + (m * s * u)) - ((n * r * u) + (w * s * k) + (p * m * x));
        double hh121ab = g * hh11ab;
        double ii11ab = ((k * q * x) + (p * v * n) + (l * s * u)) - ((n * q * u) + (v * s * k) + (p * l * x));
        double ii131ab = h * ii11ab;
        double jj11ab = ((k * q * w) + (p * v * m) + (l * r * u)) - ((m * q * u) + (k * r * v) + (p * l * w));
        double jj141ab = i * jj11ab;
        double detE = ff11ab - hh121ab + ii131ab - jj141ab;//detE
        double detAA = a * detA;
        double detBB = b * detB;
        double detCC = c * detC;
        double detDD = d * detD;
        double detEE = e * detE;
        determinant5 = detAA - detBB + detCC - detDD + detEE;
        cout << determinant5 << "\n";
    }
}

