# Công cụ HybridCFT4Cpp 
Công cụ sinh dữ liệu kiểm thử cho dự án C/C++

Được phát triển từ công cụ CFT4-Cpp core: Video (https://www.youtube.com/watch?v=l3ugnLKmC6g). Mã nguồn lấy lại: https://github.com/huongtw/HybridCFT4Cpp/archive/refs/heads/master.zip

Mục đích: Sinh dữ liệu kiểm thử cho hàm sử dụng đồ thị dòng điều khiển có trọng số và sinh dữ liệu kiểm thử tại biên.

## Môi trường tích hợp để phát triển
* IDE: IntelliJ IDEA 
* Java 8
* Windows 10

## Cài đặt
- Import CFT4cpp-core vào  IntelliJ.
- Cài đặt IDE Dev-cpp (https://sourceforge.net/projects/orwelldevcpp/). Sử dụng trình biên dịch của Dev-Cpp.

## Tiến hành thực nghiệm
### Chỉnh sửa file cấu hình

Vào loccal\z3\setting.properties

(i) Cấu hình trình biên dịch của Dev-cpp
+ GNU_GCC_PATH: đường dẫn đến gcc.exe (ví dụ: C:/MinGW/bin/gcc.exe)
+ GNU_GPlusPlus_PATH: đường dẫn tuyệt đối đến file g++.exe (ví dụ: GNU_GPlusPlus_NAME=g++.exe)
+ GNU_GENERAL: Đường dẫn đến thư mục *bin* (ví dụ: GNU_GENERAL=C:/MinGW/bin)
+ GNU_MAKE_PATH: đường dẫn đến mingw32-make.exe (ví dụ GNU_MAKE_PATH=C:/MinGW/bin/mingw32-make.exe)

(ii) Cài đặt SMT-Solver Z3
+ Z3_SOLVER_PATH: đường dẫn đến z3.exe (ví dụ: D:/Tool_KSE/local/z3/bin/z3.exe)

(iii) Cài đặt mcpp để loại bỏ các chỉ thị tiền xử lý
+ MCPP_EXE_PATH: đường dẫn đến mcpp.exe (ví dụ: MCPP_EXE_PATH=D:/Tool_KSE/local/mcpp/bin/mcpp.exe)

(iv) Cài đặt miền giá trị của các tham số
+ DEFAULT_CHARACTER_LOWER_BOUND: Cận dưới của kiểu ký tự (ví dụ: DEFAULT_CHARACTER_LOWER_BOUND=32)
+ DEFAULT_CHARACTER_UPPER_BOUND: Cận trên của kiểu ký tự (ví dụ: DEFAULT_CHARACTER_UPPER_BOUND=126)
+ DEFAULT_NUMBER_LOWER_BOUND: Cận dưới của kiểu số (ví dụ: DEFAULT_CHARACTER_LOWER_BOUND=32)
+ DEFAULT_NUMBER_UPPER_BOUND: Cận trên của kiểm số (ví dụ: DEFAULT_NUMBER_UPPER_BOUND=100)
+ TEST_ARRAY_SIZE: Kích thước tối da của mảng (sử dụng khi tham số của mảng không được chỉ rõ kích thước mảng)
+ MAX_ITERATION_FOR_EACH_LOOP: Số lần lặp tối đa cho mỗi vòng lặp (ví dụ: MAX_ITERATION_FOR_EACH_LOOP=20)
+ TEST_ARRAY_SIZE: Kích thước của mảng (ví dụ: TEST_ARRAY_SIZE=10)
+ COVERAGE: Độ phủ (ví dụ: COVERAGE=branch)

(v) Đường dẫn đến tệp báo cáo TEST_REPORT
+ Sau khi sinh dữ liệu kiểm thử, sẽ thông báo sinh dữ liệu kiểm thử thành công.  Chọn nút View report trên giao diện để xem report

### Chạy chương trình
- Vào /src/GUI/VNUDSE.java, giao diện khi chạy chương trình
![image](https://user-images.githubusercontent.com/38599931/202668871-1ef3203d-6382-4bf7-8a39-3767ce4b0595.png)
* Bước 1: Chọn đường dẫn đến dự án cần kiểm thử, click chọn [Browse]
* Bước 2: Chọn [Get function list] để tải danh sách các hàm
* Bước 3: Chọn số vòng lặp tối đa trong trường hợp hàm có vòng lặp tại [Maxloop]. Hàm không có vòng lặp thì Maxloop=0
* Bước 4: Chọn một trong các phương pháp sau để thực nghiệm

  STCFG: sinh dữ liệu kiểm thử trong nghiên cứu của Duc-Anh và cộng sự
  
  WCFT: sinh dữ liệu kiểm thử sử dụng đồ thị có trọng số
  
  BVTG: sinh dữ liệu kiểm thử tại biên
  
  IBVTG: cải tiến sinh dữ liệu kiểm thử tại biên.
  
  Hybrid: Phương pháp kết hợp, vừa sinh dữ liệu kiểm thử trọng số, vừa sinh dữ liệu kiểm thử tại biên.
  
* Bước 5: Click [View report]: Để xem báo cáo kết quả sinh dữ liệu kiểm thử sau khi có thông báo sinh dữ liệu thành công

## Danh sách các hàm sử dụng để kiểm thử

Danh sách các hàm được kiểm thử, lấy tại data-test\Sample_for_R1_2, cụ thể như sau:

## Developers
Rd320 room, E3 building, 144 Xuan Thuy street, Ha Noi
