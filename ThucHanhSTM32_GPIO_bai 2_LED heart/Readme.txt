LẬP TRÌNH GIAO TIẾP GPIO CƠ BẢN
Sử dụng kit STM32F407VE 
Nguồn sung :HSI - 8MHz
Chương trình thực hiện việc làm sáng mô hình LED hình trái tim với các thứ tự:
chớp nháy 2 lần, sáng lần lượt theo kim đồng hồ rồi tắt tất cả, chờ 1 giây thực
hiện tiếp việc sáng tắt lần lượt ở các vị trí LED chẵn có khoảng cách nhau là 2,
chờ 2 giây, chớp nháy 2 lần rồi chờ 1,5 giây xong sáng theo vị trí chẵn theo chiều kim đồng hồ
và theo vị trí lẻ theo ngược chiều kim đồng hồ, chờ 1,5 giây rồi mô hình chớp nháy 1 lần
sau khi chờ 1 giây sẽ sáng theo đường chéo của mô hình rồi hoãn 1 giây, sau đó sáng lần lượt nửa
trên và nửa dưới trái tim kết hợp chớp nháy rồi thực hiện sáng chéo rồi tiếp tục vòng lặp