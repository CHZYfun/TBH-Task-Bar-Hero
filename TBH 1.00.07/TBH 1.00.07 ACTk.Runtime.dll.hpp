// ============================================================
// Image: ACTk.Runtime.dll
// ============================================================

namespace Microsoft.CodeAnalysis
{

    // Namespace: Microsoft.CodeAnalysis
    class EmbeddedAttribute : public Attribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x65BDD0
    };

} // namespace Microsoft.CodeAnalysis

namespace System.Runtime.CompilerServices
{

    // Namespace: System.Runtime.CompilerServices
    class IsUnmanagedAttribute : public Attribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x65BDD0
    };

} // namespace System.Runtime.CompilerServices

// Namespace: <global>
struct MonoScriptData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Byte[][] FilePathsData; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Byte[][] TypesData; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t TotalTypes; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t TotalFiles; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool IsEditorOnly; // 0x0028
};

// Namespace: <global>
class dam
{
public:

    // Methods
    static MonoScriptData mgv();  // RVA: 0x65CC40
    static MonoScriptData vyt();  // RVA: 0x65CD20
    void .ctor();  // RVA: 0x626570
    static MonoScriptData dxh();  // RVA: 0x65CA80
    static MonoScriptData jvb();  // RVA: 0x65CB60
};

// Namespace: <global>
class dan
{
public:

    // Methods
    static void vyu();  // RVA: 0x630C10
    static void bnd();  // RVA: 0x630C10
    static void ltc();  // RVA: 0x630C10
    static void ewk();  // RVA: 0x630C10
    static void mmp();  // RVA: 0x630C10
    static void olc();  // RVA: 0x630C10
    static void jqx();  // RVA: 0x630C10
    static void dkd();  // RVA: 0x630C10
    static void vyv();  // RVA: 0x630C10
};

// Namespace: <global>
class ApplicationFocusEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x65BCC0
    void Invoke(bool hasFocus);  // RVA: 0x65BCB0
    IAsyncResult* BeginInvoke(bool hasFocus, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x65BC40
    void EndInvoke(IAsyncResult* result);  // RVA: 0x65BCA0
};

// Namespace: <global>
class ApplicationPauseEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x65BCC0
    void Invoke(bool pauseStatus);  // RVA: 0x65BCB0
    IAsyncResult* BeginInvoke(bool pauseStatus, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x65BC40
    void EndInvoke(IAsyncResult* result);  // RVA: 0x65BCA0
};

// Namespace: <global>
class dao : public MonoBehaviour
{
public:
    // Static fields
    // static dao* bmni;

    uint8_t pad_0000[0x20]; // 0x0000
    ApplicationFocusEventHandler* bmng; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ApplicationPauseEventHandler* bmnh; // 0x0028

    // Methods
    void Awake();  // RVA: 0x65CE00
    void OnApplicationFocus(bool hasFocus);  // RVA: 0x65CEA0
    void vyz(ApplicationPauseEventHandler* a);  // RVA: 0x65D2A0
    void meh(bool pauseStatus);  // RVA: 0x65CEC0
    void nny();  // RVA: 0x65CF80
    void ya(bool pauseStatus);  // RVA: 0x65CEC0
    void vyy(ApplicationPauseEventHandler* a);  // RVA: 0x65D200
    void vyx(ApplicationFocusEventHandler* a);  // RVA: 0x65D160
    void OnApplicationPause(bool pauseStatus);  // RVA: 0x65CEC0
    void kfq(bool pauseStatus);  // RVA: 0x65CEC0
    void oau();  // RVA: 0x65D020
    static dao* vza();  // RVA: 0x65D340
    void vyw(ApplicationFocusEventHandler* a);  // RVA: 0x65D0C0
    void .ctor();  // RVA: 0x626760
    void jld();  // RVA: 0x65CEE0
    void ltf(bool pauseStatus);  // RVA: 0x65CEC0
};

// Namespace: <global>
class dap
{
public:

    // Methods
    static Char[][] vzc(Il2CppString* a);  // RVA: 0x65DE50
    static Il2CppString* kqf(Il2CppString* a);  // RVA: 0x65DA30
    static Il2CppString* cxg(Il2CppString* a);  // RVA: 0x65D740
    static Il2CppString* vze(Char[][] a);  // RVA: 0x65E010
    static Il2CppString* mbn(Il2CppString* a);  // RVA: 0x65DC70
    static Il2CppString* vzb(Il2CppString* a);  // RVA: 0x65DDB0
    static Char[][] ijl(Il2CppString* a);  // RVA: 0x65D990
    static Il2CppString* ezd(Il2CppString* a);  // RVA: 0x65D7E0
    static Il2CppString* bcb(Il2CppString* a);  // RVA: 0x65D470
    static Char[][] nko(Il2CppString* a);  // RVA: 0x65DD10
    static Il2CppString* lfv(Il2CppString* a);  // RVA: 0x65DB50
    static Il2CppString* bmj(Il2CppString* a);  // RVA: 0x65D510
    static Il2CppString* bty(Char[][] a);  // RVA: 0x65D630
    static Il2CppString* vzd(Il2CppString* a);  // RVA: 0x65DEF0
    static Il2CppString* feh(Char[][] a);  // RVA: 0x65D880
};

// Namespace: <global>
class daq
{
public:
    // Static fields
    // static int32_t bmnj;
    // static uint8_t bmnk;
    // static uint8_t bmnl;
    // static uint8_t bmnm;
    // static uint8_t bmnn;
    // static uint8_t bmno;


    // Methods
    static void vzf(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E5F0
    static void qu(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E580
    static void yy(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E7B0
    static void hif(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E2E0
    static void hwx(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E430
    static void jjs(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E4A0
    static void vzi(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E740
    static void vzg(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E660
    static void dwm(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E190
    static void kqc(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E510
    static void vzk(Stream* a, Stream* b, Byte[][] c, uint8_t d, uint8_t e);  // RVA: 0x417660
    static void vzh(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E6D0
    static void byw(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E120
    static void vzj(Stream* a, Stream* b, Byte[][] c, uint8_t d);  // RVA: 0x562180
    static void foa(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E270
    static void hqd(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E350
    static void exn(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E200
    static void hww(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x65E3C0
};

// Namespace: <global>
class dar
{
public:
    // Static fields
    // static int32_t bmnp;


    // Methods
    static bool cgc(double a, int32_t b);  // RVA: 0x65E900
    static bool vzr(uint64_t a, int32_t b);  // RVA: 0x65ED40
    static bool vzy(double a, int32_t b);  // RVA: 0x65E900
    static bool duz(uint32_t a, int32_t b);  // RVA: 0x65EAC0
    static int32_t khh(DateTime a);  // RVA: 0x65F940
    static bool jwy(DateTimeOffset a, int32_t b);  // RVA: 0x65F1B0
    static bool vzn(Decimal a, int32_t b);  // RVA: 0x65E880
    static int32_t ira(DateTimeOffset a);  // RVA: 0x65F490
    static bool vzp(int64_t a, int32_t b);  // RVA: 0x65F3E0
    static bool vzu(Vector2Int a, int32_t b);  // RVA: 0x65FF80
    static bool fdo(uint64_t a, int32_t b);  // RVA: 0x65ED40
    static int32_t wav(Il2CppString* a);  // RVA: 0x660E80
    static int32_t hgx(Vector3Int a);  // RVA: 0x65F210
    static int32_t dmb(uint64_t a);  // RVA: 0x65EA20
    static int32_t cwe(Vector2Int a);  // RVA: 0x65E930
    static int32_t kvs(Vector2Int a);  // RVA: 0x65E930
    static int32_t wan(float a);  // RVA: 0x65E8B0
    static int32_t wai(DateTimeOffset a);  // RVA: 0x660750
    static int32_t wad(BigInteger a);  // RVA: 0x660140
    static int32_t wae(bool a);  // RVA: 0x660430
    static int32_t wah(DateTime a);  // RVA: 0x660660
    static int32_t wap(Quaternion a);  // RVA: 0x660BF0
    static bool nsl(uint32_t a, int32_t b);  // RVA: 0x65EAC0
    static int32_t dgi(uint64_t a);  // RVA: 0x65E9D0
    static bool waa(DateTimeOffset a, int32_t b);  // RVA: 0x65F1B0
    static bool eqw(Decimal a, int32_t b);  // RVA: 0x65E880
    static int32_t wal(uint32_t a);  // RVA: 0x660610
    static int32_t el(DateTime a);  // RVA: 0x65EB20
    static int32_t ojc(DateTimeOffset a);  // RVA: 0x65FDD0
    static bool dsn(int32_t a, int32_t b);  // RVA: 0x65EAC0
    static int32_t ff(Vector2 a);  // RVA: 0x65F0E0
    static bool hqw(Quaternion a, int32_t b);  // RVA: 0x65F310
    static bool jqb(uint64_t a, int32_t b);  // RVA: 0x65ED40
    static int32_t was(Vector3 a);  // RVA: 0x65F570
    static bool iqh(int64_t a, int32_t b);  // RVA: 0x65F3E0
    static bool vzm(bool a, int32_t b);  // RVA: 0x65FEB0
    static int32_t mpv(DateTimeOffset a);  // RVA: 0x65FBF0
    static bool oal(uint32_t a, int32_t b);  // RVA: 0x65EAC0
    static bool mpf(Vector3Int a, int32_t b);  // RVA: 0x65F180
    static bool gne(float a, int32_t b);  // RVA: 0x65E820
    static int32_t icv(uint64_t a);  // RVA: 0x65E9D0
    static int32_t wao(double a);  // RVA: 0x660BD0
    static bool hyh(uint32_t a, int32_t b);  // RVA: 0x65EAC0
    static int32_t lbq(bool a);  // RVA: 0x65FB40
    static bool kep(Char[][] a, int32_t b);  // RVA: 0x65F8E0
    static int32_t waj(Guid a);  // RVA: 0x660830
    static int32_t waf(Decimal a);  // RVA: 0x660440
    static int32_t kbx(Vector2 a);  // RVA: 0x65F0E0
    static bool vzx(float a, int32_t b);  // RVA: 0x65E820
    static int32_t wat(Vector3Int a);  // RVA: 0x660D30
    static int32_t war(Vector2Int a);  // RVA: 0x65E930
    static bool vzv(Vector3 a, int32_t b);  // RVA: 0x660030
    static int32_t wag(int32_t a);  // RVA: 0x660610
    static bool fko(Vector3Int a, int32_t b);  // RVA: 0x65F180
    static bool vzl(BigInteger a, int32_t b);  // RVA: 0x65F1E0
    static bool vzq(uint32_t a, int32_t b);  // RVA: 0x65EAC0
    static bool bdv(Decimal a, int32_t b);  // RVA: 0x65E880
    static bool lbc(Decimal a, int32_t b);  // RVA: 0x65E880
    static bool crx(double a, int32_t b);  // RVA: 0x65E900
    static bool dzp(double a, int32_t b);  // RVA: 0x65E900
    static int32_t le(uint64_t a);  // RVA: 0x65FB50
    static bool odl(Guid a, int32_t b);  // RVA: 0x65FB10
    static int32_t jsg(Guid a);  // RVA: 0x65F660
    static bool lhq(Quaternion a, int32_t b);  // RVA: 0x65F310
    static bool kqo(DateTimeOffset a, int32_t b);  // RVA: 0x65F1B0
    static bool fnb(DateTimeOffset a, int32_t b);  // RVA: 0x65F1B0
    static int32_t wam(uint64_t a);  // RVA: 0x660B30
    static bool vzw(Vector3Int a, int32_t b);  // RVA: 0x65F180
    static bool vzt(Vector2 a, int32_t b);  // RVA: 0x65FED0
    static bool vzz(Char[][] a, int32_t b);  // RVA: 0x65F8E0
    static int32_t egj(bool a);  // RVA: 0x65EB10
    static int32_t eyu(Decimal a);  // RVA: 0x65EC10
    static int32_t mul(Vector3 a);  // RVA: 0x65F570
    static int32_t wak(int64_t a);  // RVA: 0x660A90
    static bool jza(int64_t a, int32_t b);  // RVA: 0x65F3E0
    static bool vzo(int32_t a, int32_t b);  // RVA: 0x65EAC0
    static int32_t wau(Char[][] a);  // RVA: 0x660E30
    static bool vzs(Quaternion a, int32_t b);  // RVA: 0x65F310
    static int32_t jnz(Vector3 a);  // RVA: 0x65F570
    static int32_t hux(int64_t a);  // RVA: 0x65F340
    static bool jfq(Decimal a, int32_t b);  // RVA: 0x65E880
    static int32_t fed(BigInteger a);  // RVA: 0x65EDF0
    static bool hbd(DateTimeOffset a, int32_t b);  // RVA: 0x65F1B0
    static bool po(float a, int32_t b);  // RVA: 0x65E820
    static int32_t bn(float a);  // RVA: 0x65E8B0
    static bool wab(Guid a, int32_t b);  // RVA: 0x65FB10
    static int32_t wac(a a);  // RVA: 0x562180
    static bool gdi(BigInteger a, int32_t b);  // RVA: 0x65F1E0
    static int32_t waq(Vector2 a);  // RVA: 0x65F0E0
    static bool bdh(float a, int32_t b);  // RVA: 0x65E820
    static int32_t cmr(float a);  // RVA: 0x65E8B0
    static int32_t ity(Vector3 a);  // RVA: 0x65F570
    static int32_t khp(DateTimeOffset a);  // RVA: 0x65FA30
    static int32_t ohu(float a);  // RVA: 0x65E8B0
    static bool kpp(Guid a, int32_t b);  // RVA: 0x65FB10
    static int32_t nei(Vector3Int a);  // RVA: 0x65FCD0
};

// Namespace: <global>
class das : public CertificateHandler
{
public:

    // Methods
    bool ValidateCertificate(Byte[][] certificateData);  // RVA: 0x660F00
    void .ctor();  // RVA: 0x660F10
};

// Namespace: <global>
class dat
{
public:

    // Methods
    static bool waw(float a, float b, float c);  // RVA: 0x661100
    static bool wax(double a, double b, double c);  // RVA: 0x6611B0
    static bool fuk(float a, float b, float c);  // RVA: 0x661050
    static bool ezz(double a, double b, double c);  // RVA: 0x660F20
};

// Namespace: <global>
class dau
{
public:

    // Methods
    static void way(System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> a, int32_t b, int32_t c, int64_t d, Il2CppString* e);  // RVA: 0x6612E0
};

// Namespace: <global>
class dav
{
public:

    // Methods
    static wchar_t mkq();  // RVA: 0x661B50
    static Il2CppString* iwo(int32_t a);  // RVA: 0x661980
    static int8_t wbb();  // RVA: 0x661E00
    static uint8_t wba();  // RVA: 0x661DB0
    static uint32_t gpe();  // RVA: 0x6617F0
    static uint8_t mjy();  // RVA: 0x661B00
    static uint64_t hsc();  // RVA: 0x661840
    static uint64_t jyf();  // RVA: 0x661840
    static int16_t bds();  // RVA: 0x6614A0
    static uint32_t wbg();  // RVA: 0x6617F0
    static int32_t wbf();  // RVA: 0x6617F0
    static int64_t eig();  // RVA: 0x661670
    static uint8_t orb();  // RVA: 0x661C80
    static uint8_t dfw();  // RVA: 0x661540
    static Il2CppString* hzi(int32_t a);  // RVA: 0x6618A0
    static Il2CppString* waz(int32_t a);  // RVA: 0x661CD0
    static uint64_t ia();  // RVA: 0x661840
    static int16_t fnw();  // RVA: 0x6617A0
    static uint8_t ncy();  // RVA: 0x661BA0
    static wchar_t wbc();  // RVA: 0x661E50
    static wchar_t jmf();  // RVA: 0x661A60
    static void edr(Char[][] a);  // RVA: 0x6615E0
    static int32_t ezb();  // RVA: 0x6616C0
    static int16_t dnz();  // RVA: 0x661590
    static void fgo(Char[][] a);  // RVA: 0x661710
    static uint64_t wbi();  // RVA: 0x661840
    static int16_t cdb();  // RVA: 0x6614F0
    static wchar_t lrt();  // RVA: 0x661AB0
    static uint32_t ly();  // RVA: 0x6617F0
    static int16_t wbd();  // RVA: 0x661EA0
    static void wbj(Char[][] a);  // RVA: 0x661F40
    static int64_t wbh();  // RVA: 0x661840
    static uint16_t wbe();  // RVA: 0x661EF0
    static void bcw(Char[][] a);  // RVA: 0x661410
    static void njt(Char[][] a);  // RVA: 0x661BF0
    static uint64_t mmc();  // RVA: 0x661840
};

// Namespace: <global>
class daw
{
public:
    // Static fields
    // static Char[][] bmnq;


    // Methods
    static Byte[][] wbl(Il2CppString* a);  // RVA: 0x6621E0
    static Il2CppString* msr(Byte[][] a);  // RVA: 0x662650
    static Byte[][] lyd(Char[][] a);  // RVA: 0x662230
    static Char[][] gsg(Byte[][] a);  // RVA: 0x662310
    static Byte[][] cqc(Char[][] a);  // RVA: 0x662230
    static Il2CppString* ljs(Byte[][] a);  // RVA: 0x6622D0
    static Il2CppString* nok(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x662270
    static Byte[][] cpz(Il2CppString* a);  // RVA: 0x6621E0
    static Il2CppString* idz(Byte[][] a);  // RVA: 0x662350
    static Char[][] hvp(Byte[][] a);  // RVA: 0x662310
    static Byte[][] ekj(Char[][] a);  // RVA: 0x662230
    static Byte[][] wbk(Char[][] a);  // RVA: 0x662230
    static Il2CppString* fkf(Byte[][] a);  // RVA: 0x6622D0
    static void .cctor();  // RVA: 0x661FD0
    static Il2CppString* mmt(Byte[][] a);  // RVA: 0x6624D0
    static Il2CppString* jxz(Byte[][] a);  // RVA: 0x6622D0
    static Il2CppString* wbp(Byte[][] a);  // RVA: 0x6627D0
    static Il2CppString* iql(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x662270
    static Il2CppString* wbn(Byte[][] a);  // RVA: 0x6622D0
    static Char[][] kdl(Byte[][] a);  // RVA: 0x662310
    static Il2CppString* chq(Byte[][] a);  // RVA: 0x662060
    static Il2CppString* eoy(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x662270
    static Il2CppString* wbo(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x662270
    static Byte[][] dcw(Char[][] a);  // RVA: 0x662230
    static Char[][] hjs(Byte[][] a);  // RVA: 0x662310
    static Char[][] wbm(Byte[][] a);  // RVA: 0x662310
};

// Namespace: <global>
class dax`1
{
public:
    System.Collections.Concurrent.ConcurrentBag<a> bmnr; // 0x0000
    System.Func<a> bmns; // 0x0000

    // Methods
    void .ctor(System.Func<a> a);  // RVA: 0x417510
    a wbq();  // RVA: 0x562180
    void gca();  // RVA: 0x42D760
    void hrt();  // RVA: 0x42D760
    void wbr(a a);  // RVA: 0x562180
    void boj();  // RVA: 0x42D760
    void wbs();  // RVA: 0x42D760
    void ehn();  // RVA: 0x42D760
};

// Namespace: <global>
class day
{
public:
    // Static fields
    // static Random* bmnt;
    // static Random* bmnu;


    // Methods
    static int64_t wbu(int64_t a, int64_t b);  // RVA: 0x664190
    static int64_t cnk(int64_t a, int64_t b);  // RVA: 0x662E60
    static void .cctor();  // RVA: 0x662950
    static void wbw(Char[][] a);  // RVA: 0x664690
    static int64_t cia(int64_t a, int64_t b);  // RVA: 0x6629D0
    static int32_t wbt(int32_t a, int32_t b);  // RVA: 0x663F70
    static int64_t wbx(Random* a, int64_t b, int64_t c);  // RVA: 0x6649A0
    static int32_t njx(int32_t a, int32_t b);  // RVA: 0x663CE0
    static void kfl(Random* a, Char[][] b);  // RVA: 0x6635F0
    static void deo(Byte[][] a);  // RVA: 0x6630D0
    static void wby(Random* a, Char[][] b);  // RVA: 0x664A20
    static int64_t nrs(Random* a, int64_t b, int64_t c);  // RVA: 0x663F00
    static int32_t kcj(int32_t a, int32_t b);  // RVA: 0x6633D0
    static void mfs(Random* a, Char[][] b);  // RVA: 0x663C40
    static void lbu(Char[][] a);  // RVA: 0x663710
    static int64_t kzv(Random* a, int64_t b, int64_t c);  // RVA: 0x663690
    static void wbv(Byte[][] a);  // RVA: 0x664400
    static int64_t eiu(Random* a, int64_t b, int64_t c);  // RVA: 0x663360
    static int32_t cnc(int32_t a, int32_t b);  // RVA: 0x662C40
    static int32_t mah(int32_t a, int32_t b);  // RVA: 0x663A20
};

// Namespace: <global>
class daz
{
public:
    // Static fields
    // static int64_t bmnv;


    // Methods
    static int64_t wbz();  // RVA: 0x664C90
    static int64_t mgt();  // RVA: 0x664BB0
    static int64_t ogx();  // RVA: 0x664C30
    static double wca();  // RVA: 0x664CF0
    static int64_t wcc();  // RVA: 0x664D80
    static int64_t nvr();  // RVA: 0x664BD0
    static int64_t wcd();  // RVA: 0x664DA0
    static int64_t jol();  // RVA: 0x664AF0
    static int64_t krx();  // RVA: 0x664B50
    static int64_t bwo();  // RVA: 0x664AB0
    static int64_t wcb();  // RVA: 0x664D60
    static int64_t fpr();  // RVA: 0x664AD0
};

// Namespace: <global>
class dba
{
public:
    // Static fields
    // static uint32_t bmnw;
    // static uint32_t bmnx;
    // static uint32_t bmny;
    // static uint32_t bmnz;
    // static uint32_t bmoa;


    // Methods
    static uint32_t otn(Stream* a, int64_t b, uint32_t c);  // RVA: 0x6656F0
    static uint32_t gnv(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x664DC0
    static uint32_t lvh(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x6652A0
    static uint32_t mvs(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x665500
    static uint32_t wce(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x6659E0
    static uint32_t htp(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x665000
    static uint32_t wcf(Stream* a, int64_t b, uint32_t c);  // RVA: 0x665E10
};

// Namespace: <global>
class dbb : public dcx`1
{
public:
    // Static fields
    // static bool bmob;
    // static bool bmoc;
    // static float bmod;
    // static float bmoe;
    // static float bmof;
    // static float bmog;
    // static float bmoh;
    // static float bmoi;
    // static bool bmoj;

    uint8_t pad_0000[0x30]; // 0x0000
    int64_t bmok; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int64_t bmol; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int64_t bmom; // 0x0040

    // Methods
    void .ctor();  // RVA: 0x666330
    static float wcm();  // RVA: 0x667870
    void fex();  // RVA: 0x666540
    void imj();  // RVA: 0x666D10
    static void mzk();  // RVA: 0x667120
    static float wck();  // RVA: 0x6676F0
    static float wcn();  // RVA: 0x667930
    static float wci();  // RVA: 0x667570
    void iw();  // RVA: 0x666DE0
    void wcs();  // RVA: 0x667CF0
    static void wcp(float a);  // RVA: 0x667A00
    static void oip();  // RVA: 0x667260
    static void wcg();  // RVA: 0x6672D0
    bool wcq();  // RVA: 0x667A10
    static float wco();  // RVA: 0x6679F0
    void hrb();  // RVA: 0x666A20
    static void fwb();  // RVA: 0x666650
    void Update();  // RVA: 0x666270
    static float wcl();  // RVA: 0x6677B0
    void wcu(Scene a, LoadSceneMode b);  // RVA: 0x667EA0
    void chw();  // RVA: 0x666480
    static void kpi();  // RVA: 0x666EF0
    static float wcj();  // RVA: 0x667630
    void wcr();  // RVA: 0x667C20
    static void iaf();  // RVA: 0x666AE0
    void fwh();  // RVA: 0x666880
    void wct();  // RVA: 0x667E00
    void ngl();  // RVA: 0x667190
    static void wch();  // RVA: 0x667340
    void hjp();  // RVA: 0x666950
    void bvx();  // RVA: 0x666370
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct StorageDataType
    {
    public:
        // Static fields
        // static StorageDataType Unknown;
        // static StorageDataType SByte;
        // static StorageDataType Byte;
        // static StorageDataType Int16;
        // static StorageDataType UInt16;
        // static StorageDataType Int32;
        // static StorageDataType UInt32;
        // static StorageDataType Int64;
        // static StorageDataType UInt64;
        // static StorageDataType Char;
        // static StorageDataType Single;
        // static StorageDataType Double;
        // static StorageDataType Decimal;
        // static StorageDataType BigInteger;
        // static StorageDataType Boolean;
        // static StorageDataType String;
        // static StorageDataType DateTime;
        // static StorageDataType ByteArray;
        // static StorageDataType Vector2;
        // static StorageDataType Vector2Int;
        // static StorageDataType Vector3;
        // static StorageDataType Vector3Int;
        // static StorageDataType Vector4;
        // static StorageDataType Quaternion;
        // static StorageDataType Color;
        // static StorageDataType Color32;
        // static StorageDataType Rect;
        // static StorageDataType RectInt;
        // static StorageDataType RangeInt;
        // static StorageDataType Matrix4x4;
        // static StorageDataType Ray;
        // static StorageDataType Ray2D;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredPrefsData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        StorageDataType type; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Byte[][] data; // 0x0018
    
        // Methods
        void .ctor(StorageDataType type, Byte[][] data);  // RVA: 0x65C960
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbc
{
public:

    // Methods
    static Color32 wcv(Byte[][] a);  // RVA: 0x667F90
    static c wcy(Byte[][] a);  // RVA: 0x562180
    static d wcz(StorageDataType a, Byte[][] b);  // RVA: 0x562180
    static f wdb(StorageDataType a, Byte[][] b);  // RVA: 0x562180
    static Color32 hyq(Byte[][] a);  // RVA: 0x667F20
    static b wcx(ObscuredPrefsData a);  // RVA: 0x562180
    static Color32 cxx(Byte[][] a);  // RVA: 0x667F20
    static ObscuredPrefsData wcw(a a);  // RVA: 0x562180
    static T wdd(Byte[][] a);  // RVA: 0x562180
    static Color32 lze(Byte[][] a);  // RVA: 0x667F50
    static Byte[][] wdc(T a);  // RVA: 0x562180
    static Byte[][] wda(StorageDataType a, e b);  // RVA: 0x562180
    static Color32 drq(Byte[][] a);  // RVA: 0x667F20
};

// Namespace: <global>
class dbd
{
public:
    // Static fields
    // static Type* bmon;
    // static Type* bmoo;
    // static Type* bmop;
    // static Type* bmoq;
    // static Type* bmor;
    // static Type* bmos;
    // static Type* bmot;
    // static Type* bmou;
    // static Type* bmov;
    // static Type* bmow;
    // static Type* bmox;
    // static Type* bmoy;
    // static Type* bmoz;
    // static Type* bmpa;
    // static Type* bmpb;
    // static Type* bmpc;
    // static Type* bmpd;
    // static Type* bmpe;
    // static Type* bmpf;
    // static Type* bmpg;
    // static Type* bmph;
    // static Type* bmpi;
    // static Type* bmpj;
    // static Type* bmpk;
    // static Type* bmpl;
    // static Type* bmpm;
    // static Type* bmpn;
    // static Type* bmpo;
    // static Type* bmpp;
    // static Type* bmpq;
    // static Type* bmpr;


    // Methods
    static StorageDataType wde();  // RVA: 0x420240
    static void .cctor();  // RVA: 0x667FD0
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    class UnsupportedDataTypeException : public Exception
    {
    public:
    
        // Methods
        void .ctor(Type* type);  // RVA: 0x65C9E0
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class HashCheckSumModifierDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x65BE10
    Byte[][] Invoke(Il2CppString* input);  // RVA: 0x65BCB0
    IAsyncResult* BeginInvoke(Il2CppString* input, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x65BDE0
    Byte[][] EndInvoke(IAsyncResult* result);  // RVA: 0x65BCA0
};

// Namespace: <global>
class dbe
{
public:
    // Static fields
    // static Il2CppString* bmps;

    uint8_t pad_0000[0x10]; // 0x0000
    uint32_t bmpt; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    uint32_t bmpu; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    HashCheckSumModifierDelegate* bmpv; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool <bmpw>k__BackingField; // 0x0020

    // Methods
    void kbd();  // RVA: 0x668AB0
    static void wdg(Il2CppString* a);  // RVA: 0x669030
    void .ctor(uint32_t a);  // RVA: 0x668880
    void eud();  // RVA: 0x668AB0
    void wdn(bool a);  // RVA: 0x668D40
    bool wdj();  // RVA: 0x65C5B0
    static void bzz();  // RVA: 0x6688B0
    static void nxq();  // RVA: 0x668D50
    void wdo();  // RVA: 0x668AB0
    void ljn(bool a);  // RVA: 0x668D40
    uint32_t oex(Il2CppString* a);  // RVA: 0x668E50
    static void wdh();  // RVA: 0x669090
    static Il2CppString* jxr();  // RVA: 0x668D00
    uint32_t wdl();  // RVA: 0x6691A0
    void ndb();  // RVA: 0x668AB0
    static void dts();  // RVA: 0x6689B0
    static Il2CppString* wdi();  // RVA: 0x668D00
    void gab(HashCheckSumModifierDelegate* a);  // RVA: 0x668BF0
    static Il2CppString* jea();  // RVA: 0x668D00
    uint32_t fe(Il2CppString* a);  // RVA: 0x668AC0
    void hpa(HashCheckSumModifierDelegate* a);  // RVA: 0x668BF0
    uint32_t wdp(Il2CppString* a);  // RVA: 0x6692F0
    void wdk(bool a);  // RVA: 0x669190
    static void hwd();  // RVA: 0x668C00
    static Il2CppString* wdf();  // RVA: 0x668F80
    static Il2CppString* ink();  // RVA: 0x668D00
    void wdm(HashCheckSumModifierDelegate* a);  // RVA: 0x668BF0
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct DeviceLockLevel
    {
    public:
        // Static fields
        // static DeviceLockLevel None;
        // static DeviceLockLevel Soft;
        // static DeviceLockLevel Strict;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbf
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    DeviceLockLevel <bmpx>k__BackingField; // 0x0010
    DeviceLockTamperingSensitivity <bmpy>k__BackingField; // 0x0011

    // Methods
    DeviceLockLevel wdq();  // RVA: 0x65C890
    void wdr(DeviceLockLevel a);  // RVA: 0x669460
    DeviceLockTamperingSensitivity wds();  // RVA: 0x669470
    void wdt(DeviceLockTamperingSensitivity a);  // RVA: 0x669480
    void .ctor(DeviceLockLevel a, DeviceLockTamperingSensitivity b);  // RVA: 0x669420
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct DeviceLockTamperingSensitivity
    {
    public:
        // Static fields
        // static DeviceLockTamperingSensitivity Disabled;
        // static DeviceLockTamperingSensitivity Low;
        // static DeviceLockTamperingSensitivity Normal;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: CodeStage.AntiCheat.Storage
    class DeviceUniqueIdentifierException : public BackgroundThreadAccessException
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x65BD70
    };

    // Namespace: CodeStage.AntiCheat.Storage
    class PersistentDataPathException : public BackgroundThreadAccessException
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x65C980
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbg
{
public:
    // Static fields
    // static Il2CppString* bmpz;
    // static Il2CppString* bmqa;
    // static dbe* bmqb;

    uint8_t pad_0000[0x10]; // 0x0000
    Action* bmqc; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Action* bmqd; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbq* <bmqe>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* <bmqf>k__BackingField; // 0x0028

    // Methods
    void wdu(Action* a);  // RVA: 0x66ABE0
    void wdv(Action* a);  // RVA: 0x66AC80
    bool wdz();  // RVA: 0x66AE60
    ObscuredFileReadResult wef();  // RVA: 0x66AF40
    void wec();  // RVA: 0x66AF10
    void .ctor(Il2CppString* a);  // RVA: 0x669610
    ObscuredFileReadResult ckj();  // RVA: 0x669770
    static void web(Il2CppString* a);  // RVA: 0x66AE80
    void doi(Stream* a, DeviceLockLevel b);  // RVA: 0x6697B0
    ObscuredFileHeader weg(Stream* a);  // RVA: 0x66BBB0
    ObscuredFileReadResult kmk();  // RVA: 0x669BF0
    static void .cctor();  // RVA: 0x669490
    void wei(Stream* a);  // RVA: 0x66C180
    ObscuredFileReadResult jhd();  // RVA: 0x669770
    void jpr(Stream* a, DeviceLockLevel b);  // RVA: 0x6698E0
    ObscuredFileWriteResult ohh(Byte[][] a);  // RVA: 0x6698B0
    void .ctor(Il2CppString* a, dbq* b);  // RVA: 0x669510
    Il2CppString* ub(Il2CppString* a);  // RVA: 0x66A960
    void obt(Stream* a, DeviceLockLevel b);  // RVA: 0x66A8D0
    ObscuredFileWriteResult nfw(Byte[][] a);  // RVA: 0x6698B0
    ObscuredFileWriteResult huy(Byte[][] a);  // RVA: 0x6698B0
    ObscuredFileWriteResult kjl(Byte[][] a);  // RVA: 0x6698B0
    Il2CppString* wek(Il2CppString* a);  // RVA: 0x66C280
    void .ctor();  // RVA: 0x6696B0
    Il2CppString* wea();  // RVA: 0x66AE70
    void wdx(Action* a);  // RVA: 0x66ADC0
    void wej(Stream* a, DeviceLockLevel b);  // RVA: 0x66C1F0
    ObscuredFileWriteResult wed(Byte[][] a);  // RVA: 0x6698B0
    void fmx(Stream* a);  // RVA: 0x669840
    ObscuredFileWriteResult weh(Byte[][] a);  // RVA: 0x66BC10
    ObscuredFileReadResult wee();  // RVA: 0x669770
    void nhx(Stream* a);  // RVA: 0x66A860
    void wdw(Action* a);  // RVA: 0x66AD20
    ObscuredFileReadResult mkx();  // RVA: 0x669770
    void .ctor(dbr* a);  // RVA: 0x669570
    Il2CppString* ked(Il2CppString* a);  // RVA: 0x669970
    dbq* wdy();  // RVA: 0x638FA0
};

// Namespace: <global>
class dbh
{
public:
    // Static fields
    // static int32_t bmqg;
    // static int32_t bmqh;
    // static Byte[][] bmqi;


    // Methods
    static void hg(Stream* a, Stream* b, dbp* c);  // RVA: 0x66C790
    static void wem(Stream* a, Stream* b, dbp* c);  // RVA: 0x66CA80
    static void wer(Stream* a, Stream* b, dbp* c);  // RVA: 0x66C6E0
    static uint32_t wes(Byte[][] a);  // RVA: 0x66CD00
    static void icg(Stream* a, Stream* b, dbp* c);  // RVA: 0x66C890
    static void hc(Stream* a, Stream* b, dbp* c);  // RVA: 0x66C6E0
    static void wel(Stream* a, Stream* b, dbp* c);  // RVA: 0x66C6E0
    static uint32_t itt(Stream* a);  // RVA: 0x66CA40
    static void wet(Stream* a, Stream* b, dbp* c);  // RVA: 0x66CD20
    static void haj(Stream* a, Stream* b, dbp* c);  // RVA: 0x66C6E0
    static void kif(Stream* a, Stream* b, dbp* c);  // RVA: 0x66CA80
    static void cqa(Stream* a, uint32_t b);  // RVA: 0x66C580
    static uint32_t cpf(Stream* a);  // RVA: 0x66C540
    static uint32_t nzw(Stream* a);  // RVA: 0x66C6A0
    static uint32_t wen(Stream* a);  // RVA: 0x66C6A0
    static uint32_t weq(Stream* a);  // RVA: 0x66C6A0
    static void kys(Stream* a, Stream* b, dbp* c);  // RVA: 0x66CA90
    static uint32_t cib(Stream* a);  // RVA: 0x66C500
    static uint32_t weo(Stream* a);  // RVA: 0x66CB90
    static void wep(Stream* a, uint32_t b);  // RVA: 0x66CC20
    static void ihd(Stream* a, Stream* b, dbp* c);  // RVA: 0x66C990
    static uint32_t fyx(Stream* a);  // RVA: 0x66C660
    static uint32_t idt(Stream* a);  // RVA: 0x66C6A0
    static uint32_t gqt(Stream* a);  // RVA: 0x66C6A0
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredFileHeader
    {
    public:
        // Static fields
        // static uint8_t HeaderByte1;
        // static uint8_t HeaderByte2;
        // static uint8_t HeaderByte3;
        // static uint8_t HeaderByte4;
        // static uint8_t HeaderVersion;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t <Byte1>k__BackingField; // 0x0010
        uint8_t <Byte2>k__BackingField; // 0x0011
        uint8_t <Byte3>k__BackingField; // 0x0012
        uint8_t <Byte4>k__BackingField; // 0x0013
        uint8_t <Version>k__BackingField; // 0x0014
        ObscurationMode <ObscurationMode>k__BackingField; // 0x0015
    
        // Methods
        uint8_t get_Byte1();  // RVA: 0x65BFE0
        void set_Byte1(uint8_t value);  // RVA: 0x65C080
        uint8_t get_Byte2();  // RVA: 0x65C030
        void set_Byte2(uint8_t value);  // RVA: 0x65C090
        uint8_t get_Byte3();  // RVA: 0x65C040
        void set_Byte3(uint8_t value);  // RVA: 0x65C0A0
        uint8_t get_Byte4();  // RVA: 0x65C050
        void set_Byte4(uint8_t value);  // RVA: 0x65C0B0
        uint8_t get_Version();  // RVA: 0x65C070
        void set_Version(uint8_t value);  // RVA: 0x65C0D0
        ObscurationMode get_ObscurationMode();  // RVA: 0x65C060
        void set_ObscurationMode(ObscurationMode value);  // RVA: 0x65C0C0
        bool IsValid();  // RVA: 0x65C000
        void weu(Stream* a);  // RVA: 0x65C0E0
        static void wev(Stream* a, ObscurationMode b);  // RVA: 0x65C1A0
    };

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredFileErrorCode
    {
    public:
        // Static fields
        // static ObscuredFileErrorCode NoError;
        // static ObscuredFileErrorCode FileNotFound;
        // static ObscuredFileErrorCode FileDamaged;
        // static ObscuredFileErrorCode DataIsNotLocked;
        // static ObscuredFileErrorCode NotInitialized;
        // static ObscuredFileErrorCode OtherException;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredFileError
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        ObscuredFileErrorCode <ErrorCode>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Exception* <Exception>k__BackingField; // 0x0018
    
        // Methods
        ObscuredFileErrorCode get_ErrorCode();  // RVA: 0x65BFE0
        Exception* get_Exception();  // RVA: 0x65BFF0
        void .ctor(ObscuredFileErrorCode code);  // RVA: 0x65BFC0
        void .ctor(Exception* exception);  // RVA: 0x65BFB0
        Il2CppString* ToString();  // RVA: 0x65BED0
    };

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredFileReadResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Byte[][] <Data>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        bool <DataIsNotGenuine>k__BackingField; // 0x0018
        bool <DataFromAnotherDevice>k__BackingField; // 0x0019
        uint8_t pad_001A[0x6]; // 0x001A
        ObscuredFileError <Error>k__BackingField; // 0x0020
        uint8_t pad_0021[0xF]; // 0x0021
        bool <IsValid>k__BackingField; // 0x0030
    
        // Methods
        bool wew();  // RVA: 0x65C5C0
        Byte[][] get_Data();  // RVA: 0x65C590
        bool wex();  // RVA: 0x65C5F0
        bool get_DataIsNotGenuine();  // RVA: 0x65C580
        bool get_DataFromAnotherDevice();  // RVA: 0x65C570
        ObscuredFileError get_Error();  // RVA: 0x65C5A0
        bool get_IsValid();  // RVA: 0x65C5B0
        void .ctor(Byte[][] data, bool dataIsNotGenuine, bool dataFromAnotherDevice);  // RVA: 0x65C520
        void .ctor(ObscuredFileError error);  // RVA: 0x65C4D0
        static ObscuredFileReadResult wey(Exception* a);  // RVA: 0x65C600
        static ObscuredFileReadResult wez(ObscuredFileErrorCode a);  // RVA: 0x65C680
        Il2CppString* ToString();  // RVA: 0x65C260
    };

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredFileWriteResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        ObscuredFileError <Error>k__BackingField; // 0x0010
        uint8_t pad_0011[0xF]; // 0x0011
        bool <IsValid>k__BackingField; // 0x0020
    
        // Methods
        bool wfa();  // RVA: 0x65C8A0
        ObscuredFileError get_Error();  // RVA: 0x65C880
        bool get_IsValid();  // RVA: 0x65C890
        void .ctor(ObscuredFileErrorCode result);  // RVA: 0x65C830
        void .ctor(ObscuredFileError error);  // RVA: 0x65C800
        static ObscuredFileWriteResult wfb(Exception* a);  // RVA: 0x65C8B0
        static ObscuredFileWriteResult wfc(ObscuredFileErrorCode a);  // RVA: 0x65C900
        Il2CppString* ToString();  // RVA: 0x65C700
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbi
{
public:
    // Static fields
    // static Il2CppString* bmqj;
    // static Il2CppString* bmqk;
    // static Action* bmql;
    // static Action* bmqm;
    // static dbg* bmqn;
    // static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> bmqo;
    // static Il2CppObject* bmqp;
    // static bool <bmqq>k__BackingField;
    // static bool <bmqr>k__BackingField;
    // static bool <bmqs>k__BackingField;
    // static ObscuredFileReadResult <bmqt>k__BackingField;
    // static ObscuredFileWriteResult <bmqu>k__BackingField;
    // static dbl* <bmqv>k__BackingField;


    // Methods
    static ObscuredDouble lym(Il2CppString* a, ObscuredDouble b);  // RVA: 0x672B50
    static void wfe(Il2CppString* a, ObscuredByte b);  // RVA: 0x6751A0
    static ObscuredBool jgn(Il2CppString* a, ObscuredBool b);  // RVA: 0x671C10
    static ObscuredQuaternion jwy(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6721A0
    static ObscuredLong iht(Il2CppString* a, ObscuredLong b);  // RVA: 0x6713B0
    static void wfz(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x675E10
    static void wfj(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6754A0
    static void wft(Il2CppString* a, ObscuredUInt b);  // RVA: 0x675A90
    static dbg* wif(Il2CppString* a, dbq* b);  // RVA: 0x678A50
    static void jgt(Il2CppString* a, ObscuredGuid b);  // RVA: 0x671CD0
    static void lty(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6729D0
    static ObscuredByte nyv(Il2CppString* a, ObscuredByte b);  // RVA: 0x6745F0
    static void wfq(Il2CppString* a, ObscuredSByte b);  // RVA: 0x675900
    static void gpd(Il2CppString* a, bool b);  // RVA: 0x670680
    static ObscuredGuid mua(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6730B0
    static ObscuredByte wgb(Il2CppString* a, ObscuredByte b);  // RVA: 0x675F80
    static void lia(Il2CppString* a, ObscuredDouble b);  // RVA: 0x672740
    static void wfu(Il2CppString* a, ObscuredULong b);  // RVA: 0x675B10
    static ObscuredFileReadResult nct();  // RVA: 0x673420
    static void nhk();  // RVA: 0x6736B0
    static void wht(Il2CppString* a, bool b);  // RVA: 0x677CD0
    static ObscuredBool ba(Il2CppString* a, ObscuredBool b);  // RVA: 0x66D400
    static void diw(Il2CppString* a, ObscuredInt b);  // RVA: 0x66EB90
    static void okn(Il2CppString* a, ObscuredBool b);  // RVA: 0x674C10
    static void wfs(Il2CppString* a, ObscuredString* b);  // RVA: 0x675A10
    static ObscuredChar hfi(Il2CppString* a, ObscuredChar b);  // RVA: 0x670B90
    static ObscuredChar bth(Il2CppString* a, ObscuredChar b);  // RVA: 0x66DD00
    static void chr(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x66E3F0
    static ObscuredDouble jpd(Il2CppString* a, ObscuredDouble b);  // RVA: 0x672010
    static ObscuredBigInteger wgg(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x676370
    static void wfd(Il2CppString* a, ObscuredBool b);  // RVA: 0x675110
    static void bhp(Il2CppString* a, ObscuredLong b);  // RVA: 0x66D5F0
    static void ddq();  // RVA: 0x66E9E0
    static void wil(Il2CppString* a, d b);  // RVA: 0x562180
    static void wib(Il2CppString* a);  // RVA: 0x678770
    static void wfh(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x675340
    static ObscuredSByte wgn(Il2CppString* a, ObscuredSByte b);  // RVA: 0x676980
    static b wie(Il2CppString* a, b b);  // RVA: 0x562180
    static void dij(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x66EAE0
    static ObscuredFileReadResult hqm();  // RVA: 0x670FE0
    static ObscuredUShort coq(Il2CppString* a, ObscuredUShort b);  // RVA: 0x66E760
    static void lvf(Il2CppString* a, ObscuredString* b);  // RVA: 0x672A50
    static ObscuredQuaternion ok(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x674B10
    static void gbh(Il2CppString* a, ObscuredByte b);  // RVA: 0x670370
    static ObscuredBigInteger bna(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x66D820
    static ObscuredDouble wgh(Il2CppString* a, ObscuredDouble b);  // RVA: 0x676470
    static void wfl(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6755F0
    static ObscuredFileWriteResult whn();  // RVA: 0x677950
    static ObscuredVector3 fja(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x66F970
    static void wha(Action* a);  // RVA: 0x6773E0
    static dbq* whb();  // RVA: 0x6774E0
    static void kio(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6723E0
    static void mtp(Il2CppString* a, ObscuredGuid b);  // RVA: 0x673000
    static ObscuredVector2Int hbs(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x670A00
    static bool whf();  // RVA: 0x677640
    static ObscuredVector3Int esy(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x66F4C0
    static void whh(bool a);  // RVA: 0x6776F0
    static ObscuredUShort fxj(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6701B0
    static void wfg(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6752B0
    static void obl(Il2CppString* a, ObscuredFloat b);  // RVA: 0x674860
    static ObscuredShort cpa(Il2CppString* a, ObscuredShort b);  // RVA: 0x66E820
    static void mxu(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6731B0
    static void efy(Il2CppString* a, ObscuredGuid b);  // RVA: 0x66F350
    static void who(ObscuredFileWriteResult a);  // RVA: 0x6779C0
    static dbl* whp();  // RVA: 0x677A40
    static void whq(dbl* a);  // RVA: 0x677A90
    static void byn(bool a);  // RVA: 0x66DF20
    static void wff(Il2CppString* a, ObscuredChar b);  // RVA: 0x675220
    static void whx();  // RVA: 0x678260
    static void oit(Il2CppString* a, ObscuredShort b);  // RVA: 0x674980
    static ObscuredDateTimeOffset wge(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x676180
    static ObscuredInt ibc(Il2CppString* a, ObscuredInt b);  // RVA: 0x671300
    static Il2CppString* whk();  // RVA: 0x677800
    static void ntv(bool a);  // RVA: 0x674380
    static bool whz(Il2CppString* a);  // RVA: 0x678670
    static void ffu(Il2CppString* a, ObscuredLong b);  // RVA: 0x66F840
    static ObscuredShort wgo(Il2CppString* a, ObscuredShort b);  // RVA: 0x676A00
    static void wic();  // RVA: 0x678860
    static bool whg();  // RVA: 0x6776A0
    static void wid(Il2CppString* a, a b);  // RVA: 0x562180
    static ObscuredFloat iy(Il2CppString* a, ObscuredFloat b);  // RVA: 0x671A60
    static ObscuredInt hjg(Il2CppString* a, ObscuredInt b);  // RVA: 0x670DE0
    static ObscuredChar ipn(Il2CppString* a, ObscuredChar b);  // RVA: 0x671820
    static void bts(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x66DDC0
    static void jdf(Il2CppString* a, ObscuredByte b);  // RVA: 0x671B90
    static bool lvo(Il2CppString* a);  // RVA: 0x672AD0
    static void cgq(Il2CppString* a, ObscuredDouble b);  // RVA: 0x66E350
    static void hjq(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x670E90
    static ObscuredDouble cb(Il2CppString* a, ObscuredDouble b);  // RVA: 0x66E000
    static void nhu(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6739E0
    static bool blu(Il2CppString* a);  // RVA: 0x66D700
    static void fqr(Il2CppString* a, ObscuredUShort b);  // RVA: 0x66FEA0
    static ObscuredULong org(Il2CppString* a, ObscuredULong b);  // RVA: 0x674DD0
    static void fwn(Il2CppString* a, ObscuredByte b);  // RVA: 0x670130
    static c wik(Il2CppString* a, c b);  // RVA: 0x562180
    static void whu(dbq* a, bool b);  // RVA: 0x677D60
    static void mqc(Il2CppString* a, ObscuredBool b);  // RVA: 0x672E90
    static void nbk(Il2CppString* a, ObscuredChar b);  // RVA: 0x673260
    static bool whe();  // RVA: 0x6775E0
    static void whw();  // RVA: 0x6780A0
    static void baw(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x66D4C0
    static void gjq(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6704B0
    static ObscuredDateTimeOffset nxm(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x674500
    static ObscuredGuid cnl(Il2CppString* a, ObscuredGuid b);  // RVA: 0x66E5E0
    static void btd(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x66DC50
    static ObscuredBool fvg(Il2CppString* a, ObscuredBool b);  // RVA: 0x670070
    static void whs(bool a);  // RVA: 0x677C10
    static void wfr(Il2CppString* a, ObscuredShort b);  // RVA: 0x675980
    static ObscuredUInt wgq(Il2CppString* a, ObscuredUInt b);  // RVA: 0x676B40
    static void cfh();  // RVA: 0x66E160
    static void fdh();  // RVA: 0x66F650
    static ObscuredVector2Int dwc(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x66F0B0
    static ObscuredQuaternion wgm(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x676880
    static void whv(Il2CppString* a, dbq* b, bool c);  // RVA: 0x677E00
    static ObscuredDecimal ixi(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x671960
    static void bmb(Il2CppString* a, ObscuredFloat b);  // RVA: 0x66D780
    static ObscuredVector3Int fmm(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x66FDA0
    static ObscuredFileWriteResult jnq();  // RVA: 0x671E20
    static ObscuredFloat nk(Il2CppString* a, ObscuredFloat b);  // RVA: 0x673C70
    static void dew(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x66EA50
    static ObscuredChar gsp(Il2CppString* a, ObscuredChar b);  // RVA: 0x670790
    static ObscuredVector2Int wgu(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x676E40
    static void mrw(bool a);  // RVA: 0x672F20
    static ObscuredFileReadResult nji();  // RVA: 0x673A90
    static ObscuredInt wgk(Il2CppString* a, ObscuredInt b);  // RVA: 0x676710
    static ObscuredFileWriteResult nzr();  // RVA: 0x674670
    static void qg(Il2CppString* a, ObscuredLong b);  // RVA: 0x674E90
    static ObscuredByte nca(Il2CppString* a, ObscuredByte b);  // RVA: 0x6733A0
    static ObscuredFileWriteResult wij();  // RVA: 0x6792C0
    static void wig();  // RVA: 0x678C50
    static void rx(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x674FD0
    static ObscuredUInt mao(Il2CppString* a, ObscuredUInt b);  // RVA: 0x672D30
    static void buf(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x66DE70
    static ObscuredFileReadResult whl();  // RVA: 0x677850
    static void coe(Il2CppString* a, ObscuredString* b);  // RVA: 0x66E6E0
    static void nkk();  // RVA: 0x673D30
    static void ndb(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x673600
    static bool whi();  // RVA: 0x677750
    static dbg* whr();  // RVA: 0x677B00
    static ObscuredSByte cri(Il2CppString* a, ObscuredSByte b);  // RVA: 0x66E960
    static void nsg(Il2CppString* a, ObscuredInt b);  // RVA: 0x674300
    static void wfy(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x675D60
    static void dur(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x66F000
    static ObscuredDateTime kja(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x672490
    static void .cctor();  // RVA: 0x66D380
    static void kbr(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6722A0
    static ObscuredULong ggp(Il2CppString* a, ObscuredULong b);  // RVA: 0x6703F0
    static ObscuredDateTimeOffset dyy(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x66F170
    static void whm(ObscuredFileReadResult a);  // RVA: 0x6778C0
    static void gnp(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6705D0
    static void wfn(Il2CppString* a, ObscuredInt b);  // RVA: 0x675740
    static bool iqi(Il2CppString* a);  // RVA: 0x6718E0
    static ObscuredBigInteger bot(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x66DAC0
    static void bip(Il2CppString* a, ObscuredByte b);  // RVA: 0x66D680
    static ObscuredByte imj(Il2CppString* a, ObscuredByte b);  // RVA: 0x6717A0
    static void hpa(Il2CppString* a, ObscuredDouble b);  // RVA: 0x670F40
    static ObscuredString* wgp(Il2CppString* a, ObscuredString* b);  // RVA: 0x676AC0
    static ObscuredVector2Int fu(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x66FFB0
    static void hfz(Il2CppString* a);  // RVA: 0x670C50
    static ObscuredChar wgc(Il2CppString* a, ObscuredChar b);  // RVA: 0x676000
    static ObscuredVector2 hci(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x670AC0
    static ObscuredByte htp(Il2CppString* a, ObscuredByte b);  // RVA: 0x6711C0
    static ObscuredShort cmc(Il2CppString* a, ObscuredShort b);  // RVA: 0x66E520
    static void dqp();  // RVA: 0x66EC90
    static ObscuredULong wgr(Il2CppString* a, ObscuredULong b);  // RVA: 0x676BF0
    static void gnm(Il2CppString* a, ObscuredUShort b);  // RVA: 0x670540
    static void wfi(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6753F0
    static ObscuredBigInteger gaw(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x670270
    static void eed(Il2CppString* a, ObscuredString* b);  // RVA: 0x66F2D0
    static void wfk(Il2CppString* a, ObscuredDouble b);  // RVA: 0x675550
    static System.Collections.Generic.ICollection<System.String> knx();  // RVA: 0x672550
    static void wgz(Action* a);  // RVA: 0x6772E0
    static ObscuredLong hya(Il2CppString* a, ObscuredLong b);  // RVA: 0x671240
    static void wfw(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x675C30
    static void oqn(bool a);  // RVA: 0x674CA0
    static void odr(Il2CppString* a, ObscuredInt b);  // RVA: 0x674900
    static void miv(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x672DE0
    static void wfp(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x675850
    static void wgx(Action* a);  // RVA: 0x677100
    static void whd(bool a);  // RVA: 0x677580
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wii();  // RVA: 0x678D30
    static void whj(bool a);  // RVA: 0x6777A0
    static ObscuredVector3 wgv(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x676F00
    static void kwk(Il2CppString* a, ObscuredString* b);  // RVA: 0x6725D0
    static ObscuredSByte cqs(Il2CppString* a, ObscuredSByte b);  // RVA: 0x66E8E0
    static ObscuredDecimal ojh(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x674A10
    static void kds(Il2CppString* a, ObscuredShort b);  // RVA: 0x672350
    static void bsw(Il2CppString* a, ObscuredUShort b);  // RVA: 0x66DBC0
    static void fgu(Il2CppString* a, ObscuredDouble b);  // RVA: 0x66F8D0
    static void oqu();  // RVA: 0x674D60
    static ObscuredLong wgl(Il2CppString* a, ObscuredLong b);  // RVA: 0x6767C0
    static void bco(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x66D550
    static void wfx(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x675CD0
    static void wfo(Il2CppString* a, ObscuredLong b);  // RVA: 0x6757C0
    static void why(bool a);  // RVA: 0x678590
    static bool whc();  // RVA: 0x677530
    static void rj(Il2CppString* a, ObscuredGuid b);  // RVA: 0x674F20
    static ObscuredUShort wgs(Il2CppString* a, ObscuredUShort b);  // RVA: 0x676CB0
    static void wih();  // RVA: 0x678CC0
    static void wfm(Il2CppString* a, ObscuredGuid b);  // RVA: 0x675690
    static ObscuredVector3 bod(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x66D9C0
    static System.Collections.Generic.ICollection<System.String> gpo();  // RVA: 0x670710
    static ObscuredVector2Int noa(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x674240
    static void jdc();  // RVA: 0x671B20
    static ObscuredFloat wgi(Il2CppString* a, ObscuredFloat b);  // RVA: 0x676550
    static ObscuredFileWriteResult win(Byte[][] a);  // RVA: 0x679690
    static void jhy(Il2CppString* a, ObscuredFloat b);  // RVA: 0x671D80
    static void fmg();  // RVA: 0x66FA70
    static void exn(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x66F5C0
    static void ti(Il2CppString* a, bool b);  // RVA: 0x675080
    static ObscuredFileReadResult wim();  // RVA: 0x6794B0
    static void ckn(Il2CppString* a, bool b);  // RVA: 0x66E490
    static void bo(dbq* a, bool b);  // RVA: 0x66D920
    static bool Save();  // RVA: 0x66CE20
    static System.Collections.Generic.ICollection<System.String> wia();  // RVA: 0x6786F0
    static void ecn();  // RVA: 0x66F260
    static void imf();  // RVA: 0x671470
    static ObscuredBool wga(Il2CppString* a, ObscuredBool b);  // RVA: 0x675EC0
    static ObscuredDecimal wgf(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x676270
    static bool cf(Il2CppString* a);  // RVA: 0x66E0E0
    static ObscuredSByte dks(Il2CppString* a, ObscuredSByte b);  // RVA: 0x66EC10
    static ObscuredVector2 gwl(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x670850
    static ObscuredSByte dsf(Il2CppString* a, ObscuredSByte b);  // RVA: 0x66EE80
    static ObscuredDateTime wgd(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6760C0
    static void jwn(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6720F0
    static ObscuredUShort nwu(Il2CppString* a, ObscuredUShort b);  // RVA: 0x674440
    static ObscuredVector2 wgt(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x676D70
    static ObscuredUShort epj(Il2CppString* a, ObscuredUShort b);  // RVA: 0x66F400
    static ObscuredDouble gze(Il2CppString* a, ObscuredDouble b);  // RVA: 0x670920
    static ObscuredBigInteger man(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x672C30
    static void loo();  // RVA: 0x6727E0
    static ObscuredGuid wgj(Il2CppString* a, ObscuredGuid b);  // RVA: 0x676610
    static void lee(Il2CppString* a);  // RVA: 0x672650
    static void nby(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6732F0
    static void wgy(Action* a);  // RVA: 0x6771F0
    static ObscuredGuid dtf(Il2CppString* a, ObscuredGuid b);  // RVA: 0x66EF00
    static ObscuredVector3Int wgw(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x677000
    static void hgz(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x670D40
    static void wfv(Il2CppString* a, ObscuredUShort b);  // RVA: 0x675BA0
    static ObscuredFileReadResult nnj();  // RVA: 0x674060
    static void fsj(Il2CppString* a, ObscuredInt b);  // RVA: 0x66FF30
};

// Namespace: <global>
class dbj
{
public:
    // Static fields
    // static bool bmqw;


    // Methods
    static bool wip();  // RVA: 0x679AA0
    static void wis(bool a);  // RVA: 0x67A0F0
    static void wio();  // RVA: 0x679CB0
    static void wiq(bool a);  // RVA: 0x679AC0
    static void euy(bool a);  // RVA: 0x6799B0
    static bool lwm();  // RVA: 0x679AA0
    static void wit();  // RVA: 0x67A1E0
    static bool lys();  // RVA: 0x679AA0
    static void hs(bool a);  // RVA: 0x679AD0
    static bool qj();  // RVA: 0x679AA0
    static void jyf(bool a);  // RVA: 0x679AC0
    static void wir(bool a);  // RVA: 0x6799A0
    static void gss(bool a);  // RVA: 0x679AC0
    static void omy(bool a);  // RVA: 0x6799A0
    static void dtj(bool a);  // RVA: 0x6799A0
    static void dad(bool a);  // RVA: 0x6798B0
    static void osb(bool a);  // RVA: 0x679AC0
    static void lyl(bool a);  // RVA: 0x679BC0
    static bool fud();  // RVA: 0x679AA0
};

// Namespace: <global>
class dbk
{
public:

    // Methods
    static dbn* heq(dbl* a);  // RVA: 0x67A3B0
    static ObscuredPrefsData wiu(a a, dbl* b);  // RVA: 0x562180
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> jbc(Byte[][] a, dbl* b);  // RVA: 0x67A450
    static b wiv(ObscuredPrefsData a, dbl* b);  // RVA: 0x562180
    static Byte[][] cfk(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x67A340
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> ogw(Byte[][] a, dbl* b);  // RVA: 0x67A680
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> kdx(Byte[][] a, dbl* b);  // RVA: 0x67A4C0
    static Byte[][] nta(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x67A5A0
    static dbn* jju(dbl* a);  // RVA: 0x67A3B0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wix(Byte[][] a, dbl* b);  // RVA: 0x67A760
    static Byte[][] gac(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x67A3E0
    static dbn* wiy(dbl* a);  // RVA: 0x67A3B0
    static Byte[][] wiw(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x67A6F0
    static Byte[][] ngj(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x67A530
    static dbn* enf(dbl* a);  // RVA: 0x67A3B0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> nuf(Byte[][] a, dbl* b);  // RVA: 0x67A610
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct ACTkSerializationKind
    {
    public:
        // Static fields
        // static ACTkSerializationKind Binary;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbl
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ACTkSerializationKind <bmqx>k__BackingField; // 0x0010

    // Methods
    ACTkSerializationKind wiz();  // RVA: 0x65BB20
    void .ctor(ACTkSerializationKind a);  // RVA: 0x668880
};

// Namespace: <global>
class dbm
{
public:
    // Static fields
    // static uint8_t bmqy;
    // static dbm* bmqz;


    // Methods
    void .ctor();  // RVA: 0x626570
    ObscuredPrefsData wjb(a a);  // RVA: 0x562180
    static dbn* wja();  // RVA: 0x67AD40
    void bmp(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x67A7D0
    b wjc(ObscuredPrefsData a);  // RVA: 0x562180
    void wjf(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x67A7D0
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wjg(BinaryReader* a);  // RVA: 0x67B5D0
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> hsb(BinaryReader* a);  // RVA: 0x67AB20
    void bjl(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x67A7D0
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wje(Byte[][] a);  // RVA: 0x67B1C0
    void osc(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x67A7D0
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> euw(BinaryReader* a);  // RVA: 0x67AA10
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> blp(BinaryReader* a);  // RVA: 0x67A870
    static dbn* dhd();  // RVA: 0x67A980
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> itf(BinaryReader* a);  // RVA: 0x67AC30
    Byte[][] wjd(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x67ADD0
    void nqj(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x67A7D0
};

// Namespace: <global>
class dbn
{
public:

    // Methods
    ObscuredPrefsData wjb(a a);  // RVA: 0x562180
    b wjc(ObscuredPrefsData a);  // RVA: 0x562180
    Byte[][] wjd(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x418490
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wje(Byte[][] a);  // RVA: 0x418490
};

// Namespace: <global>
class dbo
{
public:
    // Static fields
    // static dbo* bmra;


    // Methods
    static dbn* wjh();  // RVA: 0x67B7F0
    Byte[][] wjd(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x67B770
    b wjc(ObscuredPrefsData a);  // RVA: 0x562180
    static dbn* gqu();  // RVA: 0x67B6E0
    ObscuredPrefsData wjb(a a);  // RVA: 0x562180
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wje(Byte[][] a);  // RVA: 0x67B7B0
    void .ctor();  // RVA: 0x626570
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscurationMode
    {
    public:
        // Static fields
        // static ObscurationMode Plain;
        // static ObscurationMode Encrypted;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbp
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ObscurationMode <bmrb>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Byte[][] <bmrc>k__BackingField; // 0x0018

    // Methods
    ObscurationMode wji();  // RVA: 0x65C890
    Byte[][] wjj();  // RVA: 0x67B9A0
    void .ctor(Il2CppString* a);  // RVA: 0x67B880
    void .ctor(Byte[][] a);  // RVA: 0x67B950
};

// Namespace: <global>
class dbq
{
public:

    // Methods
    ObscuredFileLocation wjk();  // RVA: 0x420210
    dbp* wjl();  // RVA: 0x41AE30
    dbf* wjm();  // RVA: 0x41AE30
    bool wjn();  // RVA: 0x420210
    bool wjo();  // RVA: 0x420210
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredFileLocation
    {
    public:
        // Static fields
        // static ObscuredFileLocation PersistentData;
        // static ObscuredFileLocation Custom;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbr
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ObscuredFileLocation <bmrd>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    dbp* <bmre>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbf* <bmrf>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool <bmrg>k__BackingField; // 0x0028
    bool <bmrh>k__BackingField; // 0x0029

    // Methods
    ObscuredFileLocation wjk();  // RVA: 0x65C890
    void wjp(ObscuredFileLocation a);  // RVA: 0x669460
    dbp* wjl();  // RVA: 0x67B9A0
    void wjq(dbp* a);  // RVA: 0x668BF0
    dbf* wjm();  // RVA: 0x638FA0
    void wjr(dbf* a);  // RVA: 0x638FB0
    bool wjn();  // RVA: 0x638FC0
    void wjs(bool a);  // RVA: 0x638FD0
    bool wjo();  // RVA: 0x67BC90
    void wjt(bool a);  // RVA: 0x67BCA0
    void .ctor();  // RVA: 0x67BA60
    void .ctor(ObscuredFileLocation a);  // RVA: 0x67BB30
    void .ctor(dbf* a);  // RVA: 0x67B9B0
    void .ctor(dbp* a, dbf* b, ObscuredFileLocation c, bool d, bool e);  // RVA: 0x67BC10
};

// Namespace: <global>
class dbs
{
public:
    // Static fields
    // static Char[][] bmri;
    // static Il2CppString* bmrj;
    // static Il2CppString* bmrk;
    // static Il2CppString* bmrl;
    // static uint8_t bmrm;
    // static bool bmrn;
    // static bool bmro;
    // static Il2CppString* bmrp;
    // static Il2CppString* bmrq;
    // static dbe* bmrr;
    // static Action* bmrs;
    // static Action* bmrt;
    // static Action* bmru;
    // static Action* bmrv;
    // static bool bmrw;
    // static dbf* <bmrx>k__BackingField;


    // Methods
    static void obn(Il2CppString* a, ObscuredULong b);  // RVA: 0x682820
    static ObscuredInt hpp(Il2CppString* a, ObscuredInt b);  // RVA: 0x67F310
    static void jgg(Il2CppString* a, ObscuredInt b);  // RVA: 0x67FFB0
    static void bjr(Il2CppString* a, ObscuredInt b);  // RVA: 0x67BFB0
    static void klt(Il2CppString* a, Il2CppString* b);  // RVA: 0x680A60
    static float wjz(Il2CppString* a, float b);  // RVA: 0x6830C0
    static void iq();  // RVA: 0x67FB80
    static void ofx(Il2CppString* a, ObscuredUInt b);  // RVA: 0x682970
    static void wkc(Il2CppString* a, double b);  // RVA: 0x683210
    static void nvi();  // RVA: 0x682260
    static Il2CppString* ejn(Il2CppString* a, Il2CppString* b);  // RVA: 0x67D790
    static Decimal wkf(Il2CppString* a, Decimal defaultValue);  // RVA: 0x683370
    static ObscuredString* kxx(Il2CppString* a, ObscuredString* b);  // RVA: 0x680E70
    static void esr(Il2CppString* a, ObscuredString* b);  // RVA: 0x67DB90
    static Quaternion wkx(Il2CppString* a, Quaternion b);  // RVA: 0x683F60
    static void iee(Il2CppString* a, float b);  // RVA: 0x67F8F0
    static void wkk(Il2CppString* a, bool b);  // RVA: 0x6835D0
    static void kgq(Il2CppString* a, float b);  // RVA: 0x680960
    static ObscuredVector2 lpy(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6811B0
    static void woa(DeviceLockLevel a);  // RVA: 0x689000
    static Color32 wla(Il2CppString* a, Color32 b);  // RVA: 0x684110
    static ObscuredULong wms(Il2CppString* a, ObscuredULong b);  // RVA: 0x685E40
    static void wka(Il2CppString* a, uint32_t b);  // RVA: 0x683130
    static Byte[][] er(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x67DA00
    static void wno(Il2CppString* a);  // RVA: 0x6884D0
    static Il2CppString* yo(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x689A10
    static ObscuredUShort cfh(Il2CppString* a, ObscuredUShort b);  // RVA: 0x67C4A0
    static Il2CppString* wjx(Il2CppString* a, Il2CppString* b);  // RVA: 0x682FE0
    static ObscuredGuid wmk(Il2CppString* a, ObscuredGuid b);  // RVA: 0x685860
    static void jxm();  // RVA: 0x680680
    static void wky(Il2CppString* a, Color32 b);  // RVA: 0x684000
    static void day(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x67CE50
    static Byte[][] ens(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x67D910
    static ObscuredBigInteger lfa(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x680F60
    static Rect wlc(Il2CppString* a);  // RVA: 0x684200
    static ObscuredDouble wmi(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6856C0
    static ObscuredVector3Int hmy(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x67F1A0
    static Il2CppString* wnb(Il2CppString* a, a b);  // RVA: 0x562180
    static void wks(Il2CppString* a, Vector3 b);  // RVA: 0x683BB0
    static ObscuredDateTimeOffset djw(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x67D3F0
    static void ier(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x67F960
    static void wlj(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x684640
    static ObscuredULong iov(Il2CppString* a, ObscuredULong b);  // RVA: 0x67FA10
    static Il2CppString* hsv(Il2CppString* a, Il2CppString* b);  // RVA: 0x67F3C0
    static void wlm(Il2CppString* a, ObscuredFloat b);  // RVA: 0x684840
    static Byte[][] wnf(Il2CppString* a, Il2CppString* b);  // RVA: 0x686C70
    static void wlo(Il2CppString* a, ObscuredInt b);  // RVA: 0x684990
    static Il2CppString* nzw(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x6823F0
    static void zr(Il2CppString* a, ObscuredBool b);  // RVA: 0x689F30
    static float hn(Il2CppString* a, float b);  // RVA: 0x67F2A0
    static void wls(Il2CppString* a, ObscuredShort b);  // RVA: 0x684BD0
    static ObscuredBool wmb(Il2CppString* a, ObscuredBool b);  // RVA: 0x685110
    static ObscuredVector3 wmw(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x686150
    static void wlv(Il2CppString* a, ObscuredULong b);  // RVA: 0x684D60
    static void wnl(Il2CppString* a);  // RVA: 0x688400
    static void wlw(Il2CppString* a, ObscuredUShort b);  // RVA: 0x684DF0
    static void wlt(Il2CppString* a, ObscuredString* b);  // RVA: 0x684C60
    static Byte[][] ctv(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x67CD60
    static void jnr(Il2CppString* a, int32_t b);  // RVA: 0x680290
    static ObscuredVector2Int wmv(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x686090
    static Il2CppString* wnh(Il2CppString* a, Il2CppString* b);  // RVA: 0x687500
    static ObscuredChar wmd(Il2CppString* a, ObscuredChar b);  // RVA: 0x685250
    static void wll(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6847A0
    static ObscuredUInt mha(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6818F0
    static void cgs(Il2CppString* a, ObscuredString* b);  // RVA: 0x67C560
    static Byte[][] wkn(Il2CppString* a, uint8_t b, int32_t c);  // RVA: 0x683720
    static Byte[][] wko(uint8_t a, int32_t b);  // RVA: 0x683970
    static Byte[][] lqr(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x681280
    static Vector2 wkr(Il2CppString* a, Vector2 b);  // RVA: 0x683B40
    static ObscuredDateTime fyn(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x67EAB0
    static Il2CppString* wmz(Il2CppString* a);  // RVA: 0x686650
    static void ewg();  // RVA: 0x67DF40
    static ObscuredString* nms(Il2CppString* a, ObscuredString* b);  // RVA: 0x681EC0
    static void jeu(Il2CppString* a, ObscuredBool b);  // RVA: 0x67FF20
    static Vector2 wkq(Il2CppString* a);  // RVA: 0x683A60
    static ObscuredFloat ffp(Il2CppString* a, ObscuredFloat b);  // RVA: 0x67E0D0
    static ObscuredDateTimeOffset wmf(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6853D0
    static Byte[][] mdu(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x6817A0
    static ObscuredVector2 wmu(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x685FC0
    static void lzo();  // RVA: 0x681700
    static void euj(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x67DCC0
    static ObscuredVector3Int wmx(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x686250
    static ObscuredLong bfm(Il2CppString* a, ObscuredLong b);  // RVA: 0x67BE40
    static Byte[][] pp(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x682D70
    static Byte[][] hmf(uint8_t a, int32_t b);  // RVA: 0x67F120
    static void woe(bool a);  // RVA: 0x689260
    static void wot();  // RVA: 0x689830
    static ObscuredUInt wmr(Il2CppString* a, ObscuredUInt b);  // RVA: 0x685D90
    static dbe* wnp();  // RVA: 0x688530
    static ObscuredByte wmc(Il2CppString* a, ObscuredByte b);  // RVA: 0x6851D0
    static Il2CppString* kzm(Il2CppString* a, Il2CppString* b);  // RVA: 0x6809D0
    static ObscuredDecimal wmg(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6854C0
    static bool wni(Il2CppString* a, Il2CppString* b);  // RVA: 0x687680
    static void wnt(Action* a);  // RVA: 0x688A20
    static Byte[][] htf(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x67F540
    static StorageDataType ebt(Il2CppString* a);  // RVA: 0x67D670
    static void evy(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x67DE90
    static Il2CppString* wnn();  // RVA: 0x6884C0
    static void jpq();  // RVA: 0x680300
    static void wkm(Il2CppString* a, Byte[][] b);  // RVA: 0x6836B0
    static void wlk(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6846F0
    static Il2CppString* wne(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x686850
    static ObscuredInt wml(Il2CppString* a, ObscuredInt b);  // RVA: 0x685960
    static void cee(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x67C2D0
    static void gdn(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x67EB70
    static Il2CppString* nze(Il2CppString* a, Il2CppString* b);  // RVA: 0x6809D0
    static void wli(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x684590
    static void wnx(Action* a);  // RVA: 0x688E20
    static float jil(Il2CppString* a, float b);  // RVA: 0x680030
    static ObscuredShort ibp(Il2CppString* a, ObscuredShort b);  // RVA: 0x67F830
    static Byte[][] wnd(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x6867B0
    static ObscuredULong fuy(Il2CppString* a, ObscuredULong b);  // RVA: 0x67E9F0
    static void woc(bool a);  // RVA: 0x689130
    static ObscuredQuaternion wmn(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x685AD0
    static void wlb(Il2CppString* a, Rect b);  // RVA: 0x684180
    static ObscuredLong kwe(Il2CppString* a, ObscuredLong b);  // RVA: 0x680DB0
    static ObscuredVector3 kos(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x680B70
    static int32_t kkq(Il2CppString* a, int32_t b);  // RVA: 0x6809F0
    static bool woi(Il2CppString* a);  // RVA: 0x689420
    static Il2CppString* ohc(Il2CppString* a, Il2CppString* b);  // RVA: 0x6809D0
    static Char[][] wmy(Il2CppString* a, Il2CppString* b);  // RVA: 0x686350
    static bool woq(Il2CppString* a, Il2CppString* b);  // RVA: 0x6896B0
    static void Save();  // RVA: 0x67BCB0
    static bool woh(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x689360
    static bool xl(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x689950
    static void wlr(Il2CppString* a, ObscuredSByte b);  // RVA: 0x684B50
    static Byte[][] wnk(Il2CppString* a);  // RVA: 0x688270
    static Color32 wkz(Il2CppString* a);  // RVA: 0x684070
    static ObscuredDateTimeOffset kdy(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6807C0
    static void wly(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x684F20
    static void msx(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x681C40
    static void wof();  // RVA: 0x669090
    static void fca(Il2CppString* a, int32_t b);  // RVA: 0x67E060
    static void wma(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x685060
    static Byte[][] flz(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x67E470
    static int32_t bwp(Il2CppString* a, int32_t b);  // RVA: 0x67C260
    static void wlh(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x684500
    static b wnc(Il2CppString* a, Il2CppString* b, b c, Il2CppString* d);  // RVA: 0x562180
    static void nda(Il2CppString* a, ObscuredInt b);  // RVA: 0x681D70
    static void wkv(Il2CppString* a, Quaternion b);  // RVA: 0x683DF0
    static ObscuredFloat ocg(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6828B0
    static void wns(Action* a);  // RVA: 0x688920
    static Byte[][] rs(uint8_t a, int32_t b);  // RVA: 0x682E10
    static ObscuredVector3 nxm(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6822F0
    static void lgo(Il2CppString* a, ObscuredBool b);  // RVA: 0x681060
    static bool wod();  // RVA: 0x6891D0
    static void wnq(Action* a);  // RVA: 0x688720
    static Il2CppString* kjd(Il2CppString* a, Il2CppString* b);  // RVA: 0x6809D0
    static void bit(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x67BF00
    static ObscuredFloat wmj(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6857A0
    static void ith(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x67FCA0
    static void wju(Il2CppString* a, int32_t b);  // RVA: 0x682E90
    static uint32_t wkb(Il2CppString* a, uint32_t b);  // RVA: 0x6831A0
    static StorageDataType ehs(Il2CppString* a);  // RVA: 0x67D6F0
    static bool dct(Il2CppString* a, Il2CppString* b);  // RVA: 0x67D020
    static Byte[][] wnj(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x688180
    static void kqi(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x680C70
    static ObscuredShort oha(Il2CppString* a, ObscuredShort b);  // RVA: 0x6829F0
    static void mfv(Il2CppString* a, Il2CppString* b);  // RVA: 0x681890
    static ObscuredShort wmp(Il2CppString* a, ObscuredShort b);  // RVA: 0x685C50
    static ObscuredUShort hxs(Il2CppString* a, ObscuredUShort b);  // RVA: 0x67F670
    static void fny(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x67E540
    static void hxl(Il2CppString* a, ObscuredUShort b);  // RVA: 0x67F5E0
    static ObscuredVector2Int erh(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x67DAD0
    static void euw(Il2CppString* a, ObscuredSByte b);  // RVA: 0x67DE10
    static ObscuredBool euo(Il2CppString* a, ObscuredBool b);  // RVA: 0x67DD50
    static void wlg(Il2CppString* a, ObscuredChar b);  // RVA: 0x684470
    static void ioy(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x67FAD0
    static void wkp(Il2CppString* a, Vector2 b);  // RVA: 0x6839F0
    static bool lwh(Il2CppString* a, Il2CppString* b);  // RVA: 0x681350
    static void wom(Il2CppString* a, c b);  // RVA: 0x562180
    static void wnr(Action* a);  // RVA: 0x688820
    static Byte[][] ckw(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x67C6A0
    static bool wkl(Il2CppString* a, bool b);  // RVA: 0x683640
    static void wnu(Action* a);  // RVA: 0x688B20
    static ObscuredString* wmq(Il2CppString* a, ObscuredString* b);  // RVA: 0x685D10
    static ObscuredBool jjv(Il2CppString* a, ObscuredBool b);  // RVA: 0x6800A0
    static void dcj();  // RVA: 0x67CF00
    static ObscuredChar kna(Il2CppString* a, ObscuredChar b);  // RVA: 0x680AB0
    static void wke(Il2CppString* a, Decimal b);  // RVA: 0x6832F0
    static void oq();  // RVA: 0x682AB0
    static void wlx(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x684E80
    static ObscuredString* mxl(Il2CppString* a, ObscuredString* b);  // RVA: 0x681CF0
    static void wlu(Il2CppString* a, ObscuredUInt b);  // RVA: 0x684CE0
    static Vector3 wku(Il2CppString* a, Vector3 b);  // RVA: 0x683D40
    static ObscuredDateTimeOffset z(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x689E40
    static void wlq(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x684AA0
    static void wnw(Action* a);  // RVA: 0x688D20
    static void wol();  // RVA: 0x689620
    static ObscuredDateTime wme(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x685310
    static ObscuredDouble cpv(Il2CppString* a, ObscuredDouble b);  // RVA: 0x67CA60
    static void wlp(Il2CppString* a, ObscuredLong b);  // RVA: 0x684A10
    static void jer(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x67FE70
    static ObscuredGuid mmp(Il2CppString* a, ObscuredGuid b);  // RVA: 0x681AA0
    static ObscuredInt jlb(Il2CppString* a, ObscuredInt b);  // RVA: 0x6801E0
    static Il2CppString* bwm(Il2CppString* a, Il2CppString* b);  // RVA: 0x67C0E0
    static void wok();  // RVA: 0x689560
    static void nsw(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6821B0
    static void ktq();  // RVA: 0x680D20
    static ObscuredShort cmi(Il2CppString* a, ObscuredShort b);  // RVA: 0x67C820
    static void jki(Il2CppString* a, ObscuredSByte b);  // RVA: 0x680160
    static void wnv(Action* a);  // RVA: 0x688C20
    static ObscuredVector3Int ibj(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x67F730
    static void kyj(Il2CppString* a, float b);  // RVA: 0x680EF0
    static void kdl();  // RVA: 0x680720
    static void wle(Il2CppString* a, ObscuredBool b);  // RVA: 0x684360
    static void wos();  // RVA: 0x689710
    static ObscuredUInt etl(Il2CppString* a, ObscuredUInt b);  // RVA: 0x67DC10
    static ObscuredSByte wmo(Il2CppString* a, ObscuredSByte b);  // RVA: 0x685BD0
    static d won(Il2CppString* a, d b);  // RVA: 0x562180
    static ObscuredDateTime lkv(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6810F0
    static Il2CppString* wor(Il2CppString* a, Il2CppString* b);  // RVA: 0x6809D0
    static StorageDataType wna(Il2CppString* a);  // RVA: 0x686710
    static Il2CppString* gzg(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x67ECE0
    static double wkd(Il2CppString* a, double b);  // RVA: 0x683280
    static ObscuredVector2 nkn(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x681DF0
    static ObscuredVector2Int cgx(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x67C5E0
    static ObscuredVector3 dvg(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x67D570
    static void wln(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6848E0
    static Quaternion wkw(Il2CppString* a);  // RVA: 0x683E70
    static ObscuredString* cqt(Il2CppString* a, ObscuredString* b);  // RVA: 0x67CBE0
    static void keo(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6808B0
    static void wjy(Il2CppString* a, float b);  // RVA: 0x683050
    static ObscuredDateTime fgv(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x67E190
    static StorageDataType otr(Il2CppString* a);  // RVA: 0x682CD0
    static ObscuredUShort wmt(Il2CppString* a, ObscuredUShort b);  // RVA: 0x685F00
    static Byte[][] mpd(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x681BA0
    static void .cctor();  // RVA: 0x67BD50
    static ObscuredSByte crt(Il2CppString* a, ObscuredSByte b);  // RVA: 0x67CC60
    static uint64_t wkj(Il2CppString* a, uint64_t b);  // RVA: 0x683560
    static bool fqy(Il2CppString* a, Il2CppString* b);  // RVA: 0x67E6A0
    static void wlf(Il2CppString* a, ObscuredByte b);  // RVA: 0x6843F0
    static void fqn(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x67E5F0
    static void wlz(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x684FB0
    static Byte[][] jrv(Il2CppString* a);  // RVA: 0x680420
    static ObscuredDouble nqf(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6820D0
    static void wog(Il2CppString* a, Il2CppString* b);  // RVA: 0x689300
    static int32_t wjv(Il2CppString* a, int32_t b);  // RVA: 0x682F00
    static Il2CppString* cnq(Il2CppString* a, Il2CppString* b);  // RVA: 0x67C8E0
    static void bkj(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x67C030
    static void dpv(Il2CppString* a, ObscuredULong b);  // RVA: 0x67D4E0
    static Byte[][] wng(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x687430
    static void cej();  // RVA: 0x67C380
    static ObscuredBigInteger wmh(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6855C0
    static void woj(Il2CppString* a);  // RVA: 0x6894E0
    static Byte[][] oqm(Il2CppString* a);  // RVA: 0x682B40
    static Byte[][] nq(Il2CppString* a);  // RVA: 0x681F40
    static void wkg(Il2CppString* a, int64_t b);  // RVA: 0x683410
    static ObscuredDecimal fly(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x67E370
    static ObscuredSByte ctk(Il2CppString* a, ObscuredSByte b);  // RVA: 0x67CCE0
    static ObscuredLong wmm(Il2CppString* a, ObscuredLong b);  // RVA: 0x685A10
    static dbf* wny();  // RVA: 0x688F20
    static void wop(Il2CppString* a, Il2CppString* b);  // RVA: 0x680A60
    static Vector3 wkt(Il2CppString* a);  // RVA: 0x683C30
    static void eyr(Il2CppString* a, ObscuredChar b);  // RVA: 0x67DFD0
    static DeviceLockLevel wnz();  // RVA: 0x688F70
    static void wki(Il2CppString* a, uint64_t b);  // RVA: 0x6834F0
    static void cqf();  // RVA: 0x67CB40
    static ObscuredDateTime gsg(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x67EC20
    static void wjw(Il2CppString* a, Il2CppString* b);  // RVA: 0x682F70
    static void kks(Il2CppString* a, Il2CppString* b);  // RVA: 0x680A60
    static ObscuredBigInteger mjh(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6819A0
    static void fjf();  // RVA: 0x67E250
    static bool wob();  // RVA: 0x6890A0
    static e woo(Il2CppString* a, e b);  // RVA: 0x562180
    static Rect wld(Il2CppString* a, Rect b);  // RVA: 0x6842C0
    static void clg(Il2CppString* a, ObscuredChar b);  // RVA: 0x67C790
    static int64_t wkh(Il2CppString* a, int64_t b);  // RVA: 0x683480
    static Byte[][] jwj(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x6805B0
    static Il2CppString* wnm();  // RVA: 0x688470
    static void jco();  // RVA: 0x67FD50
};

// Namespace: <global>
class dbt
{
public:

    // Methods
    int32_t wou();  // RVA: 0x41F5D0
    void wov();  // RVA: 0x42D760
};

// Namespace: <global>
class dbu
{
public:
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredBigInteger
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        SerializableBigInteger hiddenValue; // 0x0018
        uint8_t pad_0019[0xF]; // 0x0019
        uint32_t currentCryptoKey; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        BigInteger fakeValue; // 0x0030
    
        // Methods
        static ObscuredBigInteger op_Implicit(BigInteger value);  // RVA: 0x68BD00
        static ObscuredBigInteger op_Implicit(uint8_t value);  // RVA: 0x68C0D0
        static ObscuredBigInteger op_Implicit(int8_t value);  // RVA: 0x68BEF0
        static ObscuredBigInteger op_Implicit(int16_t value);  // RVA: 0x68BC70
        static ObscuredBigInteger op_Implicit(uint16_t value);  // RVA: 0x68C160
        static ObscuredBigInteger op_Implicit(int32_t value);  // RVA: 0x68BB50
        static ObscuredBigInteger op_Implicit(uint32_t value);  // RVA: 0x68BBE0
        static ObscuredBigInteger op_Implicit(int64_t value);  // RVA: 0x68BFB0
        static ObscuredBigInteger op_Implicit(uint64_t value);  // RVA: 0x68BE60
        static ObscuredBigInteger op_Implicit(float value);  // RVA: 0x68BD40
        static ObscuredBigInteger op_Implicit(double value);  // RVA: 0x68BDD0
        static ObscuredBigInteger op_Implicit(Decimal value);  // RVA: 0x68C040
        static BigInteger op_Implicit(ObscuredBigInteger value);  // RVA: 0x68BF80
        static uint8_t wow(ObscuredBigInteger a);  // RVA: 0x68C250
        static int8_t wox(ObscuredBigInteger a);  // RVA: 0x68C2C0
        static int16_t woy(ObscuredBigInteger a);  // RVA: 0x68C330
        static uint16_t woz(ObscuredBigInteger a);  // RVA: 0x68C3A0
        static int32_t wpa(ObscuredBigInteger a);  // RVA: 0x68C410
        static uint32_t wpb(ObscuredBigInteger a);  // RVA: 0x68C480
        static int64_t wpc(ObscuredBigInteger a);  // RVA: 0x68C4F0
        static uint64_t wpd(ObscuredBigInteger a);  // RVA: 0x68C560
        static float wpe(ObscuredBigInteger a);  // RVA: 0x68C5D0
        static double wpf(ObscuredBigInteger a);  // RVA: 0x68C640
        static Decimal wpg(ObscuredBigInteger a);  // RVA: 0x68C6B0
        static ObscuredBigInteger wph(ObscuredBigInteger a, int32_t b);  // RVA: 0x68C740
        static ObscuredBigInteger wpi(ObscuredBigInteger a, int32_t b);  // RVA: 0x68C840
        static ObscuredBigInteger wpj(ObscuredBigInteger a);  // RVA: 0x68C940
        static ObscuredBigInteger wpk(ObscuredBigInteger a);  // RVA: 0x68CA30
        static ObscuredBigInteger wpl(ObscuredBigInteger a);  // RVA: 0x68CB20
        static ObscuredBigInteger wpm(ObscuredBigInteger a, int64_t b);  // RVA: 0x68CC10
        static ObscuredBigInteger wpn(ObscuredBigInteger a, int64_t b);  // RVA: 0x68CD40
        static ObscuredBigInteger wpo(ObscuredBigInteger a);  // RVA: 0x68CE80
        static ObscuredBigInteger wpp(ObscuredBigInteger a);  // RVA: 0x68D020
        static bool wpq(ObscuredBigInteger a, int64_t b);  // RVA: 0x68D1C0
        static bool wpr(ObscuredBigInteger a, int64_t b);  // RVA: 0x68D280
        static bool wps(ObscuredBigInteger a, int64_t b);  // RVA: 0x68D340
        static bool wpt(ObscuredBigInteger a, int64_t b);  // RVA: 0x68D3E0
        static bool wpu(ObscuredBigInteger a, int64_t b);  // RVA: 0x68D480
        static bool wpv(ObscuredBigInteger a, int64_t b);  // RVA: 0x68D520
        static bool wpw(ObscuredBigInteger a, uint64_t b);  // RVA: 0x68D5C0
        static bool wpx(ObscuredBigInteger a, uint64_t b);  // RVA: 0x68D680
        static bool wpy(ObscuredBigInteger a, uint64_t b);  // RVA: 0x68D740
        static bool wpz(ObscuredBigInteger a, uint64_t b);  // RVA: 0x68D7E0
        static bool wqa(ObscuredBigInteger a, uint64_t b);  // RVA: 0x68D880
        static bool wqb(ObscuredBigInteger a, uint64_t b);  // RVA: 0x68D920
        static bool wqc(int64_t a, ObscuredBigInteger b);  // RVA: 0x68D9C0
        static bool wqd(int64_t a, ObscuredBigInteger b);  // RVA: 0x68DA60
        static bool wqe(int64_t a, ObscuredBigInteger b);  // RVA: 0x68DB00
        static bool wqf(int64_t a, ObscuredBigInteger b);  // RVA: 0x68DBA0
        static bool wqg(int64_t a, ObscuredBigInteger b);  // RVA: 0x68DC40
        static bool wqh(int64_t a, ObscuredBigInteger b);  // RVA: 0x68DCE0
        static bool wqi(uint64_t a, ObscuredBigInteger b);  // RVA: 0x68DD80
        static bool wqj(uint64_t a, ObscuredBigInteger b);  // RVA: 0x68DE20
        static bool wqk(uint64_t a, ObscuredBigInteger b);  // RVA: 0x68DEC0
        static bool wql(uint64_t a, ObscuredBigInteger b);  // RVA: 0x68DF60
        static bool wqm(uint64_t a, ObscuredBigInteger b);  // RVA: 0x68E000
        static bool wqn(uint64_t a, ObscuredBigInteger b);  // RVA: 0x68E0A0
        static ObscuredBigInteger wqo(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68E140
        static ObscuredBigInteger wqp(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68E280
        static ObscuredBigInteger wqq(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68E3C0
        static ObscuredBigInteger wqr(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68E500
        static ObscuredBigInteger wqs(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68E640
        static ObscuredBigInteger wqt(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68E780
        static ObscuredBigInteger wqu(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68E8C0
        static ObscuredBigInteger wqv(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68EA00
        static ObscuredBigInteger wqw(ObscuredBigInteger a, int32_t b);  // RVA: 0x68EB40
        int32_t GetHashCode();  // RVA: 0x68B7D0
        Il2CppString* ToString();  // RVA: 0x68B8A0
        Il2CppString* wqx(Il2CppString* a);  // RVA: 0x68EC30
        Il2CppString* wqy(IFormatProvider* a);  // RVA: 0x68ECB0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x68B910
        bool Equals(Il2CppObject* other);  // RVA: 0x68B510
        bool Equals(BigInteger other);  // RVA: 0x68B480
        bool Equals(ObscuredBigInteger obj);  // RVA: 0x68B6A0
        int32_t CompareTo(ObscuredBigInteger other);  // RVA: 0x68B340
        int32_t CompareTo(BigInteger other);  // RVA: 0x68B3F0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x68B2C0
        int32_t wqz(int64_t a);  // RVA: 0x68ED30
        int32_t wra(uint64_t a);  // RVA: 0x68EDB0
        Byte[][] wrb();  // RVA: 0x68EE30
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x68B840
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(BigInteger value);  // RVA: 0x68B9C0
        static BigInteger wrc(BigInteger a, uint32_t b);  // RVA: 0x68EEA0
        static BigInteger wrd(BigInteger a, uint32_t b);  // RVA: 0x68F000
        static ObscuredBigInteger wre(BigInteger a, uint32_t b);  // RVA: 0x68F060
        static uint32_t wrf();  // RVA: 0x68F130
        BigInteger wrg(uint32_t a);  // RVA: 0x68F140
        void wrh(BigInteger a, uint32_t b);  // RVA: 0x68F220
        BigInteger wri();  // RVA: 0x68BF80
        void wov();  // RVA: 0x68C200
        static bool wrj(BigInteger a, int32_t b);  // RVA: 0x68F2E0
        void wrk(BigInteger a);  // RVA: 0x68F300
        BigInteger wrl();  // RVA: 0x68F3E0
        bool wrm();  // RVA: 0x68F600
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct BigIntegerContents
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t sign; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    UInt32[][] bits; // 0x0018

    // Methods
    bool Equals(BigIntegerContents other);  // RVA: 0x68AEB0
    bool Equals(Il2CppObject* obj);  // RVA: 0x68AF30
    int32_t GetHashCode();  // RVA: 0x68B010
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct SerializableBigInteger
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        BigInteger value; // 0x0010
        BigIntegerContents raw; // 0x0010
    
        // Methods
        SerializableBigInteger wrn(uint32_t a);  // RVA: 0x6A9E50
        BigInteger wro(uint32_t a);  // RVA: 0x6A9EF0
        SerializableBigInteger wrp(uint32_t a);  // RVA: 0x6A9E50
        static BigInteger op_Implicit(SerializableBigInteger value);  // RVA: 0x6A9E00
        bool Equals(SerializableBigInteger other);  // RVA: 0x6A9C60
        bool Equals(Il2CppObject* obj);  // RVA: 0x6A9CD0
        int32_t GetHashCode();  // RVA: 0x6A9DB0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredBool
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint8_t currentCryptoKey; // 0x0018
        bool _fakeValue; // 0x0019
        bool _fakeValueActive; // 0x001A
    
        // Methods
        static ObscuredBool op_Implicit(bool value);  // RVA: 0x68FB20
        static bool op_Implicit(ObscuredBool value);  // RVA: 0x68FBA0
        int32_t GetHashCode();  // RVA: 0x68F9E0
        Il2CppString* ToString();  // RVA: 0x68FA70
        bool Equals(Il2CppObject* other);  // RVA: 0x68F780
        bool Equals(ObscuredBool obj);  // RVA: 0x68F970
        bool Equals(bool other);  // RVA: 0x68F920
        int32_t CompareTo(ObscuredBool other);  // RVA: 0x68F680
        int32_t CompareTo(bool other);  // RVA: 0x68F6E0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x68F730
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x68FA20
        int32_t wou();  // RVA: 0x68C1F0
        void wrq(bool a);  // RVA: 0x68FC10
        bool wrr();  // RVA: 0x65C570
        void .ctor(bool value);  // RVA: 0x68FAB0
        static int32_t wrs(bool a, uint8_t b);  // RVA: 0x68FC20
        static bool wrt(int32_t a, uint8_t b);  // RVA: 0x68FC40
        static ObscuredBool wru(int32_t a, uint8_t b);  // RVA: 0x68FC60
        static uint8_t wrv();  // RVA: 0x68FCD0
        int32_t wrw(uint8_t a);  // RVA: 0x68FCE0
        void wrx(int32_t a, uint8_t b);  // RVA: 0x68FD80
        bool wry();  // RVA: 0x68FDE0
        void wov();  // RVA: 0x68FBB0
        static bool wrz(bool a, int32_t b);  // RVA: 0x68FDF0
        void wsa(bool a);  // RVA: 0x68FE00
        bool wsb();  // RVA: 0x68FE40
        bool wsc();  // RVA: 0x68FF80
        static void wsd(uint8_t a);  // RVA: 0x630C10
        void wse();  // RVA: 0x630C10
        static bool wsf(int32_t a, uint8_t b);  // RVA: 0x68FFA0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredByte
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint8_t hiddenValue; // 0x0014
        uint8_t currentCryptoKey; // 0x0015
        uint8_t fakeValue; // 0x0016
    
        // Methods
        static ObscuredByte op_Implicit(uint8_t value);  // RVA: 0x690380
        static uint8_t op_Implicit(ObscuredByte value);  // RVA: 0x6903E0
        static ObscuredByte wsg(ObscuredByte a);  // RVA: 0x690440
        static ObscuredByte wsh(ObscuredByte a);  // RVA: 0x6904A0
        static ObscuredByte wsi(ObscuredByte a, int32_t b);  // RVA: 0x690500
        int32_t GetHashCode();  // RVA: 0x690230
        Il2CppString* ToString();  // RVA: 0x6902B0
        Il2CppString* wsj(Il2CppString* a);  // RVA: 0x690560
        Il2CppString* wsk(IFormatProvider* a);  // RVA: 0x690590
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6902E0
        bool Equals(Il2CppObject* other);  // RVA: 0x690080
        bool Equals(ObscuredByte obj);  // RVA: 0x6901D0
        bool Equals(uint8_t other);  // RVA: 0x690050
        int32_t CompareTo(ObscuredByte other);  // RVA: 0x68FFB0
        int32_t CompareTo(uint8_t other);  // RVA: 0x690020
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x68FFF0
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x690260
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(uint8_t value);  // RVA: 0x690320
        static uint8_t wsl(uint8_t a, uint8_t b);  // RVA: 0x6905C0
        static void wsm(Byte[][] a, uint8_t b);  // RVA: 0x6905D0
        static uint8_t wsn(uint8_t a, uint8_t b);  // RVA: 0x690630
        static void wso(Byte[][] a, uint8_t b);  // RVA: 0x690640
        static ObscuredByte wsp(uint8_t a, uint8_t b);  // RVA: 0x6906A0
        static uint8_t wsq();  // RVA: 0x68FCD0
        uint8_t wsr(uint8_t a);  // RVA: 0x6906F0
        void wss(uint8_t a, uint8_t b);  // RVA: 0x690770
        uint8_t wst();  // RVA: 0x6907C0
        void wov();  // RVA: 0x690400
        static bool wsu(uint8_t a, int32_t b);  // RVA: 0x6907D0
        void wsv(uint8_t a);  // RVA: 0x6907E0
        uint8_t wsw();  // RVA: 0x690810
        bool wsx();  // RVA: 0x690910
        static void wsy(uint8_t a);  // RVA: 0x630C10
        void wsz();  // RVA: 0x630C10
        static uint8_t wta(uint8_t a, uint8_t b);  // RVA: 0x690930
        static void wtb(Byte[][] a, uint8_t b);  // RVA: 0x690970
        static uint8_t wtc(uint8_t a, uint8_t b);  // RVA: 0x6909B0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredChar
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        wchar_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x1]; // 0x0015
        wchar_t currentCryptoKey; // 0x0016
        uint8_t pad_0017[0x1]; // 0x0017
        wchar_t fakeValue; // 0x0018
    
        // Methods
        static ObscuredChar op_Implicit(wchar_t value);  // RVA: 0x690E50
        static wchar_t op_Implicit(ObscuredChar value);  // RVA: 0x690E40
        static ObscuredChar wtd(ObscuredChar a);  // RVA: 0x690F00
        static ObscuredChar wte(ObscuredChar a);  // RVA: 0x690F90
        static ObscuredChar wtf(ObscuredChar a, int32_t b);  // RVA: 0x691020
        int32_t GetHashCode();  // RVA: 0x690D60
        Il2CppString* ToString();  // RVA: 0x690DA0
        Il2CppString* wtg(IFormatProvider* a);  // RVA: 0x6910A0
        bool Equals(Il2CppObject* other);  // RVA: 0x690B10
        bool Equals(ObscuredChar other);  // RVA: 0x690CD0
        bool Equals(wchar_t other);  // RVA: 0x690AC0
        int32_t CompareTo(ObscuredChar other);  // RVA: 0x6909C0
        int32_t CompareTo(wchar_t other);  // RVA: 0x690A20
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x690A70
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(wchar_t value);  // RVA: 0x690DE0
        static wchar_t wth(wchar_t a, wchar_t b);  // RVA: 0x6910F0
        static wchar_t wti(wchar_t a, wchar_t b);  // RVA: 0x691100
        static ObscuredChar wtj(wchar_t a, wchar_t b);  // RVA: 0x691110
        static wchar_t wtk();  // RVA: 0x691170
        wchar_t wtl(wchar_t a);  // RVA: 0x691180
        void wtm(wchar_t a, wchar_t b);  // RVA: 0x691230
        wchar_t wtn();  // RVA: 0x691280
        void wov();  // RVA: 0x690EB0
        static bool wto(wchar_t a, int32_t b);  // RVA: 0x691290
        void wtp(wchar_t a);  // RVA: 0x6912A0
        wchar_t wtq();  // RVA: 0x6912D0
        bool wtr();  // RVA: 0x691410
        static void wts(wchar_t a);  // RVA: 0x630C10
        void wtt();  // RVA: 0x630C10
        static wchar_t wtu(wchar_t a, wchar_t b);  // RVA: 0x691460
        static wchar_t wtv(wchar_t a, wchar_t b);  // RVA: 0x691460
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredDateTime
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int64_t hiddenValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int64_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t fakeValue; // 0x0028
    
        // Methods
        int64_t wtw();  // RVA: 0x695920
        static ObscuredDateTime op_Implicit(DateTime value);  // RVA: 0x695840
        static DateTime op_Implicit(ObscuredDateTime value);  // RVA: 0x695870
        int32_t GetHashCode();  // RVA: 0x695410
        Il2CppString* ToString();  // RVA: 0x6956F0
        Il2CppString* wtx(Il2CppString* a);  // RVA: 0x6959D0
        TypeCode GetTypeCode();  // RVA: 0x6954C0
        bool wty(IFormatProvider* a);  // RVA: 0x695A90
        wchar_t wtz(IFormatProvider* a);  // RVA: 0x695AD0
        int8_t wua(IFormatProvider* a);  // RVA: 0x695B10
        uint8_t wub(IFormatProvider* a);  // RVA: 0x695B50
        int16_t wuc(IFormatProvider* a);  // RVA: 0x695B90
        uint16_t wud(IFormatProvider* a);  // RVA: 0x695BD0
        int32_t wue(IFormatProvider* a);  // RVA: 0x695C10
        uint32_t wuf(IFormatProvider* a);  // RVA: 0x695C50
        int64_t wug(IFormatProvider* a);  // RVA: 0x695C90
        uint64_t wuh(IFormatProvider* a);  // RVA: 0x695CD0
        float wui(IFormatProvider* a);  // RVA: 0x695D10
        double wuj(IFormatProvider* a);  // RVA: 0x695D50
        Decimal wuk(IFormatProvider* a);  // RVA: 0x695D90
        DateTime wul(IFormatProvider* a);  // RVA: 0x695DD0
        Il2CppObject* wum(Type* a, IFormatProvider* b);  // RVA: 0x695E40
        Il2CppString* ToString(IFormatProvider* provider);  // RVA: 0x695560
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x695620
        bool Equals(Il2CppObject* other);  // RVA: 0x6951F0
        bool Equals(ObscuredDateTime other);  // RVA: 0x695190
        bool Equals(DateTime other);  // RVA: 0x695350
        int32_t CompareTo(ObscuredDateTime other);  // RVA: 0x694FD0
        int32_t CompareTo(DateTime other);  // RVA: 0x694F10
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6950D0
        static DateTime wun(ObscuredDateTime a, TimeSpan b);  // RVA: 0x696040
        static DateTime wuo(ObscuredDateTime a, TimeSpan b);  // RVA: 0x696100
        static TimeSpan wup(ObscuredDateTime a, DateTime b);  // RVA: 0x6961C0
        static TimeSpan wuq(DateTime a, ObscuredDateTime b);  // RVA: 0x696280
        static bool wur(ObscuredDateTime a, DateTime b);  // RVA: 0x696340
        static bool wus(DateTime a, ObscuredDateTime b);  // RVA: 0x696400
        static bool wut(ObscuredDateTime a, DateTime b);  // RVA: 0x6964C0
        static bool wuu(DateTime a, ObscuredDateTime b);  // RVA: 0x696580
        static bool wuv(ObscuredDateTime a, DateTime b);  // RVA: 0x696640
        static bool wuw(DateTime a, ObscuredDateTime b);  // RVA: 0x696700
        static bool wux(ObscuredDateTime a, DateTime b);  // RVA: 0x6967C0
        static bool wuy(DateTime a, ObscuredDateTime b);  // RVA: 0x696880
        static bool wuz(ObscuredDateTime a, DateTime b);  // RVA: 0x696940
        static bool wva(DateTime a, ObscuredDateTime b);  // RVA: 0x696A00
        static bool wvb(ObscuredDateTime a, DateTime b);  // RVA: 0x696AC0
        static bool wvc(DateTime a, ObscuredDateTime b);  // RVA: 0x696B80
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x6954D0
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(DateTime value);  // RVA: 0x6957A0
        static int64_t wvd(DateTime a, int64_t b);  // RVA: 0x696C40
        static DateTime wve(int64_t a, int64_t b);  // RVA: 0x696CA0
        static ObscuredDateTime wvf(int64_t a, int64_t b);  // RVA: 0x696D90
        static int64_t wvg();  // RVA: 0x694970
        int64_t wvh(int64_t a);  // RVA: 0x696DC0
        void wvi(int64_t a, int64_t b);  // RVA: 0x696EC0
        DateTime wvj();  // RVA: 0x696F70
        void wov();  // RVA: 0x6958D0
        static bool wvk(DateTime a, int32_t b);  // RVA: 0x696FD0
        static bool wvl(int64_t a, int32_t b);  // RVA: 0x694C60
        void wvm(int64_t a);  // RVA: 0x694C70
        static int64_t wvn(int64_t a, int64_t b);  // RVA: 0x694CA0
        static int64_t wvo(int64_t a, int64_t b);  // RVA: 0x694CB0
        DateTime wvp();  // RVA: 0x695870
        int64_t wvq();  // RVA: 0x697030
        bool wvr();  // RVA: 0x694EF0
        static DateTime wvs(int64_t a, int64_t b);  // RVA: 0x6971C0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredDateTimeOffset
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int64_t hiddenValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int64_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t fakeValue; // 0x0028
    
        // Methods
        int64_t wvt();  // RVA: 0x692010
        DateTime wvu();  // RVA: 0x6920E0
        DateTime wvv();  // RVA: 0x6921B0
        int32_t wvw();  // RVA: 0x692280
        DayOfWeek wvx();  // RVA: 0x692350
        int32_t wvy();  // RVA: 0x692420
        int32_t wvz();  // RVA: 0x6924F0
        int32_t wwa();  // RVA: 0x6925C0
        int32_t wwb();  // RVA: 0x692690
        int32_t wwc();  // RVA: 0x692760
        TimeSpan wwd();  // RVA: 0x692830
        int32_t wwe();  // RVA: 0x692900
        TimeSpan wwf();  // RVA: 0x6929D0
        DateTime wwg();  // RVA: 0x692AA0
        int32_t wwh();  // RVA: 0x692B70
        static ObscuredDateTimeOffset op_Implicit(DateTimeOffset value);  // RVA: 0x691E70
        static DateTimeOffset op_Implicit(ObscuredDateTimeOffset value);  // RVA: 0x691F20
        int32_t GetHashCode();  // RVA: 0x691A90
        Il2CppString* ToString();  // RVA: 0x691D00
        Il2CppString* wwi(Il2CppString* a);  // RVA: 0x692C40
        Il2CppString* wwj(IFormatProvider* a);  // RVA: 0x692D20
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x691C10
        bool Equals(Il2CppObject* other);  // RVA: 0x6918D0
        bool Equals(ObscuredDateTimeOffset other);  // RVA: 0x691A30
        bool Equals(DateTimeOffset other);  // RVA: 0x6917E0
        int32_t CompareTo(ObscuredDateTimeOffset other);  // RVA: 0x691560
        int32_t CompareTo(DateTimeOffset other);  // RVA: 0x691470
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6916C0
        static DateTimeOffset wwk(ObscuredDateTimeOffset a, TimeSpan b);  // RVA: 0x692E00
        static DateTimeOffset wwl(ObscuredDateTimeOffset a, TimeSpan b);  // RVA: 0x692F00
        static TimeSpan wwm(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x693000
        static TimeSpan wwn(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6930F0
        static TimeSpan wwo(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6931E0
        static bool wwp(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x693360
        static bool wwq(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x693450
        static bool wwr(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x693540
        static bool wws(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6936C0
        static bool wwt(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6937B0
        static bool wwu(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6938A0
        static bool wwv(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x693A20
        static bool www(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x693B10
        static bool wwx(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x693C00
        static bool wwy(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x693D80
        static bool wwz(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x693E70
        static bool wxa(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x693F60
        static bool wxb(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6940E0
        static bool wxc(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6941D0
        static bool wxd(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6942C0
        static bool wxe(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x694440
        static bool wxf(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x694530
        static bool wxg(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x694620
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x691B60
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(DateTimeOffset value);  // RVA: 0x691DD0
        static int64_t wxh(DateTimeOffset a, int64_t b);  // RVA: 0x6947A0
        static DateTimeOffset wxi(int64_t a, int64_t b);  // RVA: 0x694800
        static ObscuredDateTimeOffset wxj(int64_t a, int64_t b);  // RVA: 0x694940
        static int64_t wxk();  // RVA: 0x694970
        int64_t wxl(int64_t a);  // RVA: 0x694980
        void wxm(int64_t a, int64_t b);  // RVA: 0x694A90
        DateTimeOffset wxn();  // RVA: 0x694B60
        void wov();  // RVA: 0x691FC0
        static bool wxo(DateTimeOffset a, int32_t b);  // RVA: 0x694BF0
        static bool wxp(int64_t a, int32_t b);  // RVA: 0x694C60
        void wxq(int64_t a);  // RVA: 0x694C70
        static int64_t wxr(int64_t a, int64_t b);  // RVA: 0x694CA0
        static int64_t wxs(int64_t a, int64_t b);  // RVA: 0x694CB0
        DateTimeOffset wxt();  // RVA: 0x694CC0
        int64_t wxu();  // RVA: 0x694D50
        bool wxv();  // RVA: 0x694EF0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredDecimal
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        ACTkByte16 hiddenValue; // 0x0014
        uint8_t pad_0015[0x13]; // 0x0015
        int64_t currentCryptoKey; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Decimal fakeValue; // 0x0030
    
        // Methods
        static ObscuredDecimal op_Implicit(Decimal value);  // RVA: 0x6979F0
        static Decimal op_Implicit(ObscuredDecimal value);  // RVA: 0x697A30
        static ObscuredDecimal wxw(ObscuredFloat a);  // RVA: 0x697AD0
        static ObscuredDecimal wxx(ObscuredDecimal a);  // RVA: 0x697C20
        static ObscuredDecimal wxy(ObscuredDecimal a);  // RVA: 0x697D90
        static ObscuredDecimal wxz(ObscuredDecimal a, Decimal b);  // RVA: 0x697F00
        int32_t GetHashCode();  // RVA: 0x697730
        Il2CppString* ToString();  // RVA: 0x697820
        Il2CppString* wya(Il2CppString* a);  // RVA: 0x698000
        Il2CppString* wyb(IFormatProvider* a);  // RVA: 0x698080
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x697890
        bool Equals(Il2CppObject* other);  // RVA: 0x697410
        bool Equals(ObscuredDecimal other);  // RVA: 0x6975A0
        bool Equals(Decimal other);  // RVA: 0x6976A0
        int32_t CompareTo(ObscuredDecimal other);  // RVA: 0x697250
        int32_t CompareTo(Decimal other);  // RVA: 0x697380
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x697300
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x6977A0
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(Decimal value);  // RVA: 0x697920
        static Decimal wyc(Decimal a, int64_t b);  // RVA: 0x68B060
        static Decimal wyd(Decimal a, int64_t b);  // RVA: 0x68B060
        static ObscuredDecimal wye(Decimal a, int64_t b);  // RVA: 0x698100
        static int64_t wyf();  // RVA: 0x694970
        Decimal wyg(int64_t a);  // RVA: 0x698180
        void wyh(Decimal a, int64_t b);  // RVA: 0x698300
        Decimal wyi();  // RVA: 0x697A30
        void wov();  // RVA: 0x697A60
        static bool wyj(Decimal a, int32_t b);  // RVA: 0x698370
        void wyk(Decimal a);  // RVA: 0x698390
        static ACTkByte16 wyl(Decimal a, int64_t b);  // RVA: 0x68B060
        Decimal wym();  // RVA: 0x6983E0
        bool wyn();  // RVA: 0x6986E0
        static void wyo(int64_t a);  // RVA: 0x630C10
        void wyp();  // RVA: 0x630C10
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct DecimalLongBytesUnion
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Decimal d; // 0x0010
        int64_t l1; // 0x0010
        ACTkByte16 b16; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int64_t l2; // 0x0018
    
        // Methods
        static Decimal wyq(Decimal a, int64_t b);  // RVA: 0x68B060
        static ACTkByte16 wyr(Decimal a, int64_t b);  // RVA: 0x68B060
        static Decimal wys(ACTkByte16 a, int64_t b);  // RVA: 0x68B060
        static Decimal wyt(ACTkByte16 a);  // RVA: 0x65C880
        static ACTkByte16 wyu(Decimal a);  // RVA: 0x65C880
        static DecimalLongBytesUnion wyv(Decimal a);  // RVA: 0x65C880
        static DecimalLongBytesUnion wyw(ACTkByte16 a);  // RVA: 0x65C880
        DecimalLongBytesUnion wyx(int64_t a);  // RVA: 0x68B090
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct DoubleLongBytesUnion
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    double d; // 0x0010
    int64_t l; // 0x0010
    ACTkByte8 b8; // 0x0010

    // Methods
    static int64_t wyy(int64_t a, uint8_t b, uint8_t c);  // RVA: 0x68B0B0
    static int64_t wyz(double a, int64_t b);  // RVA: 0x68B0F0
    static double wza(int64_t a, int64_t b);  // RVA: 0x68B120
    static DoubleLongBytesUnion wzb(double a);  // RVA: 0x68B150
    static DoubleLongBytesUnion wzc(int64_t a);  // RVA: 0x68B160
    DoubleLongBytesUnion wzd(int64_t a);  // RVA: 0x68B170
    DoubleLongBytesUnion wze(int64_t a);  // RVA: 0x68B190
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredDouble
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int64_t hiddenValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int64_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        double fakeValue; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        ACTkByte8 hiddenValueOldByte8; // 0x0030
    
        // Methods
        static ObscuredDouble op_Implicit(double value);  // RVA: 0x698C10
        static double op_Implicit(ObscuredDouble value);  // RVA: 0x698C00
        static ObscuredDouble wzf(ObscuredFloat a);  // RVA: 0x698CA0
        static ObscuredDouble wzg(ObscuredDouble a);  // RVA: 0x698D60
        static ObscuredDouble wzh(ObscuredDouble a);  // RVA: 0x698E20
        static ObscuredDouble wzi(ObscuredDouble a, double b);  // RVA: 0x698EE0
        int32_t GetHashCode();  // RVA: 0x698A40
        Il2CppString* ToString();  // RVA: 0x698B50
        Il2CppString* wzj(Il2CppString* a);  // RVA: 0x698F90
        Il2CppString* wzk(IFormatProvider* a);  // RVA: 0x698FD0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x698B00
        bool Equals(Il2CppObject* other);  // RVA: 0x6987F0
        bool Equals(ObscuredDouble other);  // RVA: 0x6989A0
        bool Equals(double other);  // RVA: 0x698A00
        int32_t CompareTo(ObscuredDouble other);  // RVA: 0x6987B0
        int32_t CompareTo(double other);  // RVA: 0x698730
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x698770
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x698A90
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(double value);  // RVA: 0x698B80
        static int64_t wzl(double a, int64_t b);  // RVA: 0x68B0F0
        static double wzm(int64_t a, int64_t b);  // RVA: 0x68B120
        static int64_t wzn(int64_t a, uint8_t b, uint8_t c);  // RVA: 0x68B0B0
        static ObscuredDouble wzo(int64_t a, int64_t b);  // RVA: 0x699010
        static int64_t wzp();  // RVA: 0x694970
        int64_t wzq(int64_t a);  // RVA: 0x6990A0
        void wzr(int64_t a, int64_t b);  // RVA: 0x699160
        double wzs();  // RVA: 0x6991E0
        void wov();  // RVA: 0x698C40
        static bool wzt(double a, int32_t b);  // RVA: 0x6991F0
        void wzu(double a);  // RVA: 0x699200
        static bool wzv(double a, double b);  // RVA: 0x699260
        double wzw();  // RVA: 0x699320
        bool wzx();  // RVA: 0x694EF0
        static void wzy(int64_t a);  // RVA: 0x630C10
        void wzz();  // RVA: 0x630C10
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct FloatIntBytesUnion
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float f; // 0x0010
    int32_t i; // 0x0010
    ACTkByte4 b4; // 0x0010

    // Methods
    static int32_t xaa(int32_t a, uint8_t b, uint8_t c);  // RVA: 0x68B1C0
    static int32_t xab(float a, int32_t b);  // RVA: 0x68B1F0
    static float xac(int32_t a, int32_t b);  // RVA: 0x68B220
    static FloatIntBytesUnion xad(float a);  // RVA: 0x68B250
    static FloatIntBytesUnion xae(int32_t a);  // RVA: 0x68B260
    FloatIntBytesUnion xaf(int32_t a);  // RVA: 0x68B270
    FloatIntBytesUnion xag(int32_t a);  // RVA: 0x68B290
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredFloat
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t currentCryptoKey; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float fakeValue; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        ACTkByte4 hiddenValueOldByte4; // 0x0020
    
        // Methods
        static ObscuredFloat op_Implicit(float value);  // RVA: 0x6999E0
        static float op_Implicit(ObscuredFloat value);  // RVA: 0x6999D0
        static ObscuredFloat xah(ObscuredFloat a);  // RVA: 0x699A70
        static ObscuredFloat xai(ObscuredFloat a);  // RVA: 0x699B10
        static ObscuredFloat xaj(ObscuredFloat a, int32_t b);  // RVA: 0x699BB0
        int32_t GetHashCode();  // RVA: 0x699840
        Il2CppString* ToString();  // RVA: 0x699920
        Il2CppString* xak(Il2CppString* a);  // RVA: 0x699C50
        Il2CppString* xal(IFormatProvider* a);  // RVA: 0x699C90
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6998D0
        bool Equals(Il2CppObject* other);  // RVA: 0x699630
        bool Equals(ObscuredFloat other);  // RVA: 0x6997E0
        bool Equals(float other);  // RVA: 0x6997A0
        int32_t CompareTo(ObscuredFloat other);  // RVA: 0x6995F0
        int32_t CompareTo(float other);  // RVA: 0x6995B0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x699570
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x699870
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(float value);  // RVA: 0x699950
        static int32_t xam(float a, int32_t b);  // RVA: 0x68B1F0
        static float xan(int32_t a, int32_t b);  // RVA: 0x68B220
        static ObscuredFloat xao(int32_t a, int32_t b);  // RVA: 0x699CD0
        static int32_t xap();  // RVA: 0x68F130
        int32_t xaq(int32_t a);  // RVA: 0x699D50
        void xar(int32_t a, int32_t b);  // RVA: 0x699DF0
        float xas();  // RVA: 0x699E60
        void wov();  // RVA: 0x699A10
        static bool xat(float a, int32_t b);  // RVA: 0x699E70
        void xau(float a);  // RVA: 0x699E80
        static bool xav(float a, float b);  // RVA: 0x699ED0
        float xaw();  // RVA: 0x699F90
        bool xax();  // RVA: 0x69A190
        static void xay(int32_t a);  // RVA: 0x630C10
        void xaz();  // RVA: 0x630C10
        static int32_t xba(int32_t a, uint8_t b, uint8_t c);  // RVA: 0x68B1C0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredGuid
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int64_t hiddenValue1; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int64_t hiddenValue2; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t currentCryptoKey; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Guid fakeValue; // 0x0030
    
        // Methods
        static ObscuredGuid op_Implicit(Guid value);  // RVA: 0x69A730
        static Guid op_Implicit(ObscuredGuid value);  // RVA: 0x69A700
        int32_t GetHashCode();  // RVA: 0x69A4F0
        Il2CppString* ToString();  // RVA: 0x69A5F0
        Il2CppString* xbb(Il2CppString* a);  // RVA: 0x69A840
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x69A5A0
        bool Equals(Il2CppObject* other);  // RVA: 0x69A3A0
        bool Equals(ObscuredGuid other);  // RVA: 0x69A2F0
        bool Equals(Guid other);  // RVA: 0x69A2A0
        int32_t CompareTo(ObscuredGuid other);  // RVA: 0x69A240
        int32_t CompareTo(Guid other);  // RVA: 0x69A1B0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x69A200
        static bool xbc(ObscuredGuid a, Guid b);  // RVA: 0x69A880
        static bool xbd(Guid a, ObscuredGuid b);  // RVA: 0x69A8E0
        static bool xbe(ObscuredGuid a, ObscuredGuid b);  // RVA: 0x69A940
        static bool xbf(ObscuredGuid a, Guid b);  // RVA: 0x69A9E0
        static bool xbg(Guid a, ObscuredGuid b);  // RVA: 0x69AA40
        static bool xbh(ObscuredGuid a, ObscuredGuid b);  // RVA: 0x69AAA0
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x69A530
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(Guid value);  // RVA: 0x69A630
        static void xbi(Guid a, int64_t b, int64_t c, int64_t d);  // RVA: 0x69AB40
        static Guid xbj(int64_t a, int64_t b, int64_t c);  // RVA: 0x69ABC0
        static ObscuredGuid xbk(int64_t a, int64_t b, int64_t c);  // RVA: 0x69ADB0
        static int64_t xbl();  // RVA: 0x694970
        static int32_t xbm(int64_t a, int64_t b);  // RVA: 0x69ADE0
        void xbn(int64_t a, int64_t b, int64_t c);  // RVA: 0x69AE20
        void xbo(int64_t a, int64_t b, int64_t c);  // RVA: 0x69AF80
        Guid xbp();  // RVA: 0x69A700
        void wov();  // RVA: 0x69A770
        static bool xbq(Guid a, int32_t b);  // RVA: 0x69B040
        static bool xbr(System.ReadOnlySpan<System.Byte> a, int32_t b);  // RVA: 0x69B100
        void xbs(Guid a);  // RVA: 0x69B1F0
        static int64_t xbt(int64_t a, int64_t b);  // RVA: 0x694CA0
        static int64_t xbu(int64_t a, int64_t b);  // RVA: 0x694CB0
        Guid xbv();  // RVA: 0x69B290
        static bool xbw(Byte[][] a, Byte[][] b);  // RVA: 0x69B620
        bool xbx();  // RVA: 0x69B690
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredInt
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t currentCryptoKey; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t fakeValue; // 0x001C
    
        // Methods
        static ObscuredInt op_Implicit(int32_t value);  // RVA: 0x69BB90
        static int32_t op_Implicit(ObscuredInt value);  // RVA: 0x69BCA0
        static ObscuredFloat op_Implicit(ObscuredInt value);  // RVA: 0x69BAF0
        static ObscuredDouble op_Implicit(ObscuredInt value);  // RVA: 0x69BBF0
        static ObscuredUInt op_Explicit(ObscuredInt value);  // RVA: 0x69BA80
        static ObscuredInt xby(ObscuredInt a);  // RVA: 0x69BCF0
        static ObscuredInt xbz(ObscuredInt a);  // RVA: 0x69BD60
        static ObscuredInt xca(ObscuredInt a, int32_t b);  // RVA: 0x69BDD0
        int32_t GetHashCode();  // RVA: 0x69B930
        Il2CppString* ToString();  // RVA: 0x69BA00
        Il2CppString* xcb(Il2CppString* a);  // RVA: 0x69BE40
        Il2CppString* xcc(IFormatProvider* a);  // RVA: 0x69BE80
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x69B9B0
        bool Equals(Il2CppObject* other);  // RVA: 0x69B790
        bool Equals(ObscuredInt other);  // RVA: 0x69B8D0
        bool Equals(int32_t other);  // RVA: 0x69B760
        int32_t CompareTo(ObscuredInt other);  // RVA: 0x69B720
        int32_t CompareTo(int32_t other);  // RVA: 0x69B6B0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x69B6E0
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x69B960
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(int32_t value);  // RVA: 0x69BA30
        static int32_t xcd(int32_t a, int32_t b);  // RVA: 0x69BEC0
        static int32_t xce(int32_t a, int32_t b);  // RVA: 0x69BED0
        static ObscuredInt xcf(int32_t a, int32_t b);  // RVA: 0x69BEE0
        static int32_t xcg();  // RVA: 0x68F130
        int32_t xch(int32_t a);  // RVA: 0x69BF30
        void xci(int32_t a, int32_t b);  // RVA: 0x69BFA0
        int32_t xcj();  // RVA: 0x69BFE0
        void wov();  // RVA: 0x69BCB0
        static bool xck(int32_t a, int32_t b);  // RVA: 0x69BFF0
        void xcl(int32_t a);  // RVA: 0x69C000
        int32_t xcm();  // RVA: 0x69C030
        bool xcn();  // RVA: 0x69A190
        static void xco(int32_t a);  // RVA: 0x630C10
        void xcp();  // RVA: 0x630C10
        static int32_t xcq(int32_t a, int32_t b);  // RVA: 0x69C120
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredLong
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int64_t hiddenValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int64_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t fakeValue; // 0x0028
    
        // Methods
        static ObscuredLong op_Implicit(int64_t value);  // RVA: 0x69C540
        static int64_t op_Implicit(ObscuredLong value);  // RVA: 0x69C5A0
        static ObscuredLong xcr(ObscuredLong a);  // RVA: 0x69C5F0
        static ObscuredLong xcs(ObscuredLong a);  // RVA: 0x69C680
        static ObscuredLong xct(ObscuredLong a, int32_t b);  // RVA: 0x69C710
        int32_t GetHashCode();  // RVA: 0x69C3E0
        Il2CppString* ToString();  // RVA: 0x69C460
        Il2CppString* xcu(Il2CppString* a);  // RVA: 0x69C780
        Il2CppString* xcv(IFormatProvider* a);  // RVA: 0x69C7C0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x69C490
        bool Equals(Il2CppObject* other);  // RVA: 0x69C290
        bool Equals(ObscuredLong other);  // RVA: 0x69C1F0
        bool Equals(int64_t other);  // RVA: 0x69C250
        int32_t CompareTo(ObscuredLong other);  // RVA: 0x69C170
        int32_t CompareTo(int64_t other);  // RVA: 0x69C1B0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x69C130
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x69C410
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(int64_t value);  // RVA: 0x69C4E0
        static int64_t xcw(int64_t a, int64_t b);  // RVA: 0x694CA0
        static int64_t xcx(int64_t a, int64_t b);  // RVA: 0x694CB0
        static ObscuredLong xcy(int64_t a, int64_t b);  // RVA: 0x69C800
        static int64_t xcz();  // RVA: 0x694970
        int64_t xda(int64_t a);  // RVA: 0x69C850
        void xdb(int64_t a, int64_t b);  // RVA: 0x69C8E0
        int64_t xdc();  // RVA: 0x69C930
        void wov();  // RVA: 0x69C5B0
        static bool xdd(int64_t a, int32_t b);  // RVA: 0x694C60
        void xde(int64_t a);  // RVA: 0x694C70
        int64_t xdf();  // RVA: 0x69C940
        bool xdg();  // RVA: 0x694EF0
        static void xdh(int64_t a);  // RVA: 0x630C10
        void xdi();  // RVA: 0x630C10
        static int64_t xdj(int64_t a, int64_t b);  // RVA: 0x69CA60
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct RawEncryptedQuaternion
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t x; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t y; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t z; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t w; // 0x001C

    // Methods
    bool Equals(RawEncryptedQuaternion other);  // RVA: 0x6A9920
    bool Equals(Il2CppObject* obj);  // RVA: 0x6A9950
    int32_t GetHashCode();  // RVA: 0x6A9A00
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredQuaternion
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        RawEncryptedQuaternion hiddenValue; // 0x0014
        uint8_t pad_0015[0xF]; // 0x0015
        int32_t currentCryptoKey; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        Quaternion fakeValue; // 0x0028
    
        // Methods
        static ObscuredQuaternion op_Implicit(Quaternion value);  // RVA: 0x69D270
        static Quaternion op_Implicit(ObscuredQuaternion value);  // RVA: 0x69D240
        static ObscuredQuaternion xdk(ObscuredQuaternion a, ObscuredQuaternion b);  // RVA: 0x69D3D0
        static ObscuredQuaternion xdl(ObscuredQuaternion a, Quaternion b);  // RVA: 0x69D5D0
        bool Equals(Il2CppObject* other);  // RVA: 0x69CBB0
        bool Equals(ObscuredQuaternion other);  // RVA: 0x69CA70
        bool Equals(Quaternion other);  // RVA: 0x69CD50
        int32_t GetHashCode();  // RVA: 0x69CE00
        Il2CppString* ToString();  // RVA: 0x69CFD0
        Il2CppString* xdm(Il2CppString* a);  // RVA: 0x69D7B0
        void xdn();  // RVA: 0x69D800
        Quaternion xdo();  // RVA: 0x69D920
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x69CE90
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(Quaternion value);  // RVA: 0x69D010
        void .ctor(float x, float y, float z, float w);  // RVA: 0x69D110
        float xdp();  // RVA: 0x69D960
        void xdq(float a);  // RVA: 0x69D980
        float xdr();  // RVA: 0x69DA20
        void xds(float a);  // RVA: 0x69DA40
        float xdt();  // RVA: 0x69DAE0
        void xdu(float a);  // RVA: 0x69DB00
        float xdv();  // RVA: 0x69DBA0
        void xdw(float a);  // RVA: 0x69DBC0
        float get_Item(int32_t index);  // RVA: 0x69D150
        void set_Item(int32_t index, float value);  // RVA: 0x69D2B0
        static RawEncryptedQuaternion xdx(Quaternion a, int32_t b);  // RVA: 0x69DC60
        static RawEncryptedQuaternion xdy(float a, float b, float c, float d, int32_t e);  // RVA: 0x69DD20
        static Quaternion xdz(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x69DDE0
        static ObscuredQuaternion xea(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x69DE80
        static int32_t xeb();  // RVA: 0x68F130
        static bool xec(Quaternion a, Quaternion b);  // RVA: 0x69DEC0
        RawEncryptedQuaternion xed(int32_t a);  // RVA: 0x69DFE0
        void xee(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x69E090
        Quaternion xef();  // RVA: 0x69D240
        void wov();  // RVA: 0x69D380
        static bool xeg(Quaternion a, int32_t b);  // RVA: 0x69E1B0
        void xeh(Quaternion a);  // RVA: 0x69E1D0
        Quaternion xei();  // RVA: 0x69E2B0
        bool xej();  // RVA: 0x69E610
        static void xek(int32_t a);  // RVA: 0x630C10
        void xel();  // RVA: 0x630C10
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredSByte
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int8_t hiddenValue; // 0x0014
        int8_t currentCryptoKey; // 0x0015
        int8_t fakeValue; // 0x0016
    
        // Methods
        static ObscuredSByte op_Implicit(int8_t value);  // RVA: 0x69E9C0
        static int8_t op_Implicit(ObscuredSByte value);  // RVA: 0x69EA20
        static ObscuredSByte xem(ObscuredSByte a);  // RVA: 0x69EA80
        static ObscuredSByte xen(ObscuredSByte a);  // RVA: 0x69EAE0
        static ObscuredSByte xeo(ObscuredSByte a, int32_t b);  // RVA: 0x69EB40
        int32_t GetHashCode();  // RVA: 0x69E8C0
        Il2CppString* ToString();  // RVA: 0x69E8F0
        Il2CppString* xep(Il2CppString* a);  // RVA: 0x69EBA0
        Il2CppString* xeq(IFormatProvider* a);  // RVA: 0x69EBD0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x69E920
        bool Equals(Il2CppObject* other);  // RVA: 0x69E770
        bool Equals(ObscuredSByte obj);  // RVA: 0x69E710
        bool Equals(int8_t other);  // RVA: 0x69E6E0
        int32_t CompareTo(ObscuredSByte other);  // RVA: 0x69E6A0
        int32_t CompareTo(int8_t other);  // RVA: 0x69E670
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x69E640
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x690260
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(int8_t value);  // RVA: 0x69E960
        static int8_t xer(int8_t a, int8_t b);  // RVA: 0x6905C0
        static int8_t xes(int8_t a, int8_t b);  // RVA: 0x690630
        static ObscuredSByte xet(int8_t a, int8_t b);  // RVA: 0x69EC00
        static int8_t xeu();  // RVA: 0x69EC50
        int8_t xev(int8_t a);  // RVA: 0x69EC60
        void xew(int8_t a, int8_t b);  // RVA: 0x69ECE0
        int8_t xex();  // RVA: 0x69ED30
        void wov();  // RVA: 0x69EA40
        static bool xey(int8_t a, int32_t b);  // RVA: 0x69ED40
        void xez(int8_t a);  // RVA: 0x69ED50
        int8_t xfa();  // RVA: 0x69ED80
        bool xfb();  // RVA: 0x690910
        static void xfc(int8_t a);  // RVA: 0x630C10
        void xfd();  // RVA: 0x630C10
        static int8_t xfe(int8_t a, int8_t b);  // RVA: 0x6909B0
        static int8_t xff(int8_t a, int8_t b);  // RVA: 0x6909B0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredShort
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int16_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x1]; // 0x0015
        int16_t currentCryptoKey; // 0x0016
        uint8_t pad_0017[0x1]; // 0x0017
        int16_t fakeValue; // 0x0018
    
        // Methods
        static ObscuredShort op_Implicit(int16_t value);  // RVA: 0x69F2C0
        static int16_t op_Implicit(ObscuredShort value);  // RVA: 0x69F2B0
        static ObscuredShort xfg(ObscuredShort a);  // RVA: 0x69F370
        static ObscuredShort xfh(ObscuredShort a);  // RVA: 0x69F400
        static ObscuredShort xfi(ObscuredShort a, int32_t b);  // RVA: 0x69F490
        int32_t GetHashCode();  // RVA: 0x69F150
        Il2CppString* ToString();  // RVA: 0x69F1D0
        Il2CppString* xfj(Il2CppString* a);  // RVA: 0x69F510
        Il2CppString* xfk(IFormatProvider* a);  // RVA: 0x69F550
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x69F200
        bool Equals(Il2CppObject* other);  // RVA: 0x69EFE0
        bool Equals(ObscuredShort obj);  // RVA: 0x69EF40
        bool Equals(int16_t other);  // RVA: 0x69EFA0
        int32_t CompareTo(ObscuredShort other);  // RVA: 0x69EF00
        int32_t CompareTo(int16_t other);  // RVA: 0x69EEC0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x69EE80
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x69F180
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(int16_t value);  // RVA: 0x69F250
        static int16_t xfl(int16_t a, int16_t b);  // RVA: 0x6910F0
        static int16_t xfm(int16_t a, int16_t b);  // RVA: 0x691100
        static ObscuredShort xfn(int16_t a, int16_t b);  // RVA: 0x69F590
        static int16_t xfo();  // RVA: 0x69F5F0
        int16_t xfp(int16_t a);  // RVA: 0x69F600
        void xfq(int16_t a, int16_t b);  // RVA: 0x69F690
        int16_t xfr();  // RVA: 0x69F6E0
        void wov();  // RVA: 0x69F320
        static bool xfs(int16_t a, int32_t b);  // RVA: 0x69F6F0
        void xft(int16_t a);  // RVA: 0x69F700
        int16_t xfu();  // RVA: 0x69F730
        bool xfv();  // RVA: 0x69F850
        static void xfw(int16_t a);  // RVA: 0x630C10
        void xfx();  // RVA: 0x630C10
        static int16_t xfy(int16_t a, int16_t b);  // RVA: 0x691460
        static int16_t xfz(int16_t a, int16_t b);  // RVA: 0x691460
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    class ObscuredString
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Char[][] cryptoKey; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Char[][] hiddenChars; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* bmry; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Il2CppString* currentCryptoKey; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Byte[][] hiddenValue; // 0x0038
    
        // Methods
        int32_t xga();  // RVA: 0x6A0000
        wchar_t get_Item(int32_t index);  // RVA: 0x69FE80
        static ObscuredString* op_Implicit(Il2CppString* value);  // RVA: 0x69FF00
        static Il2CppString* op_Implicit(ObscuredString* value);  // RVA: 0x69FF70
        static bool xgb(ObscuredString* a, ObscuredString* b);  // RVA: 0x6A0020
        static bool xgc(ObscuredString* a, ObscuredString* b);  // RVA: 0x6A0160
        Il2CppString* xgd(int32_t a);  // RVA: 0x6A0180
        Il2CppString* xge(int32_t a, int32_t b);  // RVA: 0x6A01E0
        bool xgf(Il2CppString* a, StringComparison b);  // RVA: 0x6A0230
        bool xgg(Il2CppString* a, StringComparison b);  // RVA: 0x6A0280
        int32_t GetHashCode();  // RVA: 0x69FB90
        Il2CppString* ToString();  // RVA: 0x69FD10
        static bool xgh(ObscuredString* a);  // RVA: 0x6A02D0
        static bool xgi(ObscuredString* a);  // RVA: 0x6A0320
        bool Equals(Il2CppObject* other);  // RVA: 0x69FAB0
        bool Equals(ObscuredString* obj);  // RVA: 0x69F9A0
        bool xgj(ObscuredString* a, StringComparison b);  // RVA: 0x6A0420
        bool Equals(Il2CppString* other);  // RVA: 0x69F960
        int32_t CompareTo(ObscuredString* other);  // RVA: 0x69F870
        int32_t CompareTo(Il2CppString* other);  // RVA: 0x69F920
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x69F8E0
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x69FBD0
        int32_t wou();  // RVA: 0x65BB20
        void .ctor();  // RVA: 0x69FD30
        void .ctor(Il2CppString* value);  // RVA: 0x69FD70
        static Char[][] xgk();  // RVA: 0x6A04A0
        static Char[][] xgl(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A0500
        static Char[][] xgm(Il2CppString* a, Char[][] b);  // RVA: 0x6A0560
        static Char[][] xgn(Char[][] a, Char[][] b);  // RVA: 0x6A0590
        static Il2CppString* xgo(Char[][] a, Il2CppString* b);  // RVA: 0x6A05A0
        static Il2CppString* xgp(Char[][] a, Char[][] b);  // RVA: 0x6A05F0
        static ObscuredString* xgq(Char[][] a, Char[][] b);  // RVA: 0x6A0620
        static Char[][] xgr();  // RVA: 0x6A06B0
        static void xgs(Char[][] a);  // RVA: 0x6A0710
        Char[][] xgt(Char[][] a);  // RVA: 0x6A0720
        void xgu(Char[][] a, Char[][] b);  // RVA: 0x6A0800
        Il2CppString* xgv();  // RVA: 0x69FD10
        Char[][] xgw();  // RVA: 0x6A0890
        void wov();  // RVA: 0x69FFA0
        static bool xgx(Char[][] a, int32_t b);  // RVA: 0x6A08A0
        void xgy(Char[][] a);  // RVA: 0x6A08B0
        static Char[][] xgz(Char[][] a, Char[][] b);  // RVA: 0x6A0900
        static wchar_t xha(Char[][] a, Char[][] b, int32_t c);  // RVA: 0x6A0A70
        static bool xhb(ObscuredString* a);  // RVA: 0x6A0320
        Il2CppString* xhc();  // RVA: 0x69FD10
        Char[][] xhd();  // RVA: 0x6A0AC0
        bool xhe();  // RVA: 0x6A0DE0
        bool xhf(Char[][] a, Il2CppString* b);  // RVA: 0x6A0E10
        static void xhg(Il2CppString* a);  // RVA: 0x630C10
        void xhh();  // RVA: 0x630C10
        static Il2CppString* xhi(Il2CppString* a);  // RVA: 0x6A0F70
        static Il2CppString* xhj(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A0FB0
        Il2CppString* xhk();  // RVA: 0x6A0FC0
        void xhl(Il2CppString* a);  // RVA: 0x630C10
        static ObscuredString* xhm(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A1000
        void xhn(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A1160
        static Char[][] xho(Char[][] a);  // RVA: 0x6A1270
        static Il2CppString* xhp(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A1290
        static Il2CppString* xhq(Byte[][] a);  // RVA: 0x6A1460
        static Byte[][] xhr(Il2CppString* a);  // RVA: 0x6A14F0
        static bool xhs(Char[][] a, Char[][] b);  // RVA: 0x6A1580
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredUInt
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t currentCryptoKey; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        uint32_t fakeValue; // 0x001C
    
        // Methods
        static ObscuredUInt op_Implicit(uint32_t value);  // RVA: 0x69BB90
        static uint32_t op_Implicit(ObscuredUInt value);  // RVA: 0x6A1930
        static ObscuredInt xht(ObscuredUInt a);  // RVA: 0x6A1980
        static ObscuredUInt xhu(ObscuredUInt a);  // RVA: 0x6A19F0
        static ObscuredUInt xhv(ObscuredUInt a);  // RVA: 0x6A1A60
        static ObscuredUInt xhw(ObscuredUInt a, int32_t b);  // RVA: 0x6A1AD0
        int32_t GetHashCode();  // RVA: 0x6A1880
        Il2CppString* ToString();  // RVA: 0x6A18B0
        Il2CppString* xhx(Il2CppString* a);  // RVA: 0x6A1B40
        Il2CppString* xhy(IFormatProvider* a);  // RVA: 0x6A1B80
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A18E0
        bool Equals(Il2CppObject* other);  // RVA: 0x6A16E0
        bool Equals(ObscuredUInt obj);  // RVA: 0x6A1820
        bool Equals(uint32_t other);  // RVA: 0x6A16B0
        int32_t CompareTo(ObscuredUInt other);  // RVA: 0x6A1640
        int32_t CompareTo(uint32_t other);  // RVA: 0x6A1680
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A1600
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x69B960
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(uint32_t value);  // RVA: 0x69BA30
        static uint32_t xhz(uint32_t a, uint32_t b);  // RVA: 0x69BEC0
        static uint32_t xia(uint32_t a, uint32_t b);  // RVA: 0x69BED0
        static ObscuredUInt xib(uint32_t a, uint32_t b);  // RVA: 0x69BEE0
        static uint32_t xic();  // RVA: 0x68F130
        uint32_t xid(uint32_t a);  // RVA: 0x69BF30
        void xie(uint32_t a, uint32_t b);  // RVA: 0x69BFA0
        uint32_t xif();  // RVA: 0x6A1BC0
        void wov();  // RVA: 0x6A1940
        static bool xig(uint32_t a, int32_t b);  // RVA: 0x69BFF0
        void xih(uint32_t a);  // RVA: 0x69C000
        uint32_t xii();  // RVA: 0x6A1BD0
        bool xij();  // RVA: 0x69A190
        static void xik(uint32_t a);  // RVA: 0x630C10
        void xil();  // RVA: 0x630C10
        static uint32_t xim(uint32_t a, uint32_t b);  // RVA: 0x69C120
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredULong
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint64_t hiddenValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint64_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint64_t fakeValue; // 0x0028
    
        // Methods
        static ObscuredULong op_Implicit(uint64_t value);  // RVA: 0x6A2090
        static uint64_t op_Implicit(ObscuredULong value);  // RVA: 0x6A2080
        static ObscuredULong xin(ObscuredULong a);  // RVA: 0x6A2130
        static ObscuredULong xio(ObscuredULong a);  // RVA: 0x6A21C0
        static ObscuredULong xip(ObscuredULong a, bool b);  // RVA: 0x6A2250
        int32_t GetHashCode();  // RVA: 0x6A1F70
        Il2CppString* ToString();  // RVA: 0x6A1FF0
        Il2CppString* xiq(Il2CppString* a);  // RVA: 0x6A22D0
        Il2CppString* xir(IFormatProvider* a);  // RVA: 0x6A2310
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A1FA0
        bool Equals(Il2CppObject* other);  // RVA: 0x6A1D80
        bool Equals(ObscuredULong obj);  // RVA: 0x6A1F10
        bool Equals(uint64_t other);  // RVA: 0x6A1ED0
        int32_t CompareTo(ObscuredULong other);  // RVA: 0x6A1D40
        int32_t CompareTo(uint64_t other);  // RVA: 0x6A1CC0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A1D00
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x69C410
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(uint64_t value);  // RVA: 0x6A2020
        static uint64_t xis(uint64_t a, uint64_t b);  // RVA: 0x694CA0
        static uint64_t xit(uint64_t a, uint64_t b);  // RVA: 0x694CB0
        static ObscuredULong xiu(uint64_t a, uint64_t b);  // RVA: 0x6A2350
        static uint64_t xiv();  // RVA: 0x694970
        uint64_t xiw(uint64_t a);  // RVA: 0x6A23A0
        void xix(uint64_t a, uint64_t b);  // RVA: 0x6A2430
        uint64_t xiy();  // RVA: 0x6A2480
        void wov();  // RVA: 0x6A20F0
        static bool xiz(uint64_t a, int32_t b);  // RVA: 0x6A2490
        void xja(uint64_t a);  // RVA: 0x6A24A0
        uint64_t xjb();  // RVA: 0x6A24D0
        bool xjc();  // RVA: 0x694EF0
        static void xjd(uint64_t a);  // RVA: 0x630C10
        void xje();  // RVA: 0x630C10
        static uint64_t xjf(uint64_t a, uint64_t b);  // RVA: 0x69CA60
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredUShort
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint16_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x1]; // 0x0015
        uint16_t currentCryptoKey; // 0x0016
        uint8_t pad_0017[0x1]; // 0x0017
        uint16_t fakeValue; // 0x0018
    
        // Methods
        static ObscuredUShort op_Implicit(uint16_t value);  // RVA: 0x6A29E0
        static uint16_t op_Implicit(ObscuredUShort value);  // RVA: 0x6A29D0
        static ObscuredUShort xjg(ObscuredUShort a);  // RVA: 0x6A2A90
        static ObscuredUShort xjh(ObscuredUShort a);  // RVA: 0x6A2B20
        static ObscuredUShort xji(ObscuredUShort a, int32_t b);  // RVA: 0x6A2BB0
        int32_t GetHashCode();  // RVA: 0x6A28C0
        Il2CppString* ToString();  // RVA: 0x6A28F0
        Il2CppString* xjj(Il2CppString* a);  // RVA: 0x6A2C30
        Il2CppString* xjk(IFormatProvider* a);  // RVA: 0x6A2C70
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A2920
        bool Equals(Il2CppObject* other);  // RVA: 0x6A2750
        bool Equals(ObscuredUShort obj);  // RVA: 0x6A26B0
        bool Equals(uint16_t other);  // RVA: 0x6A2710
        int32_t CompareTo(ObscuredUShort other);  // RVA: 0x6A2670
        int32_t CompareTo(uint16_t other);  // RVA: 0x6A25F0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A2630
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x69F180
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(uint16_t value);  // RVA: 0x6A2970
        static uint16_t xjl(uint16_t a, uint16_t b);  // RVA: 0x6910F0
        static uint16_t xjm(uint16_t a, uint16_t b);  // RVA: 0x691100
        static ObscuredUShort xjn(uint16_t a, uint16_t b);  // RVA: 0x691110
        static uint16_t xjo();  // RVA: 0x6A2CB0
        uint16_t xjp(uint16_t a);  // RVA: 0x6A2CC0
        void xjq(uint16_t a, uint16_t b);  // RVA: 0x691230
        uint16_t xjr();  // RVA: 0x6A2D40
        void wov();  // RVA: 0x6A2A40
        static bool xjs(uint16_t a, int32_t b);  // RVA: 0x691290
        void xjt(uint16_t a);  // RVA: 0x6912A0
        uint16_t xju();  // RVA: 0x6A2D50
        bool xjv();  // RVA: 0x69F850
        static void xjw(uint16_t a);  // RVA: 0x630C10
        void xjx();  // RVA: 0x630C10
        static uint16_t xjy(uint16_t a, uint16_t b);  // RVA: 0x691460
        static uint16_t xjz(uint16_t a, uint16_t b);  // RVA: 0x691460
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct RawEncryptedVector2
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t x; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t y; // 0x0014

    // Methods
    bool Equals(RawEncryptedVector2 other);  // RVA: 0x6A9AB0
    bool Equals(Il2CppObject* obj);  // RVA: 0x6A9AE0
    int32_t GetHashCode();  // RVA: 0x6A9AD0
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredVector2
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        RawEncryptedVector2 hiddenValue; // 0x0014
        uint8_t pad_0015[0x7]; // 0x0015
        int32_t currentCryptoKey; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        Vector2 fakeValue; // 0x0020
    
        // Methods
        static ObscuredVector2 op_Implicit(Vector2 value);  // RVA: 0x6A4920
        static Vector2 op_Implicit(ObscuredVector2 value);  // RVA: 0x6A4910
        static Vector3 op_Implicit(ObscuredVector2 value);  // RVA: 0x6A4950
        static ObscuredVector2 xka(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6A4AC0
        static ObscuredVector2 xkb(Vector2 a, ObscuredVector2 b);  // RVA: 0x6A4B50
        static ObscuredVector2 xkc(ObscuredVector2 a, Vector2 b);  // RVA: 0x6A4BD0
        static ObscuredVector2 xkd(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6A4C50
        static ObscuredVector2 xke(Vector2 a, ObscuredVector2 b);  // RVA: 0x6A4CE0
        static ObscuredVector2 xkf(ObscuredVector2 a, Vector2 b);  // RVA: 0x6A4D60
        static ObscuredVector2 xkg(ObscuredVector2 a);  // RVA: 0x6A4DE0
        static ObscuredVector2 xkh(ObscuredVector2 a, float b);  // RVA: 0x6A4E60
        static ObscuredVector2 xki(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6A4EE0
        static ObscuredVector2 xkj(float a, ObscuredVector2 b);  // RVA: 0x6A4F70
        static ObscuredVector2 xkk(ObscuredVector2 a, float b);  // RVA: 0x6A4FF0
        static bool xkl(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6A5070
        static bool xkm(Vector2 a, ObscuredVector2 b);  // RVA: 0x6A50D0
        static bool xkn(ObscuredVector2 a, Vector2 b);  // RVA: 0x6A5130
        static bool xko(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6A5180
        static bool xkp(Vector2 a, ObscuredVector2 b);  // RVA: 0x6A51E0
        static bool xkq(ObscuredVector2 a, Vector2 b);  // RVA: 0x6A5240
        bool Equals(Il2CppObject* other);  // RVA: 0x6A44C0
        bool Equals(ObscuredVector2 other);  // RVA: 0x6A43E0
        bool Equals(Vector2 other);  // RVA: 0x6A4470
        int32_t GetHashCode();  // RVA: 0x6A46A0
        Il2CppString* ToString();  // RVA: 0x6A4750
        Il2CppString* xkr(Il2CppString* a);  // RVA: 0x6A5290
        void xks();  // RVA: 0x6A52D0
        Vector2 xkt();  // RVA: 0x6A53A0
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x6A46E0
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(Vector2 value);  // RVA: 0x6A4790
        void .ctor(float x, float y);  // RVA: 0x6A4780
        float xku();  // RVA: 0x6A53E0
        void xkv(float a);  // RVA: 0x6A5400
        float xkw();  // RVA: 0x6A5470
        void xkx(float a);  // RVA: 0x6A5490
        float get_Item(int32_t index);  // RVA: 0x6A4860
        void set_Item(int32_t index, float value);  // RVA: 0x6A4990
        static RawEncryptedVector2 xky(Vector2 a, int32_t b);  // RVA: 0x6A5500
        static RawEncryptedVector2 xkz(float a, float b, int32_t c);  // RVA: 0x6A5560
        static Vector2 xla(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6A55C0
        static ObscuredVector2 xlb(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6A5620
        static int32_t xlc();  // RVA: 0x68F130
        static bool xld(Vector2 a, Vector2 b);  // RVA: 0x6A5650
        static bool xle(float a, float b);  // RVA: 0x6A56A0
        RawEncryptedVector2 xlf(int32_t a);  // RVA: 0x6A5760
        void xlg(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6A57E0
        Vector2 xlh();  // RVA: 0x6A5890
        void wov();  // RVA: 0x6A4A80
        static bool xli(Vector2 a, int32_t b);  // RVA: 0x6A58A0
        void xlj(Vector2 a);  // RVA: 0x6A58B0
        Vector2 xlk();  // RVA: 0x6A5940
        bool xll();  // RVA: 0x6A43A0
        static void xlm(int32_t a);  // RVA: 0x630C10
        void xln();  // RVA: 0x630C10
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct RawEncryptedVector2Int
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t x; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t y; // 0x0014

    // Methods
    bool Equals(RawEncryptedVector2Int other);  // RVA: 0x6A9AB0
    bool Equals(Il2CppObject* obj);  // RVA: 0x6A9A20
    int32_t GetHashCode();  // RVA: 0x6A9AD0
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredVector2Int
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        RawEncryptedVector2Int hiddenValue; // 0x0014
        uint8_t pad_0015[0x7]; // 0x0015
        int32_t currentCryptoKey; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        Vector2Int fakeValue; // 0x0020
    
        // Methods
        static ObscuredVector2Int op_Implicit(Vector2Int value);  // RVA: 0x6A3520
        static Vector2Int op_Implicit(ObscuredVector2Int value);  // RVA: 0x6A35A0
        static Vector3Int op_Explicit(ObscuredVector2Int v);  // RVA: 0x6A34A0
        static Vector2 op_Implicit(ObscuredVector2Int value);  // RVA: 0x6A34F0
        static ObscuredVector2Int xlo(ObscuredVector2Int a);  // RVA: 0x6A36B0
        static ObscuredVector2Int xlp(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6A3720
        static ObscuredVector2Int xlq(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6A37B0
        static ObscuredVector2Int xlr(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6A3830
        static ObscuredVector2Int xls(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6A38C0
        static ObscuredVector2Int xlt(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6A3940
        static ObscuredVector2Int xlu(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6A39C0
        static ObscuredVector2Int xlv(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6A3A40
        static ObscuredVector2Int xlw(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6A3AD0
        static ObscuredVector2Int xlx(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6A3B50
        static ObscuredVector2Int xly(int32_t a, ObscuredVector2Int b);  // RVA: 0x6A3BD0
        static ObscuredVector2Int xlz(ObscuredVector2Int a, int32_t b);  // RVA: 0x6A3C50
        static ObscuredVector2Int xma(ObscuredVector2Int a, int32_t b);  // RVA: 0x6A3CD0
        static bool xmb(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6A3D50
        static bool xmc(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6A3DD0
        bool Equals(Il2CppObject* other);  // RVA: 0x6A2EA0
        bool Equals(ObscuredVector2Int other);  // RVA: 0x6A3020
        bool Equals(Vector2Int other);  // RVA: 0x6A2E60
        int32_t GetHashCode();  // RVA: 0x6A30B0
        Il2CppString* ToString();  // RVA: 0x6A3150
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x6A30E0
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(Vector2Int value);  // RVA: 0x6A3390
        void .ctor(int32_t x, int32_t y);  // RVA: 0x6A3300
        int32_t xmd();  // RVA: 0x6A3E60
        void xme(int32_t a);  // RVA: 0x6A3E70
        int32_t xmf();  // RVA: 0x6A3F10
        void xmg(int32_t a);  // RVA: 0x6A3F30
        int32_t get_Item(int32_t index);  // RVA: 0x6A3400
        void set_Item(int32_t index, int32_t value);  // RVA: 0x6A35B0
        static RawEncryptedVector2Int xmh(Vector2Int a, int32_t b);  // RVA: 0x6A3FD0
        static RawEncryptedVector2Int xmi(int32_t a, int32_t b, int32_t c);  // RVA: 0x6A3FF0
        static Vector2Int xmj(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6A4010
        static ObscuredVector2Int xmk(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6A4030
        static int32_t xml();  // RVA: 0x68F130
        RawEncryptedVector2Int xmm(int32_t a);  // RVA: 0x6A40A0
        void xmn(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6A4140
        Vector2Int xmo();  // RVA: 0x6A41A0
        void wov();  // RVA: 0x6A3650
        static bool xmp(Vector2Int a, int32_t b);  // RVA: 0x6A41B0
        void xmq(Vector2Int a);  // RVA: 0x6A41C0
        Vector2Int xmr();  // RVA: 0x6A4210
        bool xms();  // RVA: 0x6A43A0
        static void xmt(int32_t a);  // RVA: 0x630C10
        void xmu();  // RVA: 0x630C10
        static Vector2Int xmv(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6A43C0
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct RawEncryptedVector3
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t x; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t y; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t z; // 0x0018

    // Methods
    bool Equals(RawEncryptedVector3 other);  // RVA: 0x6A9B70
    bool Equals(Il2CppObject* obj);  // RVA: 0x6A9B90
    int32_t GetHashCode();  // RVA: 0x6A9C40
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredVector3
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        RawEncryptedVector3 hiddenValue; // 0x0014
        uint8_t pad_0015[0xB]; // 0x0015
        int32_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        Vector3 fakeValue; // 0x0024
    
        // Methods
        static ObscuredVector3 op_Implicit(Vector3 value);  // RVA: 0x6A80D0
        static Vector3 op_Implicit(ObscuredVector3 value);  // RVA: 0x6A8110
        static ObscuredVector3 xmw(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6A8250
        static ObscuredVector3 xmx(Vector3 a, ObscuredVector3 b);  // RVA: 0x6A8310
        static ObscuredVector3 xmy(ObscuredVector3 a, Vector3 b);  // RVA: 0x6A83B0
        static ObscuredVector3 xmz(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6A8460
        static ObscuredVector3 xna(Vector3 a, ObscuredVector3 b);  // RVA: 0x6A8520
        static ObscuredVector3 xnb(ObscuredVector3 a, Vector3 b);  // RVA: 0x6A85C0
        static ObscuredVector3 xnc(ObscuredVector3 a);  // RVA: 0x6A8670
        static ObscuredVector3 xnd(ObscuredVector3 a, float b);  // RVA: 0x6A86F0
        static ObscuredVector3 xne(float a, ObscuredVector3 b);  // RVA: 0x6A8780
        static ObscuredVector3 xnf(ObscuredVector3 a, float b);  // RVA: 0x6A8810
        static bool xng(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6A88A0
        static bool xnh(Vector3 a, ObscuredVector3 b);  // RVA: 0x6A8940
        static bool xni(ObscuredVector3 a, Vector3 b);  // RVA: 0x6A89B0
        static bool xnj(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6A8A30
        static bool xnk(Vector3 a, ObscuredVector3 b);  // RVA: 0x6A8AD0
        static bool xnl(ObscuredVector3 a, Vector3 b);  // RVA: 0x6A8B40
        bool Equals(Il2CppObject* other);  // RVA: 0x6A7B60
        bool Equals(ObscuredVector3 other);  // RVA: 0x6A7A70
        bool Equals(Vector3 other);  // RVA: 0x6A7CC0
        int32_t GetHashCode();  // RVA: 0x6A7D20
        Il2CppString* ToString();  // RVA: 0x6A7E80
        Il2CppString* xnm(Il2CppString* a);  // RVA: 0x6A8BB0
        void xnn();  // RVA: 0x6A8C00
        Vector3 xno();  // RVA: 0x6A8D80
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x6A7DA0
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(Vector3 value);  // RVA: 0x6A7F00
        void .ctor(float x, float y, float z);  // RVA: 0x6A7ED0
        float xnp();  // RVA: 0x6A8EB0
        void xnq(float a);  // RVA: 0x6A8ED0
        float xnr();  // RVA: 0x6A8F50
        void xns(float a);  // RVA: 0x6A8F70
        float xnt();  // RVA: 0x6A8FF0
        void xnu(float a);  // RVA: 0x6A9010
        float get_Item(int32_t index);  // RVA: 0x6A8000
        void set_Item(int32_t index, float value);  // RVA: 0x6A8140
        static RawEncryptedVector3 xnv(Vector3 a, int32_t b);  // RVA: 0x6A90A0
        static RawEncryptedVector3 xnw(float a, float b, float c, int32_t d);  // RVA: 0x6A9140
        static Vector3 xnx(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6A91E0
        static ObscuredVector3 xny(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6A9270
        static int32_t xnz();  // RVA: 0x68F130
        static bool xoa(Vector3 a, Vector3 b);  // RVA: 0x6A92B0
        static bool xob(float a, float b);  // RVA: 0x6A9320
        RawEncryptedVector3 xoc(int32_t a);  // RVA: 0x6A93E0
        void xod(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6A9490
        Vector3 xoe();  // RVA: 0x6A8110
        void wov();  // RVA: 0x6A81F0
        static bool xof(Vector3 a, int32_t b);  // RVA: 0x6A9590
        void xog(Vector3 a);  // RVA: 0x6A95C0
        Vector3 xoh();  // RVA: 0x6A9690
        bool xoi();  // RVA: 0x6A7A20
        static void xoj(int32_t a);  // RVA: 0x630C10
        void xok();  // RVA: 0x630C10
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct RawEncryptedVector3Int
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t x; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t y; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t z; // 0x0018

    // Methods
    bool Equals(RawEncryptedVector3Int other);  // RVA: 0x6A9B70
    bool Equals(Il2CppObject* obj);  // RVA: 0x6B0CD0
    int32_t GetHashCode();  // RVA: 0x6A9C40
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredVector3Int
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        RawEncryptedVector3Int hiddenValue; // 0x0014
        uint8_t pad_0015[0xB]; // 0x0015
        int32_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        Vector3Int fakeValue; // 0x0024
    
        // Methods
        static ObscuredVector3Int op_Implicit(Vector3Int value);  // RVA: 0x6A61C0
        static Vector3Int op_Implicit(ObscuredVector3Int value);  // RVA: 0x6A6200
        static Vector2Int xol(ObscuredVector3Int a);  // RVA: 0x6A6380
        static Vector3 op_Implicit(ObscuredVector3Int value);  // RVA: 0x6A6160
        static ObscuredVector3Int xom(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6A63C0
        static ObscuredVector3Int xon(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6A64D0
        static ObscuredVector3Int xoo(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6A65E0
        static ObscuredVector3Int xop(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6A66E0
        static ObscuredVector3Int xoq(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6A67F0
        static ObscuredVector3Int xor(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6A6900
        static ObscuredVector3Int xos(ObscuredVector3Int a, int32_t b);  // RVA: 0x6A6A00
        static ObscuredVector3Int xot(int32_t a, ObscuredVector3Int b);  // RVA: 0x6A6B10
        static ObscuredVector3Int xou(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6A6C20
        static ObscuredVector3Int xov(ObscuredVector3Int a, int32_t b);  // RVA: 0x6A6CD0
        static bool xow(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6A6D60
        static bool xox(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6A6DF0
        static bool xoy(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6A6E60
        static bool xoz(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6A6EC0
        static bool xpa(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6A6F50
        static bool xpb(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6A6FC0
        bool Equals(Il2CppObject* other);  // RVA: 0x6A5C40
        bool Equals(ObscuredVector3Int other);  // RVA: 0x6A5B60
        bool Equals(Vector3Int other);  // RVA: 0x6A5D90
        int32_t GetHashCode();  // RVA: 0x6A5E00
        Il2CppString* ToString();  // RVA: 0x6A5F30
        Il2CppString* xpc(Il2CppString* a);  // RVA: 0x6A7030
        void OnBeforeSerialize();  // RVA: 0x630C10
        void OnAfterDeserialize();  // RVA: 0x6A5EA0
        int32_t wou();  // RVA: 0x68C1F0
        void .ctor(Vector3Int value);  // RVA: 0x6A5F70
        void .ctor(int32_t x, int32_t y, int32_t z);  // RVA: 0x6A6040
        int32_t xpd();  // RVA: 0x6A7080
        void xpe(int32_t a);  // RVA: 0x6A70B0
        int32_t xpf();  // RVA: 0x6A71A0
        void xpg(int32_t a);  // RVA: 0x6A71D0
        int32_t xph();  // RVA: 0x6A72C0
        void xpi(int32_t a);  // RVA: 0x6A72E0
        int32_t get_Item(int32_t index);  // RVA: 0x6A6070
        void set_Item(int32_t index, int32_t value);  // RVA: 0x6A6230
        static RawEncryptedVector3Int xpj(Vector3Int a, int32_t b);  // RVA: 0x6A73D0
        static RawEncryptedVector3Int xpk(int32_t a, int32_t b, int32_t c, int32_t d);  // RVA: 0x6A7410
        static Vector3Int xpl(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6A7440
        static ObscuredVector3Int xpm(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6A7470
        static int32_t xpn();  // RVA: 0x68F130
        RawEncryptedVector3Int xpo(int32_t a);  // RVA: 0x6A7530
        void xpp(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6A7640
        Vector3Int xpq();  // RVA: 0x6A6200
        void wov();  // RVA: 0x6A62E0
        static bool xpr(Vector3Int a, int32_t b);  // RVA: 0x6A76F0
        void xps(Vector3Int a);  // RVA: 0x6A7720
        Vector3Int xpt();  // RVA: 0x6A77A0
        bool xpu();  // RVA: 0x6A7A20
        static void xpv(int32_t a);  // RVA: 0x630C10
        void xpw();  // RVA: 0x630C10
        static Vector3Int xpx(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6A7A50
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_0;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_1;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_2;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_3;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_4;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_5;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_6;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_7;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_8;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_9;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_10;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_11;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_12;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_13;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_14;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_15;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_16;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_17;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_18;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_19;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_20;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_21;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_22;


    // Methods
    static void .cctor();  // RVA: 0x6B6EF0
    void .ctor();  // RVA: 0x626570
    void xpy(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7040
    void xpz(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7130
    void xqa(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B71D0
    void xqb(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7260
    void xqc(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7300
    void xqd(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B73A0
    void xqe(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7460
    void xqf(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7520
    void xqg(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B75D0
    void xqh(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7670
    void xqi(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7730
    void xqj(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B77D0
    void xqk(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7870
    void xql(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7AC0
    void xqm(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7B50
    void xqn(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7BF0
    void xqo(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7C80
    void xqp(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7D20
    void xqq(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7DC0
    void xqr(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B7E60
    void xqs(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B8010
    void xqt(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B81B0
    void xqu(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6B83B0
};

namespace CodeStage.AntiCheat.ObscuredTypes.Converters
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes.Converters
    class ObscuredTypesNewtonsoftConverter : public JsonConverter
    {
    public:
        // Static fields
        // static Il2CppString* bmrz;
        // static Il2CppString* bmsa;
        // static Il2CppString* bmsb;
        // static Il2CppString* bmsc;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.HashSet<System.Type> bmsd; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.Dictionary<System.Type,System.Action<Newtonsoft.Json.JsonWriter,System.Object>> bmse; // 0x0018
    
        // Methods
        void WriteJson(JsonWriter* writer, Il2CppObject* value, JsonSerializer* serializer);  // RVA: 0x6AE590
        static void xqv(JsonWriter* a, Quaternion b);  // RVA: 0x6B02E0
        static void xqw(JsonWriter* a, Vector2 b);  // RVA: 0x6B0480
        static void xqx(JsonWriter* a, Vector2Int b);  // RVA: 0x6B0590
        static void xqy(JsonWriter* a, Vector3 b);  // RVA: 0x6B06A0
        static void xqz(JsonWriter* a, Vector3Int b);  // RVA: 0x6B0800
        Il2CppObject* ReadJson(JsonReader* reader, Type* objectType, Il2CppObject* existingValue, JsonSerializer* serializer);  // RVA: 0x6AC4C0
        bool CanConvert(Type* objectType);  // RVA: 0x6AC460
        void .ctor();  // RVA: 0x6AE870
        static void .cctor();  // RVA: 0x6AE730
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes.Converters

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<dby> <>9__13_0;


    // Methods
    static void .cctor();  // RVA: 0x6B6E80
    void .ctor();  // RVA: 0x626570
    int32_t xra(dby* a, dby* b);  // RVA: 0x6B85A0
};

// Namespace: <global>
class dbv
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmsf>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.IReadOnlyList<dby> <bmsg>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* <bmsh>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    double <bmsi>k__BackingField; // 0x0028

    // Methods
    Il2CppString* xrd();  // RVA: 0x638FA0
    void jxb();  // RVA: 0x6BDFB0
    bool dij(Il2CppString* a);  // RVA: 0x6BCBE0
    double xre();  // RVA: 0x6BE4E0
    bool ija(Il2CppString* a);  // RVA: 0x6BD3D0
    void .ctor(Il2CppString* a, dby[][] b);  // RVA: 0x6BC9F0
    void .ctor(Il2CppString* a, dby[][] b, Il2CppString* c);  // RVA: 0x6BCB70
    Il2CppString* xrb();  // RVA: 0x6B0BC0
    void xrf(double a);  // RVA: 0x6BE4F0
    void xrh();  // RVA: 0x6BE680
    bool ej(Il2CppString* a);  // RVA: 0x6BCD60
    void js();  // RVA: 0x6BDA80
    System.Collections.Generic.IReadOnlyList<dby> xrc();  // RVA: 0x67B9A0
    bool xrg(Il2CppString* a);  // RVA: 0x6BE500
    Il2CppString* xri(dby[][] a);  // RVA: 0x6BEBB0
    Il2CppString* gpx(dby[][] a);  // RVA: 0x6BD060
    bool eud(Il2CppString* a);  // RVA: 0x6BCEE0
    void jry();  // RVA: 0x6BD550
};

// Namespace: <global>
class dbw
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmsj; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmsk; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbx* bmsl; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x668880
    void xrj();  // RVA: 0x630C10
    bool MoveNext();  // RVA: 0x6BEF20
    Il2CppObject* xrk();  // RVA: 0x67B9A0
    void xrl();  // RVA: 0x6BF020
    Il2CppObject* xrm();  // RVA: 0x67B9A0
};

// Namespace: <global>
struct <GenerateInternalAsync>d__20
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<dcc> <>t__builder; // 0x0018
    uint8_t pad_0019[0x17]; // 0x0019
    dbx* <>4__this; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t maxThreads; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Runtime.CompilerServices.TaskAwaiter<System.Boolean> <>u__1; // 0x0040

    // Methods
    void MoveNext();  // RVA: 0x6B57F0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6B5A90
};

// Namespace: <global>
class dbx : public dcx`1
{
public:
    // Static fields
    // static int32_t bmsm;
    // static HashGeneratorResultHandler* bmsn;

    uint8_t pad_0000[0x30]; // 0x0000
    dcc* <bmso>k__BackingField; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    WaitForSeconds* bmsp; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    dcf* bmsq; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    SemaphoreSlim* bmsr; // 0x0048

    // Methods
    void OnDestroy();  // RVA: 0x6BF060
    static dcd* dva(int32_t a);  // RVA: 0x6BF360
    static dcd* ccf(int32_t a);  // RVA: 0x6BF310
    dcd* xrz(int32_t a);  // RVA: 0x6BF930
    static dcd* xrs();  // RVA: 0x6BF690
    System.Threading.Tasks.Task<dcc> xrx(int32_t a);  // RVA: 0x6BF7D0
    static dcd* xrt(int32_t a);  // RVA: 0x6BF6C0
    void xrq(dcc* a);  // RVA: 0x6BF680
    static dcd* emg(int32_t a);  // RVA: 0x6BF400
    bool xrv();  // RVA: 0x6BF760
    static System.Threading.Tasks.Task<dcc> eey(int32_t a);  // RVA: 0x6BF3B0
    IEnumerator* xsa();  // RVA: 0x6BFAF0
    System.Threading.Tasks.Task<dcc> xry(int32_t a);  // RVA: 0x6BF820
    static System.Threading.Tasks.Task<dcc> xru(int32_t a);  // RVA: 0x6BF710
    static void xrn(HashGeneratorResultHandler* a);  // RVA: 0x6BF4F0
    void .ctor();  // RVA: 0x6BF0D0
    static bool nmd();  // RVA: 0x660F00
    static bool xrr();  // RVA: 0x660F00
    static dcd* koz(int32_t a);  // RVA: 0x6BF4A0
    static bool fes();  // RVA: 0x660F00
    dcd* blk(int32_t a);  // RVA: 0x6BF150
    static void xro(HashGeneratorResultHandler* a);  // RVA: 0x6BF5B0
    static System.Threading.Tasks.Task<dcc> jwl(int32_t a);  // RVA: 0x6BF450
    dcc* xrp();  // RVA: 0x6BF670
    dcd* xrw(int32_t a);  // RVA: 0x6BF780
};

// Namespace: <global>
class dby
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmss>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* <bmst>k__BackingField; // 0x0018

    // Methods
    Il2CppString* xsb();  // RVA: 0x6B0BC0
    Il2CppString* xsc();  // RVA: 0x67B9A0
    void .ctor(Il2CppString* a, Stream* b, dax<dce> c);  // RVA: 0x6BFBD0
    void .ctor(Il2CppString* a, Il2CppString* b);  // RVA: 0x6BFCD0
    Il2CppString* ToString();  // RVA: 0x6BFB60
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> <>9__2_0;


    // Methods
    static void .cctor();  // RVA: 0x6B6FD0
    void .ctor();  // RVA: 0x626570
    void xsd(FilesProgress a);  // RVA: 0x630C10
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    struct FilesProgress
    {
    public:
    
        // Methods
        static FilesProgress xse(float a, Il2CppString* b);  // RVA: 0x626FB0
        static FilesProgress None();  // RVA: 0x626FB0
        static System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> xsf(Il2CppString* a);  // RVA: 0x6AB0A0
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dbz
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool bmsu; // 0x0010
    bool bmsv; // 0x0011
    bool bmsw; // 0x0012
    bool bmsx; // 0x0013
    uint8_t pad_0014[0x4]; // 0x0014
    Il2CppString* bmsy; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* bmsz; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bmta; // 0x0028

    // Methods
    Il2CppString* ToString();  // RVA: 0x6BFD20
    bool cee(Il2CppString* a);  // RVA: 0x6BFF60
    bool xsg(Il2CppString* a);  // RVA: 0x6C0260
    void .ctor();  // RVA: 0x626570
    static bool xsh(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6C0560
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    struct FilterGroup
    {
    public:
        // Static fields
        // static FilterGroup Code;
        // static FilterGroup Content;
        // static FilterGroup All;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dca
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dbz[][] <bmtb>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    dbz[][] <bmtc>k__BackingField; // 0x0018

    // Methods
    bool xsl(Il2CppString* a);  // RVA: 0x6C0630
    bool cdp(Il2CppString* a);  // RVA: 0x6C0630
    dbz[][] xsi();  // RVA: 0x6B0BC0
    void .ctor(dbz[][] a, dbz[][] b);  // RVA: 0x6BFCD0
    bool oay(Il2CppString* a, dbz[][] b);  // RVA: 0x6C0740
    bool xsn(Il2CppString* a, dbz[][] b);  // RVA: 0x6C0740
    dca* xsm(dca* a);  // RVA: 0x6C07C0
    bool jnr(Il2CppString* a);  // RVA: 0x6C0630
    dbz[][] xsj();  // RVA: 0x67B9A0
    bool kcn(Il2CppString* a, dbz[][] b);  // RVA: 0x6C0740
    bool fpa(Il2CppString* a);  // RVA: 0x6C06C0
    bool hrn(Il2CppString* a);  // RVA: 0x6C0630
    bool fhb(Il2CppString* a);  // RVA: 0x6C0630
    bool xsk(Il2CppString* a);  // RVA: 0x6C06C0
    bool kmq(Il2CppString* a);  // RVA: 0x6C06C0
    a[][] xso(a[][] a, a[][] b);  // RVA: 0x42BCF0
    bool huc(Il2CppString* a);  // RVA: 0x6C06C0
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    class FilteringSettings : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        FilterGroup <DefaultGroup>k__BackingField; // 0x0018
    
        // Methods
        FilterGroup get_DefaultGroup();  // RVA: 0x6AB1D0
        void set_DefaultGroup(FilterGroup value);  // RVA: 0x6AB1E0
        void .ctor();  // RVA: 0x6AB1C0
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dcb
{
public:

    // Methods
    static dca* dfx(bool a);  // RVA: 0x6C0C50
    static dca* eng(bool a);  // RVA: 0x6C0FC0
    static dca* xsr(bool a);  // RVA: 0x6C1C90
    static dca* xsw(bool a);  // RVA: 0x6C2690
    static dca* fvw(bool a);  // RVA: 0x6C12B0
    static dca* xsu(bool a);  // RVA: 0x6C12B0
    static dca* xsv(bool a);  // RVA: 0x6C2310
    static dca* xsx(bool a);  // RVA: 0x6C0F70
    static dca* gek(bool a);  // RVA: 0x6C12B0
    static dca* lxw(bool a);  // RVA: 0x6C1870
    static dca* brt(bool a);  // RVA: 0x6C0890
    static FilteringSettings* ciz();  // RVA: 0x6C0AE0
    static dca* xss(bool a);  // RVA: 0x6C1DD0
    static dca* epc(bool a);  // RVA: 0x6C12B0
    static FilteringSettings* lsf();  // RVA: 0x6C1840
    static dca* ebe(bool a);  // RVA: 0x6C0F70
    static FilteringSettings* xsp();  // RVA: 0x6C1B20
    static dca* cuv(bool a);  // RVA: 0x6C0B10
    static dca* xsq(bool a);  // RVA: 0x6C1B50
    static dca* gyq(bool a);  // RVA: 0x6C1300
    static dca* mhc(bool a);  // RVA: 0x6C12B0
    static dca* xst(bool a);  // RVA: 0x6C20C0
    static FilteringSettings* doe();  // RVA: 0x6C0F40
    static dca* hfv(bool a);  // RVA: 0x6C1550
    static dca* ogr(bool a);  // RVA: 0x6C19E0
    static FilteringSettings* noo();  // RVA: 0x6C19B0
};

// Namespace: <global>
class dcc
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmtd>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* bmte; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbv* bmtf; // 0x0020

    // Methods
    System.Collections.Generic.IReadOnlyList<dby> xta();  // RVA: 0x6C2C40
    static dcc* xtf(Il2CppString* a);  // RVA: 0x6C2CA0
    void xtc(Il2CppString* a);  // RVA: 0x6C2C60
    Il2CppString* xtb();  // RVA: 0x6B0BC0
    bool xtd();  // RVA: 0x6C2C70
    void boh();  // RVA: 0x6C2980
    Il2CppString* xsy();  // RVA: 0x6C2C20
    void nvv();  // RVA: 0x6C2B40
    static dcc* gbm(dbv* a);  // RVA: 0x6C29F0
    double xte();  // RVA: 0x6C2C80
    bool xth(Il2CppString* a);  // RVA: 0x6C2D80
    static dcc* mzj(dbv* a);  // RVA: 0x6C2AD0
    Il2CppString* xsz();  // RVA: 0x6C2C20
    void xti();  // RVA: 0x6C2DA0
    static dcc* koz(Il2CppString* a);  // RVA: 0x6C2A60
    void .ctor();  // RVA: 0x626570
    static dcc* xtg(dbv* a);  // RVA: 0x6C2D10
    void odx();  // RVA: 0x6C2BB0
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    class HashGeneratorResultHandler : public MulticastDelegate
    {
    public:
    
        // Methods
        void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6AB1F0
        void Invoke(dcc* result);  // RVA: 0x65BCB0
        IAsyncResult* BeginInvoke(dcc* result, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x65BDE0
        void EndInvoke(IAsyncResult* result);  // RVA: 0x65BCA0
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dcd
{
public:

    // Methods
    dcc* xrp();  // RVA: 0x41AE30
    bool xrv();  // RVA: 0x420210
    dcd* xtj(int32_t a);  // RVA: 0x41B510
    System.Threading.Tasks.Task<dcc> xtk(int32_t a);  // RVA: 0x41B510
};

// Namespace: <global>
class dce
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SHA1Managed* bmtg; // 0x0010

    // Methods
    Byte[][] xtl(Stream* a);  // RVA: 0x6C2EA0
    Byte[][] bir(Stream* a);  // RVA: 0x6C2EA0
    void Dispose();  // RVA: 0x6C2E10
    Byte[][] xtm(Byte[][] a);  // RVA: 0x6C2EC0
    Byte[][] nvh(Byte[][] a);  // RVA: 0x6C2EC0
    Byte[][] hz(Stream* a);  // RVA: 0x6C2EA0
    Byte[][] mo(Byte[][] a);  // RVA: 0x6C2EC0
    Byte[][] gvp(Stream* a);  // RVA: 0x6C2EA0
    void .ctor();  // RVA: 0x6C2E30
};

// Namespace: <global>
class dcf
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dcc* <bmth>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool <bmti>k__BackingField; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t bmtj; // 0x001C

    // Methods
    dcc* xtn();  // RVA: 0x6B0BC0
    void xto(dcc* a);  // RVA: 0x6C2C60
    bool xtp();  // RVA: 0x6C2F20
    void xtq(bool a);  // RVA: 0x6C2F30
    void .ctor(int32_t a);  // RVA: 0x6C2EF0
    void Execute();  // RVA: 0x6C2EE0
    void xtr(dcc* a);  // RVA: 0x6C2F40
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<dce> <>9__1_0;


    // Methods
    static void .cctor();  // RVA: 0x6B6F60
    void .ctor();  // RVA: 0x626570
    dce* xts();  // RVA: 0x6B85E0
};

// Namespace: <global>
class dcg
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dca* bmtk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Concurrent.ConcurrentBag<dby> bmtl; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dax<dce> bmtm; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bmtn; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t bmto; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> bmtp; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t bmtq; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t bmtr; // 0x0044

    // Methods
    void ggw(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6C2F60
    void hcx(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6C3490
    void .ctor();  // RVA: 0x626570
    void nlz(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6C3EF0
    void kqn(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6C39C0
    void xtt(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6C4420
};

// Namespace: <global>
class dch
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dci* bmts; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* bmtt; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dca* bmtu; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x626570
    void nn();  // RVA: 0x6C4950
    void kzy();  // RVA: 0x6C4950
    void xtu();  // RVA: 0x6C4950
    void jji();  // RVA: 0x6C4950
};

// Namespace: <global>
class dci : public dcf
{
public:
    // Static fields
    // static Il2CppObject* bmtv;


    // Methods
    void .ctor(int32_t a);  // RVA: 0x6C2EF0
    static dbv* xtv(Il2CppString* a, dca* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6C4D50
    static void .cctor();  // RVA: 0x6C4CD0
    void xtw(Il2CppString* a, dca* b);  // RVA: 0x6C5380
    void Execute();  // RVA: 0x6C4980
};

namespace CodeStage.AntiCheat.Genuine.Android
{

    // Namespace: CodeStage.AntiCheat.Genuine.Android
    struct AndroidAppSource
    {
    public:
        // Static fields
        // static AndroidAppSource PackageInstaller;
        // static AndroidAppSource GooglePlayStore;
        // static AndroidAppSource AmazonAppStore;
        // static AndroidAppSource HuaweiAppGallery;
        // static AndroidAppSource SamsungGalaxyStore;
        // static AndroidAppSource Other;
        // static AndroidAppSource AccessError;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

} // namespace CodeStage.AntiCheat.Genuine.Android

// Namespace: <global>
class dcj
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmtw>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    AndroidAppSource <bmtx>k__BackingField; // 0x0018

    // Methods
    AndroidAppSource gxl(Il2CppString* a);  // RVA: 0x6C5890
    AndroidAppSource opt(Il2CppString* a);  // RVA: 0x6C5A30
    AndroidAppSource xty();  // RVA: 0x6AB1D0
    AndroidAppSource xtz(Il2CppString* a);  // RVA: 0x6C5BD0
    Il2CppString* xtx();  // RVA: 0x6B0BC0
    void .ctor(Il2CppString* a);  // RVA: 0x6C5510
    AndroidAppSource der(Il2CppString* a);  // RVA: 0x6C56F0
};

// Namespace: <global>
class dck
{
public:

    // Methods
    static bool xub();  // RVA: 0x6C5D70
    static dcj* xua();  // RVA: 0x6C5DA0
    static bool ipc();  // RVA: 0x6C5D70
    static bool oiw();  // RVA: 0x6C5D70
    static bool ghk();  // RVA: 0x6C5D70
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class ACTkDetectorBase`1 : public dcx`1
    {
    public:
        // Static fields
        // static Il2CppString* bmty;
    
        bool autoStart; // 0x0000
        bool autoDispose; // 0x0000
        Action* bmtz; // 0x0000
        bool <bmua>k__BackingField; // 0x0000
        UnityEvent* detectionEvent; // 0x0000
        bool detectionEventHasListener; // 0x0000
        bool <bmub>k__BackingField; // 0x0000
        bool <bmuc>k__BackingField; // 0x0000
        dcl* <bmud>k__BackingField; // 0x0000
    
        // Methods
        void xuc(Action* a);  // RVA: 0x417510
        void xud(Action* a);  // RVA: 0x417510
        bool xue();  // RVA: 0x420210
        void xuf(bool a);  // RVA: 0x41C260
        bool xug();  // RVA: 0x420210
        void xuh(bool a);  // RVA: 0x41C260
        bool xui();  // RVA: 0x420210
        void xuj(bool a);  // RVA: 0x41C260
        dcl* xuk();  // RVA: 0x41AE30
        void xul(dcl* a);  // RVA: 0x417510
        void Start();  // RVA: 0x42D760
        void OnEnable();  // RVA: 0x42D760
        void OnDisable();  // RVA: 0x42D760
        void OnApplicationQuit();  // RVA: 0x42D760
        void OnDestroy();  // RVA: 0x42D760
        void xum(dcl* a);  // RVA: 0x417510
        void xun();  // RVA: 0x42D760
        bool xuo();  // RVA: 0x420210
        void xup();  // RVA: 0x42D760
        void xuq();  // RVA: 0x42D760
        bool xur();  // RVA: 0x420210
        bool xus();  // RVA: 0x420210
        void xut();  // RVA: 0x42D760
        void .ctor();  // RVA: 0x42D760
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcl
{
public:

    // Methods
    Il2CppString* xuu();  // RVA: 0x41AE30
};

// Namespace: <global>
class dcm
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmue>k__BackingField; // 0x0010

    // Methods
    Il2CppString* xuv();  // RVA: 0x6B0BC0
    void .ctor(Il2CppString* a);  // RVA: 0x6C5E80
    Il2CppString* xuu();  // RVA: 0x6C5E20
    Il2CppString* ToString();  // RVA: 0x6C5E20
};

// Namespace: <global>
class InjectionDetectedEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6AB320
    void Invoke(Il2CppString* reason);  // RVA: 0x65BCB0
    IAsyncResult* BeginInvoke(Il2CppString* reason, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x65BDE0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x65BCA0
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class InjectionDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmuf;
    
    
        // Methods
        dcm* xuw();  // RVA: 0x6AB4A0
        static InjectionDetector* xux();  // RVA: 0x6AB520
        static void xuy();  // RVA: 0x6AB5A0
        static void xuz(System.Action<System.String> a);  // RVA: 0x6AB620
        static void xva();  // RVA: 0x6AB6A0
        static void xvb();  // RVA: 0x6AB720
        void xut();  // RVA: 0x6AB420
        void .ctor();  // RVA: 0x6AB3E0
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcn
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Type* <bmug>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool <bmuh>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppObject* <bmui>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppObject* <bmuj>k__BackingField; // 0x0028

    // Methods
    Type* xvc();  // RVA: 0x6B0BC0
    bool xvd();  // RVA: 0x6C2F20
    Il2CppObject* xve();  // RVA: 0x638FA0
    Il2CppObject* xvf();  // RVA: 0x66AE70
    void .ctor(Type* a, bool b, Il2CppObject* c, Il2CppObject* d);  // RVA: 0x6C5FC0
    Il2CppString* xuu();  // RVA: 0x6C5EC0
    Il2CppString* ToString();  // RVA: 0x6C5EC0
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class ObscuredCheatingDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmuk;
    
        uint8_t pad_0000[0x60]; // 0x0000
        bool honeyPot; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        double doubleEpsilon; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        float floatEpsilon; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float vector2Epsilon; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float vector3Epsilon; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float quaternionEpsilon; // 0x007C
    
        // Methods
        dcn* xvg();  // RVA: 0x6AB820
        static ObscuredCheatingDetector* xvh();  // RVA: 0x6AB8A0
        static ObscuredCheatingDetector* xvi();  // RVA: 0x6AB8D0
        static ObscuredCheatingDetector* xvj(Action* a);  // RVA: 0x6ABA20
        static void xvk();  // RVA: 0x6ABA70
        static void xvl();  // RVA: 0x6ABB80
        static bool xvm();  // RVA: 0x6ABC90
        static bool xvn();  // RVA: 0x6ABD90
        void .ctor();  // RVA: 0x6AB7A0
        void xvo();  // RVA: 0x6ABF00
        void xvp(dbt* a, Il2CppObject* b, Il2CppObject* c);  // RVA: 0x6AC090
        void xvq(dbt* a, bool b, Il2CppObject* c, Il2CppObject* d);  // RVA: 0x6AC170
        ObscuredCheatingDetector* xvr(Action* a);  // RVA: 0x6AC260
        void xut();  // RVA: 0x6AB810
        static void xvs(b a, bool b, c c, bool d, a e, d f);  // RVA: 0x562180
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dco
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool <bmul>k__BackingField; // 0x0010
    bool <bmum>k__BackingField; // 0x0011
    bool <bmun>k__BackingField; // 0x0012
    bool <bmuo>k__BackingField; // 0x0013
    bool <bmup>k__BackingField; // 0x0014

    // Methods
    bool xvt();  // RVA: 0x65C890
    bool xvu();  // RVA: 0x669470
    bool xvv();  // RVA: 0x6C6250
    bool xvw();  // RVA: 0x6C6260
    bool xvx();  // RVA: 0x6C6270
    void .ctor(bool a, bool b, bool c, bool d, bool e);  // RVA: 0x6C6050
    Il2CppString* xuu();  // RVA: 0x6C60B0
    Il2CppString* ToString();  // RVA: 0x6C6040
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class SpeedHackDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmuq;
    
        uint8_t pad_0000[0x60]; // 0x0000
        float interval; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float threshold; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        uint8_t maxFalsePositives; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        int32_t coolDown; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        int32_t <TimeJumpThreshold>k__BackingField; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        bool <UseDsp>k__BackingField; // 0x0074
        bool <WatchTimeScale>k__BackingField; // 0x0075
        uint8_t bmur; // 0x0076
        uint8_t pad_0077[0x1]; // 0x0077
        int32_t bmus; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        int64_t bmut; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        int64_t bmuu; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        int64_t bmuv; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        int64_t bmuw; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        bool bmux; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float bmuy; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        bool bmuz; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        double bmva; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        bool bmvb; // 0x00B8
    
        // Methods
        dco* xvy();  // RVA: 0x6B1320
        int32_t get_TimeJumpThreshold();  // RVA: 0x6B1230
        void set_TimeJumpThreshold(int32_t value);  // RVA: 0x6B1260
        bool get_UseDsp();  // RVA: 0x6B1240
        void set_UseDsp(bool value);  // RVA: 0x6B1270
        bool get_WatchTimeScale();  // RVA: 0x6B1250
        void set_WatchTimeScale(bool value);  // RVA: 0x6B1280
        static SpeedHackDetector* xvz();  // RVA: 0x6B13A0
        static SpeedHackDetector* xwa();  // RVA: 0x6B13D0
        static SpeedHackDetector* xwb(Action* a);  // RVA: 0x6B1640
        static SpeedHackDetector* xwc(Action* a, float b);  // RVA: 0x6B1760
        static SpeedHackDetector* xwd(Action* a, float b, uint8_t c);  // RVA: 0x6B1850
        static SpeedHackDetector* xwe(Action* a, float b, uint8_t c, int32_t d);  // RVA: 0x6B1910
        static void xwf();  // RVA: 0x6B19A0
        static void xwg();  // RVA: 0x6B1AB0
        static void xwh(float a);  // RVA: 0x6B1BC0
        static void xwi(float a);  // RVA: 0x6B1D20
        static void xwj();  // RVA: 0x6B1E60
        static void xwk();  // RVA: 0x6B1F90
        void xwl();  // RVA: 0x6B20B0
        void .ctor();  // RVA: 0x6B11B0
        void OnApplicationPause(bool pause);  // RVA: 0x6B0D80
        void Update();  // RVA: 0x6B0E10
        SpeedHackDetector* xwm(Action* a, float b, uint8_t c, int32_t d);  // RVA: 0x6B21A0
        void xut();  // RVA: 0x6B12F0
        void xup();  // RVA: 0x6B1290
        bool xwn(int64_t a, int64_t b, int64_t c);  // RVA: 0x6B2410
        void xwo(float a);  // RVA: 0x6B24D0
        bool xwp();  // RVA: 0x6B2520
        void xwq(float a);  // RVA: 0x6B25C0
        void xwr();  // RVA: 0x6B2600
        void xws();  // RVA: 0x6B2620
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcp
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CheckResult <bmvc>k__BackingField; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    ErrorKind <bmvd>k__BackingField; // 0x0014

    // Methods
    CheckResult xwt();  // RVA: 0x65BB20
    ErrorKind xwu();  // RVA: 0x6C63D0
    void .ctor(CheckResult a, ErrorKind b);  // RVA: 0x6C6390
    Il2CppString* xuu();  // RVA: 0x6C6280
    Il2CppString* ToString();  // RVA: 0x6C6280
};

// Namespace: <global>
class OnlineTimeCallback : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6B0A10
    void Invoke(OnlineTimeResult result);  // RVA: 0x6B09D0
    IAsyncResult* BeginInvoke(OnlineTimeResult result, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6B0950
    void EndInvoke(IAsyncResult* result);  // RVA: 0x65BCA0
};

// Namespace: <global>
class TimeCheatingDetectorEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6B2720
    void Invoke(CheckResult result, ErrorKind error);  // RVA: 0x6B2710
    IAsyncResult* BeginInvoke(CheckResult result, ErrorKind error, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6B2670
    void EndInvoke(IAsyncResult* result);  // RVA: 0x65BCA0
};

// Namespace: <global>
struct OnlineTimeResult
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* error; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int64_t errorResponseCode; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    double onlineSecondsUtc; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DateTime onlineDateTimeUtc; // 0x0030

    // Methods
    bool xwv();  // RVA: 0x65BFE0
    Il2CppString* xww();  // RVA: 0x65BFF0
    int64_t xwx();  // RVA: 0x6B0BC0
    double xwy();  // RVA: 0x6B0BD0
    DateTime xwz();  // RVA: 0x638FA0
    OnlineTimeResult xxa(double a, DateTime b);  // RVA: 0x6B0BE0
    OnlineTimeResult xxb(Il2CppString* a, int64_t b);  // RVA: 0x6B0C60
    Il2CppString* ToString();  // RVA: 0x6B0AC0
};

// Namespace: <global>
struct CheckResult
{
public:
    // Static fields
    // static CheckResult Unknown;
    // static CheckResult CheckPassed;
    // static CheckResult WrongTimeDetected;
    // static CheckResult CheatDetected;
    // static CheckResult Error;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ErrorKind
{
public:
    // Static fields
    // static ErrorKind NoError;
    // static ErrorKind IncorrectUri;
    // static ErrorKind OnlineTimeError;
    // static ErrorKind NotStarted;
    // static ErrorKind AlreadyCheckingForCheat;
    // static ErrorKind Unknown;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct RequestMethod
{
public:
    // Static fields
    // static RequestMethod Head;
    // static RequestMethod Get;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class dcq
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmve; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmvf; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TimeCheatingDetector* bmvg; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x668880
    void xxc();  // RVA: 0x630C10
    bool MoveNext();  // RVA: 0x6C63E0
    Il2CppObject* xxd();  // RVA: 0x67B9A0
    void xxe();  // RVA: 0x6C6800
    Il2CppObject* xxf();  // RVA: 0x67B9A0
};

// Namespace: <global>
struct <ForceCheckAwaitable>d__77
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    UnityEngine.Awaitable.AwaitableAsyncMethodBuilder<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> <>t__builder; // 0x0018
    uint8_t pad_0019[0xF]; // 0x0019
    TimeCheatingDetector* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Awaiter <>u__1; // 0x0030

    // Methods
    void MoveNext();  // RVA: 0x6B51B0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6B5440
};

// Namespace: <global>
class dcr
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmvh; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmvi; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TimeCheatingDetector* bmvj; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x668880
    void xxg();  // RVA: 0x630C10
    bool MoveNext();  // RVA: 0x6C6840
    Il2CppObject* xxh();  // RVA: 0x67B9A0
    void xxi();  // RVA: 0x6C6950
    Il2CppObject* xxj();  // RVA: 0x67B9A0
};

// Namespace: <global>
struct <ForceCheckTask>d__76
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> <>t__builder; // 0x0018
    uint8_t pad_0019[0x17]; // 0x0019
    TimeCheatingDetector* <>4__this; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    TaskAwaiter <>u__1; // 0x0038

    // Methods
    void MoveNext();  // RVA: 0x6B5470
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6B5780
};

// Namespace: <global>
struct <GetOnlineTimeAwaitable>d__67
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    UnityEngine.Awaitable.AwaitableAsyncMethodBuilder<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> <>t__builder; // 0x0018
    uint8_t pad_0019[0xF]; // 0x0019
    CancellationToken cancellationToken; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Uri* uri; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    RequestMethod method; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    OnlineTimeResult <result>5__2; // 0x0040
    uint8_t pad_0041[0x27]; // 0x0041
    Awaiter <>u__1; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    UnityWebRequest* <wr>5__3; // 0x0070

    // Methods
    void MoveNext();  // RVA: 0x6B5B00
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6B63F0
};

// Namespace: <global>
class dcs
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmvk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmvl; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* bmvm; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    OnlineTimeCallback* bmvn; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RequestMethod bmvo; // 0x0030

    // Methods
    void .ctor(int32_t a);  // RVA: 0x668880
    void xxk();  // RVA: 0x630C10
    bool MoveNext();  // RVA: 0x6C6990
    Il2CppObject* xxl();  // RVA: 0x67B9A0
    void xxm();  // RVA: 0x6C6A40
    Il2CppObject* xxn();  // RVA: 0x67B9A0
};

// Namespace: <global>
class dct
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmvp; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmvq; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Uri* bmvr; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RequestMethod bmvs; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    OnlineTimeCallback* bmvt; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    OnlineTimeResult bmvu; // 0x0038
    uint8_t pad_0039[0x27]; // 0x0039
    UnityWebRequest* bmvv; // 0x0060

    // Methods
    Il2CppObject* xxs();  // RVA: 0x67B9A0
    void .ctor(int32_t a);  // RVA: 0x668880
    bool MoveNext();  // RVA: 0x6C6A80
    Il2CppObject* xxq();  // RVA: 0x67B9A0
    void xxp();  // RVA: 0x6C6EA0
    void itt();  // RVA: 0x6C6DC0
    void xxo();  // RVA: 0x6C6E10
    void xxr();  // RVA: 0x6C6EF0
};

// Namespace: <global>
struct <GetOnlineTimeTask>d__63
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> <>t__builder; // 0x0018
    uint8_t pad_0019[0x17]; // 0x0019
    CancellationToken cancellationToken; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Uri* uri; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    RequestMethod method; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    OnlineTimeResult <result>5__2; // 0x0048
    uint8_t pad_0049[0x27]; // 0x0049
    TaskAwaiter <>u__1; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    UnityWebRequest* <wr>5__3; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    UnityWebRequestAsyncOperation* <asyncOperation>5__4; // 0x0080

    // Methods
    void MoveNext();  // RVA: 0x6B6420
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6B6E10
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class TimeCheatingDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmvw;
        // static int32_t bmvx;
        // static WaitForEndOfFrame* bmvy;
        // static System.Lazy<das> <bmvz>k__BackingField;
        // static bool bmwa;
    
        uint8_t pad_0000[0x60]; // 0x0000
        TimeCheatingDetectorEventHandler* bmwb; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Il2CppString* requestUrl; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        RequestMethod requestMethod; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        int32_t timeoutSeconds; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float interval; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        int32_t realCheatThreshold; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        int32_t wrongTimeThreshold; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        bool ignoreSetCorrectTime; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        ErrorKind <bmwc>k__BackingField; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        CheckResult <bmwd>k__BackingField; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        OnlineTimeResult <bmwe>k__BackingField; // 0x0090
        uint8_t pad_0091[0x27]; // 0x0091
        bool <bmwf>k__BackingField; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Il2CppString* bmwg; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Uri* bmwh; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        TimeCheatingDetectorEventHandler* bmwi; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        float bmwj; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        bool bmwk; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        double bmwl; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> bmwm; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Action* bmwn; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        int32_t threshold; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Il2CppString* timeServer; // 0x0100
    
        // Methods
        dcp* xxt();  // RVA: 0x6B2C90
        static System.Lazy<das> xxu();  // RVA: 0x6B2D10
        void xxv(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6B2D60
        void xxw(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6B2E00
        Il2CppString* xxx();  // RVA: 0x6B2EA0
        void xxy(Il2CppString* a);  // RVA: 0x6B2EB0
        ErrorKind xxz();  // RVA: 0x6B2F70
        void xya(ErrorKind a);  // RVA: 0x6B2F80
        CheckResult xyb();  // RVA: 0x6B2F90
        void xyc(CheckResult a);  // RVA: 0x6B2FA0
        OnlineTimeResult xyd();  // RVA: 0x6B2FB0
        void xye(OnlineTimeResult a);  // RVA: 0x6B2FE0
        bool xyf();  // RVA: 0x6B3010
        void xyg(bool a);  // RVA: 0x6B3020
        void OnApplicationPause(bool pauseStatus);  // RVA: 0x6B27D0
        void Update();  // RVA: 0x6B2850
        static TimeCheatingDetector* xyh();  // RVA: 0x6B3030
        static TimeCheatingDetector* xyi(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6B3060
        static TimeCheatingDetector* xyj(float a, TimeCheatingDetectorEventHandler* b);  // RVA: 0x6B3250
        static void xyk();  // RVA: 0x6B32B0
        static void xyl();  // RVA: 0x6B33C0
        static IEnumerator* xym(Il2CppString* a, OnlineTimeCallback* b, RequestMethod c);  // RVA: 0x6B34D0
        static IEnumerator* xyn(Uri* a, OnlineTimeCallback* b, RequestMethod c);  // RVA: 0x6B3570
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyo(Il2CppString* a, RequestMethod b);  // RVA: 0x6B3610
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyp(Il2CppString* a, CancellationToken b, RequestMethod c);  // RVA: 0x6B36E0
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyq(Uri* a, RequestMethod b);  // RVA: 0x6B3760
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyr(Uri* a, CancellationToken b, RequestMethod c);  // RVA: 0x6B37F0
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xys(Il2CppString* a, RequestMethod b);  // RVA: 0x6B3940
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyt(Il2CppString* a, CancellationToken b, RequestMethod c);  // RVA: 0x6B3A10
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyu(Uri* a, RequestMethod b);  // RVA: 0x6B3A90
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyv(Uri* a, CancellationToken b, RequestMethod c);  // RVA: 0x6B3B20
        static das* xyw();  // RVA: 0x6B3C30
        static UnityWebRequest* xyx(Uri* a, RequestMethod b);  // RVA: 0x6B3C80
        static void xyy(UnityWebRequest* a, OnlineTimeResult b);  // RVA: 0x6B3EC0
        static Uri* xyz(Il2CppString* a);  // RVA: 0x6B4190
        static bool xza(Il2CppString* a, DateTime b);  // RVA: 0x6B4260
        void xzb();  // RVA: 0x6B45D0
        bool xzc();  // RVA: 0x6B4680
        IEnumerator* xzd();  // RVA: 0x6B4710
        System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> xze();  // RVA: 0x6B4780
        UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> xzf();  // RVA: 0x6B4870
        bool xzg();  // RVA: 0x6B4930
        TimeCheatingDetector* xzh(float a, TimeCheatingDetectorEventHandler* b);  // RVA: 0x6B4A60
        bool xzi(TimeCheatingDetector* a);  // RVA: 0x6B4BB0
        void xut();  // RVA: 0x6B2C80
        bool xuo();  // RVA: 0x6B2B60
        void xuq();  // RVA: 0x6B2C30
        void xup();  // RVA: 0x6B2BC0
        IEnumerator* xzj();  // RVA: 0x6B4C80
        void xzk();  // RVA: 0x6B4CF0
        void xzl(OnlineTimeResult a);  // RVA: 0x6B4E30
        void xzm(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x6B4EC0
        void xzn(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x6B4F80
        void xzo(Action* a);  // RVA: 0x6B5040
        void xzp(Action* a);  // RVA: 0x6B50F0
        static double xzq(Il2CppString* a);  // RVA: 0x6B51A0
        static void xzr(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x630C10
        static void xzs(Action* a, int32_t b);  // RVA: 0x630C10
        static void xzt(Action* a, System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> b, int32_t c);  // RVA: 0x630C10
        static void xzu(float a, Action* b, System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> c, Action* d);  // RVA: 0x630C10
        void .ctor();  // RVA: 0x6B2A40
        static void .cctor();  // RVA: 0x6B2920
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcu
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool <bmwo>k__BackingField; // 0x0010
    bool <bmwp>k__BackingField; // 0x0011
    bool <bmwq>k__BackingField; // 0x0012
    bool <bmwr>k__BackingField; // 0x0013

    // Methods
    bool xzv();  // RVA: 0x65C890
    bool xzw();  // RVA: 0x669470
    bool xzx();  // RVA: 0x6C6250
    bool xzy();  // RVA: 0x6C6260
    void .ctor(bool a, bool b, bool c, bool d);  // RVA: 0x6C70A0
    Il2CppString* xuu();  // RVA: 0x6C6F30
    Il2CppString* ToString();  // RVA: 0x6C6F30
};

// Namespace: <global>
class dcv
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmws; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmwt; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    WallHackDetector* bmwu; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RenderTexture* bmwv; // 0x0028

    // Methods
    void .ctor(int32_t a);  // RVA: 0x668880
    void xzz();  // RVA: 0x630C10
    bool MoveNext();  // RVA: 0x6D8F60
    Il2CppObject* yaa();  // RVA: 0x67B9A0
    void yab();  // RVA: 0x6D9590
    Il2CppObject* yac();  // RVA: 0x67B9A0
};

// Namespace: <global>
class dcw
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmww; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmwx; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    WallHackDetector* bmwy; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x668880
    void yad();  // RVA: 0x630C10
    bool MoveNext();  // RVA: 0x6D95D0
    Il2CppObject* yae();  // RVA: 0x67B9A0
    void yaf();  // RVA: 0x6D9690
    Il2CppObject* yag();  // RVA: 0x67B9A0
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class WallHackDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static int32_t bmxd;
        // static float bmxf;
        // static int32_t bmxe;
        // static int32_t bmxc;
        // static Il2CppString* bmxb;
        // static Il2CppString* bmxa;
        // static Il2CppString* bmwz;
        // static Il2CppString* ComponentName;
    
        uint8_t pad_0000[0x60]; // 0x0000
        Vector3 bmxg; // 0x0060
        uint8_t pad_0061[0xF]; // 0x0061
        WaitForEndOfFrame* bmxh; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        bool checkRigidbody; // 0x0078
        bool checkController; // 0x0079
        bool checkWireframe; // 0x007A
        bool checkRaycast; // 0x007B
        int32_t wireframeDelay; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        int32_t raycastDelay; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        Vector3 spawnPosition; // 0x0084
        uint8_t pad_0085[0xB]; // 0x0085
        uint8_t maxFalsePositives; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        GameObject* bmxi; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        GameObject* bmxj; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* bmxk; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Camera* bmxl; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        MeshRenderer* bmxm; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        MeshRenderer* bmxn; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Color bmxo; // 0x00C8
        uint8_t pad_00C9[0xF]; // 0x00C9
        Color bmxp; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        Shader* bmxq; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Material* bmxr; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        Texture2D* bmxs; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Texture2D* bmxt; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        RenderTexture* bmxu; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        int32_t bmxv; // 0x0110
        uint8_t pad_0111[0x3]; // 0x0111
        int32_t bmxw; // 0x0114
        uint8_t pad_0115[0x3]; // 0x0115
        Rigidbody* bmxx; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        CharacterController* bmxy; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        float bmxz; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        uint8_t bmya; // 0x012C
        uint8_t bmyb; // 0x012D
        uint8_t bmyc; // 0x012E
        uint8_t bmyd; // 0x012F
        bool bmye; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        RaycastHit[][] bmyf; // 0x0138
    
        // Methods
        dcu* yah();  // RVA: 0x6B97C0
        bool yai();  // RVA: 0x6B9840
        void yaj(bool a);  // RVA: 0x6B9850
        bool yak();  // RVA: 0x6B9920
        void yal(bool a);  // RVA: 0x6B9930
        bool yam();  // RVA: 0x6B9A00
        void yan(bool a);  // RVA: 0x6B9A10
        bool yao();  // RVA: 0x6B9AE0
        void yap(bool a);  // RVA: 0x6B9AF0
        static WallHackDetector* yaq();  // RVA: 0x6B9BC0
        static WallHackDetector* yar();  // RVA: 0x6B9BF0
        static WallHackDetector* yas(Action* a);  // RVA: 0x6B9E20
        static WallHackDetector* yat(Action* a, Vector3 b);  // RVA: 0x6B9F20
        static WallHackDetector* yau(Action* a, Vector3 b, uint8_t c);  // RVA: 0x6B9FE0
        static void yav();  // RVA: 0x6BA070
        static void yaw();  // RVA: 0x6BA180
        void yax();  // RVA: 0x6BA290
        void .ctor();  // RVA: 0x6B9450
        void OnDestroy();  // RVA: 0x6B8770
        void FixedUpdate();  // RVA: 0x6B8680
        void Update();  // RVA: 0x6B92D0
        WallHackDetector* yay(Action* a, Vector3 b, uint8_t c);  // RVA: 0x6BA370
        void xut();  // RVA: 0x6B9780
        void xuq();  // RVA: 0x6B95F0
        bool xur();  // RVA: 0x6B96F0
        void xup();  // RVA: 0x6B9580
        void yaz();  // RVA: 0x6BA610
        IEnumerator* yba();  // RVA: 0x6BBCA0
        void StartRigidModule();  // RVA: 0x6B8E50
        void StartControllerModule();  // RVA: 0x6B8C00
        void ybb();  // RVA: 0x6BBD10
        void ShootWireframeModule();  // RVA: 0x6B8B30
        IEnumerator* ybc();  // RVA: 0x6BBDE0
        bool ybd(Color a, Color b);  // RVA: 0x6BBE50
        void ybe();  // RVA: 0x6BBF40
        void ShootRaycastModule();  // RVA: 0x6B8920
        void ybf();  // RVA: 0x6BC000
        void ybg();  // RVA: 0x6BC0F0
        void ybh();  // RVA: 0x6BC190
        void ybi();  // RVA: 0x6BC220
        void ybj();  // RVA: 0x6BC280
        void ybk();  // RVA: 0x6BC2E0
        void ybl();  // RVA: 0x6BC480
        void ybm();  // RVA: 0x6BC650
        void ybn();  // RVA: 0x6BC710
        bool ybo();  // RVA: 0x6BC7D0
        static Color32 ybp();  // RVA: 0x6BC8B0
        static bool ybq(Color32 a, Color32 b, int32_t c);  // RVA: 0x6BC900
    };

} // namespace CodeStage.AntiCheat.Detectors

namespace CodeStage.AntiCheat.Common
{

    // Namespace: CodeStage.AntiCheat.Common
    class ACTk
    {
    public:
        // Static fields
        // static Il2CppString* bmyg;
        // static Il2CppString* bmyh;
        // static Il2CppString* bmyi;
        // static Il2CppString* bmyj;
        // static Char[][] bmyk;
        // static Il2CppString* bmyl;
        // static Il2CppString* bmym;
    
    
        // Methods
        static void GetUnityInfo();  // RVA: 0x6C7540
        static void ybr(Il2CppString* a, Exception* b);  // RVA: 0x6C76D0
        static void ybs(Il2CppString* a, Il2CppString* b, Exception* c);  // RVA: 0x6C77B0
        static Il2CppString* ybt(Il2CppString* a, Il2CppString* b, Exception* c);  // RVA: 0x6C7870
        static Il2CppString* ybu(Exception* a);  // RVA: 0x6C7A80
        static void .cctor();  // RVA: 0x6C7640
    };

    // Namespace: CodeStage.AntiCheat.Common
    struct ACTkByte16
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t b1; // 0x0010
        uint8_t b2; // 0x0011
        uint8_t b3; // 0x0012
        uint8_t b4; // 0x0013
        uint8_t b5; // 0x0014
        uint8_t b6; // 0x0015
        uint8_t b7; // 0x0016
        uint8_t b8; // 0x0017
        uint8_t b9; // 0x0018
        uint8_t b10; // 0x0019
        uint8_t b11; // 0x001A
        uint8_t b12; // 0x001B
        uint8_t b13; // 0x001C
        uint8_t b14; // 0x001D
        uint8_t b15; // 0x001E
        uint8_t b16; // 0x001F
    
        // Methods
        bool Equals(ACTkByte16 other);  // RVA: 0x6C7260
        bool Equals(Il2CppObject* obj);  // RVA: 0x6C7100
        int32_t GetHashCode();  // RVA: 0x6C7300
    };

    // Namespace: CodeStage.AntiCheat.Common
    struct ACTkByte4
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t b1; // 0x0010
        uint8_t b2; // 0x0011
        uint8_t b3; // 0x0012
        uint8_t b4; // 0x0013
    
        // Methods
        void ybv();  // RVA: 0x6C74C0
        void ybw();  // RVA: 0x6C74D0
    };

    // Namespace: CodeStage.AntiCheat.Common
    struct ACTkByte8
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t b1; // 0x0010
        uint8_t b2; // 0x0011
        uint8_t b3; // 0x0012
        uint8_t b4; // 0x0013
        uint8_t b5; // 0x0014
        uint8_t b6; // 0x0015
        uint8_t b7; // 0x0016
        uint8_t b8; // 0x0017
    
        // Methods
        void ybx();  // RVA: 0x6C74E0
        void yby();  // RVA: 0x6C7510
    };

    // Namespace: CodeStage.AntiCheat.Common
    class BackgroundThreadAccessException : public Exception
    {
    public:
        uint8_t pad_0000[0x90]; // 0x0000
        Il2CppString* <bmyn>k__BackingField; // 0x0090
    
        // Methods
        Il2CppString* ybz();  // RVA: 0x6C8060
        void .ctor(Il2CppString* apiName);  // RVA: 0x6C7E70
    };

    // Namespace: CodeStage.AntiCheat.Common
    class ContainerHolder
    {
    public:
        // Static fields
        // static Il2CppString* bmyo;
        // static GameObject* container;
        // static bool bmyp;
    
    
        // Methods
        static void AfterAssembliesLoaded();  // RVA: 0x6C8070
        static void BeforeSplashScreen();  // RVA: 0x6C8230
        static void BeforeSceneLoad();  // RVA: 0x6C8150
        static void yca(Il2CppString* a);  // RVA: 0x6C8310
        static a ycb();  // RVA: 0x562180
        static void ycc(GameObject* a);  // RVA: 0x6C84F0
    };

} // namespace CodeStage.AntiCheat.Common

// Namespace: <global>
class dcx`1 : public MonoBehaviour
{
public:
    // Static fields
    // static a <bmyt>k__BackingField;

    bool keepAlive; // 0x0000
    int32_t bmyq; // 0x0000
    bool bmyr; // 0x0000
    Scene bmys; // 0x0000

    // Methods
    static a ycd();  // RVA: 0x562180
    static void yce(a a);  // RVA: 0x562180
    static a ycf();  // RVA: 0x562180
    void Awake();  // RVA: 0x42D760
    void Start();  // RVA: 0x42D760
    void OnDestroy();  // RVA: 0x42D760
    void wcu(Scene a, LoadSceneMode b);
    void ycg(Scene a);
    bool xzi(a a);  // RVA: 0x562180
    void ych();  // RVA: 0x42D760
    void .ctor();  // RVA: 0x42D760
};

// Namespace: <global>
class dcy
{
public:
    // Static fields
    // static Il2CppString* bmyu;
    // static Il2CppString* bmyv;
    // static System.Nullable<System.Boolean> bmyw;


    // Methods
    static Il2CppString* ycj();  // RVA: 0x6D9E70
    static Il2CppString* iiw();  // RVA: 0x6D98D0
    static Il2CppString* yck();  // RVA: 0x6D9F70
    static bool ycl();  // RVA: 0x6DA070
    static Il2CppString* bhb();  // RVA: 0x6D96D0
    static Il2CppString* iub();  // RVA: 0x6D99D0
    static void yci(bool a);  // RVA: 0x6D9AD0
    static Il2CppString* ycm();  // RVA: 0x6DA150
    static Il2CppString* fix();  // RVA: 0x6D97D0
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=10
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=32
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=8908
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=16301
{
public:
};

// Namespace: <global>
class <PrivateImplementationDetails>
{
public:
    // Static fields
    // static __StaticArrayInitTypeSize=32 2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70;
    // static __StaticArrayInitTypeSize=10 506D5506D226B0865AAC3B4C2D1BD1C1E96B7A1FEBEF4E1EF21BAB4BF2DC0DC1;
    // static __StaticArrayInitTypeSize=8908 612E7B8C70814984DDE70F0FAE08D1F0E0DACA659396C8E67CC62D26C6F52F21;
    // static __StaticArrayInitTypeSize=16301 E9E9A74FDD13D111B1E042A0AE8C8E40E3F5499621A7CDEC03ACF40350023F30;

};

// Namespace: <global>
struct a_
{
public:
};

namespace <PrivateImplementationDetails>{CFF1FD52-8A37-4FBB-B843-5B1C11CADD43}
{

    // Namespace: <PrivateImplementationDetails>{CFF1FD52-8A37-4FBB-B843-5B1C11CADD43}
    class a
    {
    public:
        // Static fields
        // static a_ a_;
        // static Byte[][] a__;
        // static String[][] a___;
    
    
        // Methods
        static Il2CppString* a_(int32_t param0, int32_t param1, int32_t param2);  // RVA: 0x6C8800
        static Il2CppString* a();  // RVA: 0x6C88F0
        static Il2CppString* b();  // RVA: 0x6C8980
        static Il2CppString* c();  // RVA: 0x6C9A60
        static Il2CppString* d();  // RVA: 0x6CAB40
        static Il2CppString* e();  // RVA: 0x6CBC20
        static Il2CppString* f();  // RVA: 0x6CCD00
        static Il2CppString* g();  // RVA: 0x6CDDE0
        static Il2CppString* h();  // RVA: 0x6CEEC0
        static Il2CppString* i();  // RVA: 0x6CFFA0
        static Il2CppString* j();  // RVA: 0x6D1080
        static Il2CppString* k();  // RVA: 0x6D2160
        static Il2CppString* l();  // RVA: 0x6D3240
        static Il2CppString* m();  // RVA: 0x6D4320
        static Il2CppString* n();  // RVA: 0x6D5400
        static Il2CppString* o();  // RVA: 0x6D64E0
        static Il2CppString* p();  // RVA: 0x6D75C0
        static Il2CppString* q();  // RVA: 0x6D86A0
        static Il2CppString* r();  // RVA: 0x6D89C0
        static Il2CppString* s();  // RVA: 0x6D8A60
        static Il2CppString* t();  // RVA: 0x6D8B00
        static Il2CppString* u();  // RVA: 0x6D8BA0
        static Il2CppString* v();  // RVA: 0x6D8C40
        static Il2CppString* w();  // RVA: 0x6D8CE0
        static Il2CppString* x();  // RVA: 0x6D8D80
        static Il2CppString* y();  // RVA: 0x6D8E20
        static Il2CppString* z();  // RVA: 0x6D8EC0
        static Il2CppString* ba();  // RVA: 0x6C8A20
        static Il2CppString* bb();  // RVA: 0x6C8AC0
        static Il2CppString* bc();  // RVA: 0x6C8B60
        static Il2CppString* bd();  // RVA: 0x6C8C00
        static Il2CppString* be();  // RVA: 0x6C8CA0
        static Il2CppString* bf();  // RVA: 0x6C8D40
        static Il2CppString* bg();  // RVA: 0x6C8DE0
        static Il2CppString* bh();  // RVA: 0x6C8E80
        static Il2CppString* bi();  // RVA: 0x6C8F20
        static Il2CppString* bj();  // RVA: 0x6C8FC0
        static Il2CppString* bk();  // RVA: 0x6C9060
        static Il2CppString* bl();  // RVA: 0x6C9100
        static Il2CppString* bm();  // RVA: 0x6C91A0
        static Il2CppString* bn();  // RVA: 0x6C9240
        static Il2CppString* bo();  // RVA: 0x6C92E0
        static Il2CppString* bp();  // RVA: 0x6C9380
        static Il2CppString* bq();  // RVA: 0x6C9420
        static Il2CppString* br();  // RVA: 0x6C94C0
        static Il2CppString* bs();  // RVA: 0x6C9560
        static Il2CppString* bt();  // RVA: 0x6C9600
        static Il2CppString* bu();  // RVA: 0x6C96A0
        static Il2CppString* bv();  // RVA: 0x6C9740
        static Il2CppString* bw();  // RVA: 0x6C97E0
        static Il2CppString* bx();  // RVA: 0x6C9880
        static Il2CppString* by();  // RVA: 0x6C9920
        static Il2CppString* bz();  // RVA: 0x6C99C0
        static Il2CppString* ca();  // RVA: 0x6C9B00
        static Il2CppString* cb();  // RVA: 0x6C9BA0
        static Il2CppString* cc();  // RVA: 0x6C9C40
        static Il2CppString* cd();  // RVA: 0x6C9CE0
        static Il2CppString* ce();  // RVA: 0x6C9D80
        static Il2CppString* cf();  // RVA: 0x6C9E20
        static Il2CppString* cg();  // RVA: 0x6C9EC0
        static Il2CppString* ch();  // RVA: 0x6C9F60
        static Il2CppString* ci();  // RVA: 0x6CA000
        static Il2CppString* cj();  // RVA: 0x6CA0A0
        static Il2CppString* ck();  // RVA: 0x6CA140
        static Il2CppString* cl();  // RVA: 0x6CA1E0
        static Il2CppString* cm();  // RVA: 0x6CA280
        static Il2CppString* cn();  // RVA: 0x6CA320
        static Il2CppString* co();  // RVA: 0x6CA3C0
        static Il2CppString* cp();  // RVA: 0x6CA460
        static Il2CppString* cq();  // RVA: 0x6CA500
        static Il2CppString* cr();  // RVA: 0x6CA5A0
        static Il2CppString* cs();  // RVA: 0x6CA640
        static Il2CppString* ct();  // RVA: 0x6CA6E0
        static Il2CppString* cu();  // RVA: 0x6CA780
        static Il2CppString* cv();  // RVA: 0x6CA820
        static Il2CppString* cw();  // RVA: 0x6CA8C0
        static Il2CppString* cx();  // RVA: 0x6CA960
        static Il2CppString* cy();  // RVA: 0x6CAA00
        static Il2CppString* cz();  // RVA: 0x6CAAA0
        static Il2CppString* da();  // RVA: 0x6CABE0
        static Il2CppString* db();  // RVA: 0x6CAC80
        static Il2CppString* dc();  // RVA: 0x6CAD20
        static Il2CppString* dd();  // RVA: 0x6CADC0
        static Il2CppString* de();  // RVA: 0x6CAE60
        static Il2CppString* df();  // RVA: 0x6CAF00
        static Il2CppString* dg();  // RVA: 0x6CAFA0
        static Il2CppString* dh();  // RVA: 0x6CB040
        static Il2CppString* di();  // RVA: 0x6CB0E0
        static Il2CppString* dj();  // RVA: 0x6CB180
        static Il2CppString* dk();  // RVA: 0x6CB220
        static Il2CppString* dl();  // RVA: 0x6CB2C0
        static Il2CppString* dm();  // RVA: 0x6CB360
        static Il2CppString* dn();  // RVA: 0x6CB400
        static Il2CppString* do();  // RVA: 0x6CB4A0
        static Il2CppString* dp();  // RVA: 0x6CB540
        static Il2CppString* dq();  // RVA: 0x6CB5E0
        static Il2CppString* dr();  // RVA: 0x6CB680
        static Il2CppString* ds();  // RVA: 0x6CB720
        static Il2CppString* dt();  // RVA: 0x6CB7C0
        static Il2CppString* du();  // RVA: 0x6CB860
        static Il2CppString* dv();  // RVA: 0x6CB900
        static Il2CppString* dw();  // RVA: 0x6CB9A0
        static Il2CppString* dx();  // RVA: 0x6CBA40
        static Il2CppString* dy();  // RVA: 0x6CBAE0
        static Il2CppString* dz();  // RVA: 0x6CBB80
        static Il2CppString* ea();  // RVA: 0x6CBCC0
        static Il2CppString* eb();  // RVA: 0x6CBD60
        static Il2CppString* ec();  // RVA: 0x6CBE00
        static Il2CppString* ed();  // RVA: 0x6CBEA0
        static Il2CppString* ee();  // RVA: 0x6CBF40
        static Il2CppString* ef();  // RVA: 0x6CBFE0
        static Il2CppString* eg();  // RVA: 0x6CC080
        static Il2CppString* eh();  // RVA: 0x6CC120
        static Il2CppString* ei();  // RVA: 0x6CC1C0
        static Il2CppString* ej();  // RVA: 0x6CC260
        static Il2CppString* ek();  // RVA: 0x6CC300
        static Il2CppString* el();  // RVA: 0x6CC3A0
        static Il2CppString* em();  // RVA: 0x6CC440
        static Il2CppString* en();  // RVA: 0x6CC4E0
        static Il2CppString* eo();  // RVA: 0x6CC580
        static Il2CppString* ep();  // RVA: 0x6CC620
        static Il2CppString* eq();  // RVA: 0x6CC6C0
        static Il2CppString* er();  // RVA: 0x6CC760
        static Il2CppString* es();  // RVA: 0x6CC800
        static Il2CppString* et();  // RVA: 0x6CC8A0
        static Il2CppString* eu();  // RVA: 0x6CC940
        static Il2CppString* ev();  // RVA: 0x6CC9E0
        static Il2CppString* ew();  // RVA: 0x6CCA80
        static Il2CppString* ex();  // RVA: 0x6CCB20
        static Il2CppString* ey();  // RVA: 0x6CCBC0
        static Il2CppString* ez();  // RVA: 0x6CCC60
        static Il2CppString* fa();  // RVA: 0x6CCDA0
        static Il2CppString* fb();  // RVA: 0x6CCE40
        static Il2CppString* fc();  // RVA: 0x6CCEE0
        static Il2CppString* fd();  // RVA: 0x6CCF80
        static Il2CppString* fe();  // RVA: 0x6CD020
        static Il2CppString* ff();  // RVA: 0x6CD0C0
        static Il2CppString* fg();  // RVA: 0x6CD160
        static Il2CppString* fh();  // RVA: 0x6CD200
        static Il2CppString* fi();  // RVA: 0x6CD2A0
        static Il2CppString* fj();  // RVA: 0x6CD340
        static Il2CppString* fk();  // RVA: 0x6CD3E0
        static Il2CppString* fl();  // RVA: 0x6CD480
        static Il2CppString* fm();  // RVA: 0x6CD520
        static Il2CppString* fn();  // RVA: 0x6CD5C0
        static Il2CppString* fo();  // RVA: 0x6CD660
        static Il2CppString* fp();  // RVA: 0x6CD700
        static Il2CppString* fq();  // RVA: 0x6CD7A0
        static Il2CppString* fr();  // RVA: 0x6CD840
        static Il2CppString* fs();  // RVA: 0x6CD8E0
        static Il2CppString* ft();  // RVA: 0x6CD980
        static Il2CppString* fu();  // RVA: 0x6CDA20
        static Il2CppString* fv();  // RVA: 0x6CDAC0
        static Il2CppString* fw();  // RVA: 0x6CDB60
        static Il2CppString* fx();  // RVA: 0x6CDC00
        static Il2CppString* fy();  // RVA: 0x6CDCA0
        static Il2CppString* fz();  // RVA: 0x6CDD40
        static Il2CppString* ga();  // RVA: 0x6CDE80
        static Il2CppString* gb();  // RVA: 0x6CDF20
        static Il2CppString* gc();  // RVA: 0x6CDFC0
        static Il2CppString* gd();  // RVA: 0x6CE060
        static Il2CppString* ge();  // RVA: 0x6CE100
        static Il2CppString* gf();  // RVA: 0x6CE1A0
        static Il2CppString* gg();  // RVA: 0x6CE240
        static Il2CppString* gh();  // RVA: 0x6CE2E0
        static Il2CppString* gi();  // RVA: 0x6CE380
        static Il2CppString* gj();  // RVA: 0x6CE420
        static Il2CppString* gk();  // RVA: 0x6CE4C0
        static Il2CppString* gl();  // RVA: 0x6CE560
        static Il2CppString* gm();  // RVA: 0x6CE600
        static Il2CppString* gn();  // RVA: 0x6CE6A0
        static Il2CppString* go();  // RVA: 0x6CE740
        static Il2CppString* gp();  // RVA: 0x6CE7E0
        static Il2CppString* gq();  // RVA: 0x6CE880
        static Il2CppString* gr();  // RVA: 0x6CE920
        static Il2CppString* gs();  // RVA: 0x6CE9C0
        static Il2CppString* gt();  // RVA: 0x6CEA60
        static Il2CppString* gu();  // RVA: 0x6CEB00
        static Il2CppString* gv();  // RVA: 0x6CEBA0
        static Il2CppString* gw();  // RVA: 0x6CEC40
        static Il2CppString* gx();  // RVA: 0x6CECE0
        static Il2CppString* gy();  // RVA: 0x6CED80
        static Il2CppString* gz();  // RVA: 0x6CEE20
        static Il2CppString* ha();  // RVA: 0x6CEF60
        static Il2CppString* hb();  // RVA: 0x6CF000
        static Il2CppString* hc();  // RVA: 0x6CF0A0
        static Il2CppString* hd();  // RVA: 0x6CF140
        static Il2CppString* he();  // RVA: 0x6CF1E0
        static Il2CppString* hf();  // RVA: 0x6CF280
        static Il2CppString* hg();  // RVA: 0x6CF320
        static Il2CppString* hh();  // RVA: 0x6CF3C0
        static Il2CppString* hi();  // RVA: 0x6CF460
        static Il2CppString* hj();  // RVA: 0x6CF500
        static Il2CppString* hk();  // RVA: 0x6CF5A0
        static Il2CppString* hl();  // RVA: 0x6CF640
        static Il2CppString* hm();  // RVA: 0x6CF6E0
        static Il2CppString* hn();  // RVA: 0x6CF780
        static Il2CppString* ho();  // RVA: 0x6CF820
        static Il2CppString* hp();  // RVA: 0x6CF8C0
        static Il2CppString* hq();  // RVA: 0x6CF960
        static Il2CppString* hr();  // RVA: 0x6CFA00
        static Il2CppString* hs();  // RVA: 0x6CFAA0
        static Il2CppString* ht();  // RVA: 0x6CFB40
        static Il2CppString* hu();  // RVA: 0x6CFBE0
        static Il2CppString* hv();  // RVA: 0x6CFC80
        static Il2CppString* hw();  // RVA: 0x6CFD20
        static Il2CppString* hx();  // RVA: 0x6CFDC0
        static Il2CppString* hy();  // RVA: 0x6CFE60
        static Il2CppString* hz();  // RVA: 0x6CFF00
        static Il2CppString* ia();  // RVA: 0x6D0040
        static Il2CppString* ib();  // RVA: 0x6D00E0
        static Il2CppString* ic();  // RVA: 0x6D0180
        static Il2CppString* id();  // RVA: 0x6D0220
        static Il2CppString* ie();  // RVA: 0x6D02C0
        static Il2CppString* if();  // RVA: 0x6D0360
        static Il2CppString* ig();  // RVA: 0x6D0400
        static Il2CppString* ih();  // RVA: 0x6D04A0
        static Il2CppString* ii();  // RVA: 0x6D0540
        static Il2CppString* ij();  // RVA: 0x6D05E0
        static Il2CppString* ik();  // RVA: 0x6D0680
        static Il2CppString* il();  // RVA: 0x6D0720
        static Il2CppString* im();  // RVA: 0x6D07C0
        static Il2CppString* in();  // RVA: 0x6D0860
        static Il2CppString* io();  // RVA: 0x6D0900
        static Il2CppString* ip();  // RVA: 0x6D09A0
        static Il2CppString* iq();  // RVA: 0x6D0A40
        static Il2CppString* ir();  // RVA: 0x6D0AE0
        static Il2CppString* is();  // RVA: 0x6D0B80
        static Il2CppString* it();  // RVA: 0x6D0C20
        static Il2CppString* iu();  // RVA: 0x6D0CC0
        static Il2CppString* iv();  // RVA: 0x6D0D60
        static Il2CppString* iw();  // RVA: 0x6D0E00
        static Il2CppString* ix();  // RVA: 0x6D0EA0
        static Il2CppString* iy();  // RVA: 0x6D0F40
        static Il2CppString* iz();  // RVA: 0x6D0FE0
        static Il2CppString* ja();  // RVA: 0x6D1120
        static Il2CppString* jb();  // RVA: 0x6D11C0
        static Il2CppString* jc();  // RVA: 0x6D1260
        static Il2CppString* jd();  // RVA: 0x6D1300
        static Il2CppString* je();  // RVA: 0x6D13A0
        static Il2CppString* jf();  // RVA: 0x6D1440
        static Il2CppString* jg();  // RVA: 0x6D14E0
        static Il2CppString* jh();  // RVA: 0x6D1580
        static Il2CppString* ji();  // RVA: 0x6D1620
        static Il2CppString* jj();  // RVA: 0x6D16C0
        static Il2CppString* jk();  // RVA: 0x6D1760
        static Il2CppString* jl();  // RVA: 0x6D1800
        static Il2CppString* jm();  // RVA: 0x6D18A0
        static Il2CppString* jn();  // RVA: 0x6D1940
        static Il2CppString* jo();  // RVA: 0x6D19E0
        static Il2CppString* jp();  // RVA: 0x6D1A80
        static Il2CppString* jq();  // RVA: 0x6D1B20
        static Il2CppString* jr();  // RVA: 0x6D1BC0
        static Il2CppString* js();  // RVA: 0x6D1C60
        static Il2CppString* jt();  // RVA: 0x6D1D00
        static Il2CppString* ju();  // RVA: 0x6D1DA0
        static Il2CppString* jv();  // RVA: 0x6D1E40
        static Il2CppString* jw();  // RVA: 0x6D1EE0
        static Il2CppString* jx();  // RVA: 0x6D1F80
        static Il2CppString* jy();  // RVA: 0x6D2020
        static Il2CppString* jz();  // RVA: 0x6D20C0
        static Il2CppString* ka();  // RVA: 0x6D2200
        static Il2CppString* kb();  // RVA: 0x6D22A0
        static Il2CppString* kc();  // RVA: 0x6D2340
        static Il2CppString* kd();  // RVA: 0x6D23E0
        static Il2CppString* ke();  // RVA: 0x6D2480
        static Il2CppString* kf();  // RVA: 0x6D2520
        static Il2CppString* kg();  // RVA: 0x6D25C0
        static Il2CppString* kh();  // RVA: 0x6D2660
        static Il2CppString* ki();  // RVA: 0x6D2700
        static Il2CppString* kj();  // RVA: 0x6D27A0
        static Il2CppString* kk();  // RVA: 0x6D2840
        static Il2CppString* kl();  // RVA: 0x6D28E0
        static Il2CppString* km();  // RVA: 0x6D2980
        static Il2CppString* kn();  // RVA: 0x6D2A20
        static Il2CppString* ko();  // RVA: 0x6D2AC0
        static Il2CppString* kp();  // RVA: 0x6D2B60
        static Il2CppString* kq();  // RVA: 0x6D2C00
        static Il2CppString* kr();  // RVA: 0x6D2CA0
        static Il2CppString* ks();  // RVA: 0x6D2D40
        static Il2CppString* kt();  // RVA: 0x6D2DE0
        static Il2CppString* ku();  // RVA: 0x6D2E80
        static Il2CppString* kv();  // RVA: 0x6D2F20
        static Il2CppString* kw();  // RVA: 0x6D2FC0
        static Il2CppString* kx();  // RVA: 0x6D3060
        static Il2CppString* ky();  // RVA: 0x6D3100
        static Il2CppString* kz();  // RVA: 0x6D31A0
        static Il2CppString* la();  // RVA: 0x6D32E0
        static Il2CppString* lb();  // RVA: 0x6D3380
        static Il2CppString* lc();  // RVA: 0x6D3420
        static Il2CppString* ld();  // RVA: 0x6D34C0
        static Il2CppString* le();  // RVA: 0x6D3560
        static Il2CppString* lf();  // RVA: 0x6D3600
        static Il2CppString* lg();  // RVA: 0x6D36A0
        static Il2CppString* lh();  // RVA: 0x6D3740
        static Il2CppString* li();  // RVA: 0x6D37E0
        static Il2CppString* lj();  // RVA: 0x6D3880
        static Il2CppString* lk();  // RVA: 0x6D3920
        static Il2CppString* ll();  // RVA: 0x6D39C0
        static Il2CppString* lm();  // RVA: 0x6D3A60
        static Il2CppString* ln();  // RVA: 0x6D3B00
        static Il2CppString* lo();  // RVA: 0x6D3BA0
        static Il2CppString* lp();  // RVA: 0x6D3C40
        static Il2CppString* lq();  // RVA: 0x6D3CE0
        static Il2CppString* lr();  // RVA: 0x6D3D80
        static Il2CppString* ls();  // RVA: 0x6D3E20
        static Il2CppString* lt();  // RVA: 0x6D3EC0
        static Il2CppString* lu();  // RVA: 0x6D3F60
        static Il2CppString* lv();  // RVA: 0x6D4000
        static Il2CppString* lw();  // RVA: 0x6D40A0
        static Il2CppString* lx();  // RVA: 0x6D4140
        static Il2CppString* ly();  // RVA: 0x6D41E0
        static Il2CppString* lz();  // RVA: 0x6D4280
        static Il2CppString* ma();  // RVA: 0x6D43C0
        static Il2CppString* mb();  // RVA: 0x6D4460
        static Il2CppString* mc();  // RVA: 0x6D4500
        static Il2CppString* md();  // RVA: 0x6D45A0
        static Il2CppString* me();  // RVA: 0x6D4640
        static Il2CppString* mf();  // RVA: 0x6D46E0
        static Il2CppString* mg();  // RVA: 0x6D4780
        static Il2CppString* mh();  // RVA: 0x6D4820
        static Il2CppString* mi();  // RVA: 0x6D48C0
        static Il2CppString* mj();  // RVA: 0x6D4960
        static Il2CppString* mk();  // RVA: 0x6D4A00
        static Il2CppString* ml();  // RVA: 0x6D4AA0
        static Il2CppString* mm();  // RVA: 0x6D4B40
        static Il2CppString* mn();  // RVA: 0x6D4BE0
        static Il2CppString* mo();  // RVA: 0x6D4C80
        static Il2CppString* mp();  // RVA: 0x6D4D20
        static Il2CppString* mq();  // RVA: 0x6D4DC0
        static Il2CppString* mr();  // RVA: 0x6D4E60
        static Il2CppString* ms();  // RVA: 0x6D4F00
        static Il2CppString* mt();  // RVA: 0x6D4FA0
        static Il2CppString* mu();  // RVA: 0x6D5040
        static Il2CppString* mv();  // RVA: 0x6D50E0
        static Il2CppString* mw();  // RVA: 0x6D5180
        static Il2CppString* mx();  // RVA: 0x6D5220
        static Il2CppString* my();  // RVA: 0x6D52C0
        static Il2CppString* mz();  // RVA: 0x6D5360
        static Il2CppString* na();  // RVA: 0x6D54A0
        static Il2CppString* nb();  // RVA: 0x6D5540
        static Il2CppString* nc();  // RVA: 0x6D55E0
        static Il2CppString* nd();  // RVA: 0x6D5680
        static Il2CppString* ne();  // RVA: 0x6D5720
        static Il2CppString* nf();  // RVA: 0x6D57C0
        static Il2CppString* ng();  // RVA: 0x6D5860
        static Il2CppString* nh();  // RVA: 0x6D5900
        static Il2CppString* ni();  // RVA: 0x6D59A0
        static Il2CppString* nj();  // RVA: 0x6D5A40
        static Il2CppString* nk();  // RVA: 0x6D5AE0
        static Il2CppString* nl();  // RVA: 0x6D5B80
        static Il2CppString* nm();  // RVA: 0x6D5C20
        static Il2CppString* nn();  // RVA: 0x6D5CC0
        static Il2CppString* no();  // RVA: 0x6D5D60
        static Il2CppString* np();  // RVA: 0x6D5E00
        static Il2CppString* nq();  // RVA: 0x6D5EA0
        static Il2CppString* nr();  // RVA: 0x6D5F40
        static Il2CppString* ns();  // RVA: 0x6D5FE0
        static Il2CppString* nt();  // RVA: 0x6D6080
        static Il2CppString* nu();  // RVA: 0x6D6120
        static Il2CppString* nv();  // RVA: 0x6D61C0
        static Il2CppString* nw();  // RVA: 0x6D6260
        static Il2CppString* nx();  // RVA: 0x6D6300
        static Il2CppString* ny();  // RVA: 0x6D63A0
        static Il2CppString* nz();  // RVA: 0x6D6440
        static Il2CppString* oa();  // RVA: 0x6D6580
        static Il2CppString* ob();  // RVA: 0x6D6620
        static Il2CppString* oc();  // RVA: 0x6D66C0
        static Il2CppString* od();  // RVA: 0x6D6760
        static Il2CppString* oe();  // RVA: 0x6D6800
        static Il2CppString* of();  // RVA: 0x6D68A0
        static Il2CppString* og();  // RVA: 0x6D6940
        static Il2CppString* oh();  // RVA: 0x6D69E0
        static Il2CppString* oi();  // RVA: 0x6D6A80
        static Il2CppString* oj();  // RVA: 0x6D6B20
        static Il2CppString* ok();  // RVA: 0x6D6BC0
        static Il2CppString* ol();  // RVA: 0x6D6C60
        static Il2CppString* om();  // RVA: 0x6D6D00
        static Il2CppString* on();  // RVA: 0x6D6DA0
        static Il2CppString* oo();  // RVA: 0x6D6E40
        static Il2CppString* op();  // RVA: 0x6D6EE0
        static Il2CppString* oq();  // RVA: 0x6D6F80
        static Il2CppString* or();  // RVA: 0x6D7020
        static Il2CppString* os();  // RVA: 0x6D70C0
        static Il2CppString* ot();  // RVA: 0x6D7160
        static Il2CppString* ou();  // RVA: 0x6D7200
        static Il2CppString* ov();  // RVA: 0x6D72A0
        static Il2CppString* ow();  // RVA: 0x6D7340
        static Il2CppString* ox();  // RVA: 0x6D73E0
        static Il2CppString* oy();  // RVA: 0x6D7480
        static Il2CppString* oz();  // RVA: 0x6D7520
        static Il2CppString* pa();  // RVA: 0x6D7660
        static Il2CppString* pb();  // RVA: 0x6D7700
        static Il2CppString* pc();  // RVA: 0x6D77A0
        static Il2CppString* pd();  // RVA: 0x6D7840
        static Il2CppString* pe();  // RVA: 0x6D78E0
        static Il2CppString* pf();  // RVA: 0x6D7980
        static Il2CppString* pg();  // RVA: 0x6D7A20
        static Il2CppString* ph();  // RVA: 0x6D7AC0
        static Il2CppString* pi();  // RVA: 0x6D7B60
        static Il2CppString* pj();  // RVA: 0x6D7C00
        static Il2CppString* pk();  // RVA: 0x6D7CA0
        static Il2CppString* pl();  // RVA: 0x6D7D40
        static Il2CppString* pm();  // RVA: 0x6D7DE0
        static Il2CppString* pn();  // RVA: 0x6D7E80
        static Il2CppString* po();  // RVA: 0x6D7F20
        static Il2CppString* pp();  // RVA: 0x6D7FC0
        static Il2CppString* pq();  // RVA: 0x6D8060
        static Il2CppString* pr();  // RVA: 0x6D8100
        static Il2CppString* ps();  // RVA: 0x6D81A0
        static Il2CppString* pt();  // RVA: 0x6D8240
        static Il2CppString* pu();  // RVA: 0x6D82E0
        static Il2CppString* pv();  // RVA: 0x6D8380
        static Il2CppString* pw();  // RVA: 0x6D8420
        static Il2CppString* px();  // RVA: 0x6D84C0
        static Il2CppString* py();  // RVA: 0x6D8560
        static Il2CppString* pz();  // RVA: 0x6D8600
        static Il2CppString* qa();  // RVA: 0x6D8740
        static Il2CppString* qb();  // RVA: 0x6D87E0
        static Il2CppString* qc();  // RVA: 0x6D8880
        static Il2CppString* qd();  // RVA: 0x6D8920
        static void .cctor();  // RVA: 0x6C8690
    };

} // namespace <PrivateImplementationDetails>{CFF1FD52-8A37-4FBB-B843-5B1C11CADD43}
