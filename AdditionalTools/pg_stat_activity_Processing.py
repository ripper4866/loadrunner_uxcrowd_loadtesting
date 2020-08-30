import psycopg2

database = "do-prod"
user = "do-prod"
password = "do-prod"

con = psycopg2.connect(
    database=database,
    user=user,
    password=password,
    host="loadtest.uxcrowd.ru",
    port="5432"
)

print("Database opened successfully")

cur = con.cursor()

cur.execute(f"select * from pg_stat_database where datname=\'{database}\';")
rows = cur.fetchall()
print(f"DATABASE {database} STATISTICS:")
for counter, field in enumerate(rows):
    print("======== RECORD", counter + 1, " ========")
    print("datid:", field[0])
    print("datname:", field[1], "-- ИМЯ БД")
    print("numbackends:", field[2], "-- КОЛ-ВО СЕРВЕРНЫХ ПРОЦЕССОВ В ДАННЫЙ МОМЕНТ")
    print("xact_commit:", field[3])
    print("xact_rollback:", field[4])
    print("blks_read:", field[5], "-- КОЛ-ВО СЧИТАННЫХ ДИСКОВЫХ БЛОКОВ")
    print("blks_hit:", field[6], "-- КОЛ-ВО ДИСКОВЫХ БЛОКОВ, ОБНАРУЖЕННЫХ В КЕШЕ")
    print("tup_returned:", field[7], "-- СТРОК СЧИТАНО")
    print("tup_fetched:", field[8], "-- СТРОК ИЗВЛЕЧЕНО")
    print("tup_inserted:", field[9], "-- СТРОК ВСТАВЛЕНО")
    print("tup_updated:", field[10], "-- СТРОК ИЗМЕНЕНО")
    print("tup_deleted:", field[11], "-- СТРОК УДАЛЕНО")
    print("conflicts:", field[12])
    print("temp_files:", field[13])
    print("temp_bytes:", field[14])
    print("deadlocks:", field[15])
    print("blk_read_time:", field[16])
    print("blk_write_time:", field[17])
    print("stats_reset:", field[18], "-- ДАТА ПОСЛЕДНЕГО СБРОСА СТАТИСТИКИ")
    print("\nСоотношение blks_hit/blks_read позволяет оценить,\nнасколько часто требуемые блоки обнаруживаются в кеше Postgres\n")
    if (field[5]):
      blocks_ratio = field[6] / field[5]
    else:
      blocks_ratio = 0
    print("Blocks Ratio:", blocks_ratio, '\n')

    print("======== RECORD", counter + 1, "ended ===\n")

cur.execute("select * from pg_stat_user_tables;")
rows = cur.fetchall()
print("TABLES STATISTICS:")
for counter, field in enumerate(rows):
    print("======== RECORD", counter + 1, " ========")
    print("relid:", field[0])
    print("schemaname:", field[1])
    print("relname:", field[2])
    print("seq_scan:", field[3], "-- КОЛ-ВО ПОСЛЕДОВАТЕЛЬНЫХ ЧТЕНИЙ, ЗАПУЩЕННЫХ ПО ЭТОЙ ТАБЛИЦЕ")
    print("seq_tup_read:", field[4], "-- КОЛ-ВО \"ЖИВЫХ\" СТРОК, ПРОЧИТАННЫХ ПРИ ПОСЛЕДОВАТЕЛЬНЫХ ЧТЕНИЯХ")
    print("idx_scan:", field[5], "-- КОЛ-ВО СКАНИРОВАНИЙ ПО ИНДЕКСУ, ЗАПУЩЕННЫХ В ЭТОЙ ТАБЛИЦЕ")
    print("idx_tup_fetch:", field[6], "-- КОЛ-ВО \"ЖИВЫХ\" СТРОК, ОТОБРАННЫХ ПРИ СКАНИРОВАНИИ ПО ИНДЕКСУ")
    print("n_tup_ins:", field[7], "-- СТРОК ВСТАВЛЕНО")
    print("n_tup_upd:", field[8], "-- СТРОК ИЗМЕНЕНО")
    print("n_tup_del:", field[9], "-- СТРОК УДАЛЕНО")
    print("n_tup_hot_upd:", field[10])
    print("n_live_tup:", field[11])
    print("n_dead_tup:", field[12])
    print("n_mod_since_analyze:", field[13])
    print("last_vacuum:", field[14])
    print("last_autovacuum:", field[15])
    print("last_analyze:", field[16])
    print("last_autoanalyze:", field[17])
    print("vacuum_count:", field[18])
    print("autovacuum_count:", field[19])
    print("analyze_count:", field[20])
    print("autoanalyze_count:", field[21])
    print("======== RECORD", counter + 1, "ended ===\n")
print("Operation done successfully")
con.close()
