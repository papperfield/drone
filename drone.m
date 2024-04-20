% 연도, 월, 날짜, 시간, 추가할 시간 입력 받기
year = input('연도를 입력하세요: ');
month = input('월을 입력하세요: ');
day = input('날짜를 입력하세요: ');
hour = input('시간을 입력하세요: ');
hoursToAdd = input('추가할 시간을 입력하세요: ');

% 초, 분, 일을 더하는 것은 쉽지 않기 때문에 시간만 더하기
hour = hour + hoursToAdd;

% 시간을 일(day)로 변환하기
daysToAdd = fix(hour / 24);
hour = mod(hour, 24);

% 추가된 일 수를 날짜에 반영하기
day = day + daysToAdd;

% 해당 월의 마지막 날짜를 확인하여 날짜를 업데이트하기1
while day > 31 || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) || (month == 2 && ((mod(year, 4) == 0 && mod(year, 100) ~= 0) || mod(year, 400) == 0) && (day > 29 || (day > 28 && (mod(year, 4) ~= 0 || mod(year, 100) == 0))))
    if month == 2 && ((mod(year, 4) == 0 && mod(year, 100) ~= 0) || mod(year, 400) == 0)
        daysInMonth = 29;
    elseif month == 2
        daysInMonth = 28;
