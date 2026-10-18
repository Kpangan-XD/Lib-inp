#include <iostream>
#include <memory>
// Pustaka header bawaan dari paket devel yang baru di-install
#include <mysql-cppconn/mysql/jdbc.h>

int main() {
    try {
        // 1. Inisialisasi Driver MySQL
        auto* driver = sql::mysql::get_driver_instance();

        // 2. Buat Koneksi ke Server Database (Ganti sesuai konfigurasi Anda)
        std::unique_ptr<sql::Connection> con(
            driver->connect("tcp://127.0.0.1:3306", "root", "123")
        );

        // 3. Pilih Nama Database
        con->setSchema("crud_db");

        // 4. Jalankan Query Menggunakan Prepared Statement (Lebih Aman)
        std::unique_ptr<sql::PreparedStatement> stmt(
            con->prepareStatement("SELECT id, name, email FROM users WHERE id = ?")
        );
        
        // Mengisi tanda tanya (?) pertama dengan ID angka 1
        stmt->setInt(1, 19); 

        // 5. Eksekusi dan Tangkap Hasilnya (ResultSet)
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery());

        // Loop untuk menampilkan semua data yang ditemukan
        while (res->next()) {
            std::cout << "ID: " << res->getInt("id") << std::endl;
            std::cout << "name: " << res->getString("name") << std::endl;
            std::cout << "Email: " << res->getString("email") << std::endl;
            std::cout << "----------------------" << std::endl;
        }

    } catch (sql::SQLException &e) {
        // Menangkap error jika koneksi gagal atau kueri SQL salah
        std::cerr << "# ERR: SQLException di " << __FILE__;
        std::cerr << " (" << __FUNCTION__ << ") pada baris " << __LINE__ << std::endl;
        std::cerr << "# ERR: " << e.what();
        std::cerr << " (MySQL error code: " << e.getErrorCode();
        std::cerr << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }

    return 0;
}
