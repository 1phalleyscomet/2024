
#7번 
# 리스트 안에 업무 이름과 업무 우선순위가 함께 주어졌을 때 오름차순 업무 순위에 따라 업무 이름을 출력

def solution(data):
    return list(map(lambda x:x[0],sorted(data, key=lambda x:x[1])))
    
   #sorted(data, key=lambda x:x[1]) -> data의 key를 lambda x기준을 정렬
   #lambda x :x[1] -> x의 2번째 요소 순으로 정렬
   #map(lambda x:x[0] -> x[0]를 반환
   #list로 변환
 