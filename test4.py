#6번
#주어진 문자열의 숫자를 모두 더하는 solution함수

def solution(data):
    return sum( map(int, filter(str.isdigit,data)))
    
    #문자열 data에서 10진수인 값만 반환
    #int() -> 정수 변환 후 값은 모두 합함
