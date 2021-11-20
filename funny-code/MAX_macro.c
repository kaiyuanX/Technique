/* 合格 */
#define MAX(x, y) x > y ? x : y
#define MAX(x, y) (x) > (y) ? (x) : (y)

/* 中等 */
#define MAX(x, y) ((x) > (y) ? (x) : (y))

/* 良好 */
#define MAX(x, y)          \
    ({                     \
        int _x = x;        \
        int _y = y;        \
        _x > _y ? _x : _y; \
    })

/* 优秀 */
#define MAX(type, x, y)    \
    ({                     \
        type _x = x;       \
        type _y = y;       \
        _x > _y ? _x : _y; \
    })

/* typeof 是 GNU C 新增的一个关键字 */
/* (void)(&_x == &_y);  判断两个参数是否一样，不同类型的地址取 == 会警告 */
#define Max(x, y)           \
    ({                      \
        typeof(x) _x = (x); \
        typeof(y) _y = (y); \
        (void)(&_x == &_y); \
        _x > _y ? _x : _y;  \
    })

/* 防临时变量 _x,_y 重名 */
#define Max(x, y)                      \
    ({                                 \
        typeof(x) _max1 = (x);         \
        typeof(y) _max2 = (y);         \
        (void)(&_max1 == &_max2);      \
        _max1 > _max2 ? _max1 : _max2; \
    })
