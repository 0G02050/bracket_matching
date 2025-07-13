#include <stdio.h>

void adjust_score(int *score_ptr, int adjusted_score) {
  *score_ptr = *score_ptr + adjusted_score;
}

int main() {
  int student_score = 85;
  printf("初始分数: %d\n",student_score);
  
  printf("调整分数 +5\n");
  adjust_score(&student_score, 5);

  printf("调整后分数：%d\n",student_score);
  return 0;
}