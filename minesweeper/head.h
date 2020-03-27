//ismine
#define MINEIN 1
#define NOMINE 0
//block_status
#define COVERED 1
#define UNCOVERED 2
#define FLAGED 3
//Uncover 的返回值
#define SAFE 1//正常翻牌
#define REFUSE 2//已插旗，本次选择无效
#define BANG 3//踩雷，游戏结束

struct Block
{
        int  ismine ;
        int mines_around ;
        int block_status;
};