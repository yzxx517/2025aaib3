//week08-4.cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d = 0; //0:�_, 1:�F, 2:�n, 3:��
        int x = 0, y = 0; //�@�}�l�b(0,0)
        instructions = instructions + instructions + instructions + instructions; //���ƨ�4���^����I
        for(char c : instructions) {
            if(c=='G'){//���e��
                if(d==0) y++; //���_��1��
                if(d==1) x++; //���F��1��
                if(d==2) y--; //���n��1��
                if(d==3) x--; //���訫1��
            }else if (c=='R'){//���k��(���ɰw90��)
                d = (d+1) % 4;
            }else if (c=='L'){//������(�f�ɰw90��)
                d = (d+3) % 4;
            }
        }
        return x==0 && y==0;//������, �����H�b����? ����s¶���
    }
};
