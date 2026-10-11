-- Definisi tipe data struktur pohon untuk ekspresi matematika
data Ekspresi = Angka Int
              | Tambah Ekspresi Ekspresi
              | Kali Ekspresi Ekspresi
              | Pangkat Ekspresi Int

-- Fungsi murni untuk menghitung isi dari struktur pohon di atas
hitung :: Ekspresi -> Int
hitung (Angka n)         = n
hitung (Tambah eks1 eks2) = hitung eks1 + hitung eks2
hitung (Kali eks1 eks2)   = hitung eks1 * hitung eks2
hitung (Pangkat eks n)    = (hitung eks) ^ n

main :: IO ()
main = do
    -- Membuat representasi dari rumus: (5 + 3) * (2 pangkat 3)
    -- Rumus ini disusun dalam bentuk pohon objek fungsional
    let rumus = Kali (Tambah (Angka 5) (Angka 3)) (Pangkat (Angka 2) 3)
    
    putStrLn "Hasil evaluasi rumus kompleks:"
    print (hitung rumus) -- Hasilnya otomatis keluar: 64
    print (1+1)\

    readIO
