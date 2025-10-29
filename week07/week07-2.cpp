/// week07-2.cpp LeetCode�ǲ��D�� Simulation ��2�D
/// 657: Robot Return to Origin
/// 'U' up���W, 'D' down���U, 'L' left����, 'R' right���k
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; // �@�}�l����m, �b (0,0)
        // for (int i=0; i<moves.length(); i++) { // �ǲΪ� for �j��
        //     char c = moves[i]; // ���X�r��̲�i�Ӧr��
        for (char c : moves) { // ²�g���j��
            if (c == 'U') { // up���W
                y++;
            }
            else if (c == 'D') { // down���U
                y--;
            }
            else if (c == 'L') { // left����
                x--;
            }
            else if (c == 'R') { // right���k
                x++;
            }
        }
        // �j��]����
        if (x == 0 && y == 0) return true;
        else return false;
    }
};
