#3번
#주어진 리스트에서 3과 5의 배수를 제외한 모든 수를 더하는 solution함수

def solution(data):
    return sum(filter(lambda x: (x%3!=0) and (x%5!=0),data))
    
    #lambda x의 값이 true 인 것을 data 에서 반환
   #lambda x : x를 각각 5와 3으로 나눈 값의 나머지가 0이 아닌 값