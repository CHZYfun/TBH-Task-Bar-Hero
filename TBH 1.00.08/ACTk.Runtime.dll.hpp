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
        void .ctor();  // RVA: 0x678F50
    };

} // namespace Microsoft.CodeAnalysis

namespace System.Runtime.CompilerServices
{

    // Namespace: System.Runtime.CompilerServices
    class IsUnmanagedAttribute : public Attribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x678F50
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
    void .ctor();  // RVA: 0x628390
    static MonoScriptData htu();  // RVA: 0x679CE0
    static MonoScriptData mzd();  // RVA: 0x679DC0
    static MonoScriptData vyt();  // RVA: 0x679EA0
    static MonoScriptData fng();  // RVA: 0x679C00
};

// Namespace: <global>
class dan
{
public:

    // Methods
    static void vyu();  // RVA: 0x63E5A0
    static void vyv();  // RVA: 0x63E5A0
    static void pe();  // RVA: 0x63E5A0
    static void nt();  // RVA: 0x63E5A0
    static void lmh();  // RVA: 0x63E5A0
    static void nap();  // RVA: 0x63E5A0
};

// Namespace: <global>
class ApplicationFocusEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x678E40
    void Invoke(bool hasFocus);  // RVA: 0x678E30
    IAsyncResult* BeginInvoke(bool hasFocus, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x678DC0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x678E20
};

// Namespace: <global>
class ApplicationPauseEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x678E40
    void Invoke(bool pauseStatus);  // RVA: 0x678E30
    IAsyncResult* BeginInvoke(bool pauseStatus, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x678DC0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x678E20
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
    void drx(bool hasFocus);  // RVA: 0x67A020
    void kjo(bool hasFocus);  // RVA: 0x67A020
    void cvj();  // RVA: 0x67A060
    void vyz(ApplicationPauseEventHandler* a);  // RVA: 0x67A4C0
    void gms();  // RVA: 0x67A100
    void mkh();  // RVA: 0x67A1A0
    void vyy(ApplicationPauseEventHandler* a);  // RVA: 0x67A420
    void oar();  // RVA: 0x67A240
    void .ctor();  // RVA: 0x628740
    void vyx(ApplicationFocusEventHandler* a);  // RVA: 0x67A380
    void vyw(ApplicationFocusEventHandler* a);  // RVA: 0x67A2E0
    void Awake();  // RVA: 0x679F80
    void jjp(bool hasFocus);  // RVA: 0x67A020
    void OnApplicationFocus(bool hasFocus);  // RVA: 0x67A020
    static dao* vza();  // RVA: 0x67A560
    void OnApplicationPause(bool pauseStatus);  // RVA: 0x67A040
};

// Namespace: <global>
class dap
{
public:

    // Methods
    static Il2CppString* vzb(Il2CppString* a);  // RVA: 0x67ABB0
    static Il2CppString* muv(Il2CppString* a);  // RVA: 0x67AB10
    static Char[][] vzc(Il2CppString* a);  // RVA: 0x67AC50
    static Il2CppString* vze(Char[][] a);  // RVA: 0x67AE10
    static Il2CppString* lhf(Char[][] a);  // RVA: 0x67A8F0
    static Il2CppString* kdq(Il2CppString* a);  // RVA: 0x67A730
    static Il2CppString* ccs(Il2CppString* a);  // RVA: 0x67A690
    static Il2CppString* kwk(Il2CppString* a);  // RVA: 0x67A850
    static Il2CppString* vzd(Il2CppString* a);  // RVA: 0x67ACF0
    static Il2CppString* lhh(Char[][] a);  // RVA: 0x67AA00
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
    static void vzh(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B4D0
    static void fvx(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B0E0
    static void mng(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B380
    static void vzi(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B540
    static void dgq(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67AF90
    static void vzj(Stream* a, Stream* b, Byte[][] c, uint8_t d);  // RVA: 0x563BC0
    static void gjn(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B150
    static void vzk(Stream* a, Stream* b, Byte[][] c, uint8_t d, uint8_t e);  // RVA: 0x436630
    static void cjh(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67AF20
    static void jns(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B2A0
    static void gmd(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B1C0
    static void euh(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B070
    static void vzf(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B3F0
    static void ehg(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B000
    static void vzg(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B460
    static void hyd(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B230
    static void jui(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x67B310
};

// Namespace: <global>
class dar
{
public:
    // Static fields
    // static int32_t bmnp;


    // Methods
    static bool iqv(BigInteger a, int32_t b);  // RVA: 0x67C460
    static bool vzl(BigInteger a, int32_t b);  // RVA: 0x67C460
    static bool vzn(Decimal a, int32_t b);  // RVA: 0x67C220
    static bool mhs(bool a, int32_t b);  // RVA: 0x67BFC0
    static bool jcq(float a, int32_t b);  // RVA: 0x67B850
    static int32_t kgr(BigInteger a);  // RVA: 0x67C490
    static int32_t buh(DateTimeOffset a);  // RVA: 0x67B5B0
    static bool vzx(float a, int32_t b);  // RVA: 0x67B850
    static int32_t wad(BigInteger a);  // RVA: 0x67D240
    static bool jys(uint32_t a, int32_t b);  // RVA: 0x67B990
    static bool kqs(Guid a, int32_t b);  // RVA: 0x67B690
    static int32_t wai(DateTimeOffset a);  // RVA: 0x67D850
    static bool fug(double a, int32_t b);  // RVA: 0x67B8B0
    static int32_t kny(bool a);  // RVA: 0x67C800
    static bool bve(Guid a, int32_t b);  // RVA: 0x67B690
    static int32_t nxb(uint64_t a);  // RVA: 0x67CBA0
    static bool nmf(Vector2 a, int32_t b);  // RVA: 0x67BA60
    static int32_t wac(a a);  // RVA: 0x563BC0
    static bool nqb(Guid a, int32_t b);  // RVA: 0x67B690
    static int32_t hcs(DateTime a);  // RVA: 0x67C130
    static int32_t waf(Decimal a);  // RVA: 0x67D540
    static int32_t wag(int32_t a);  // RVA: 0x67D710
    static bool ivo(double a, int32_t b);  // RVA: 0x67B8B0
    static bool odc(DateTimeOffset a, int32_t b);  // RVA: 0x67BB70
    static bool vzr(uint64_t a, int32_t b);  // RVA: 0x67D080
    static int32_t wak(int64_t a);  // RVA: 0x67DB90
    static bool vzq(uint32_t a, int32_t b);  // RVA: 0x67B990
    static int32_t wam(uint64_t a);  // RVA: 0x67DC30
    static int32_t wan(float a);  // RVA: 0x67C810
    static bool onk(Guid a, int32_t b);  // RVA: 0x67B690
    static int32_t wap(Quaternion a);  // RVA: 0x67DCF0
    static int32_t waq(Vector2 a);  // RVA: 0x67C090
    static bool mlj(Vector3Int a, int32_t b);  // RVA: 0x67BB10
    static int32_t lin(float a);  // RVA: 0x67C810
    static bool wab(Guid a, int32_t b);  // RVA: 0x67B690
    static bool im(float a, int32_t b);  // RVA: 0x67B850
    static int32_t exz(BigInteger a);  // RVA: 0x67BBA0
    static int32_t war(Vector2Int a);  // RVA: 0x67B7B0
    static bool vzv(Vector3 a, int32_t b);  // RVA: 0x67D130
    static bool fvs(bool a, int32_t b);  // RVA: 0x67BFC0
    static int32_t cxa(Vector2Int a);  // RVA: 0x67B7B0
    static int32_t waj(Guid a);  // RVA: 0x67D930
    static int32_t wah(DateTime a);  // RVA: 0x67D760
    static bool den(float a, int32_t b);  // RVA: 0x67B850
    static bool gbi(int64_t a, int32_t b);  // RVA: 0x67BFE0
    static bool vzo(int32_t a, int32_t b);  // RVA: 0x67B990
    static bool duw(uint32_t a, int32_t b);  // RVA: 0x67B990
    static int32_t imr(uint64_t a);  // RVA: 0x67C330
    static int32_t wav(Il2CppString* a);  // RVA: 0x67E070
    static int32_t bzj(bool a);  // RVA: 0x67B7A0
    static int32_t wal(uint32_t a);  // RVA: 0x67D710
    static bool vzy(double a, int32_t b);  // RVA: 0x67B8B0
    static bool jgl(DateTimeOffset a, int32_t b);  // RVA: 0x67BB70
    static int32_t okv(Decimal a);  // RVA: 0x67CC40
    static bool epr(Vector2 a, int32_t b);  // RVA: 0x67BA60
    static bool epi(DateTimeOffset a, int32_t b);  // RVA: 0x67BB70
    static bool dqy(Vector2Int a, int32_t b);  // RVA: 0x67B8E0
    static bool bxs(Char[][] a, int32_t b);  // RVA: 0x67B740
    static bool egg(Vector3Int a, int32_t b);  // RVA: 0x67BB10
    static bool lbo(Vector3Int a, int32_t b);  // RVA: 0x67BB10
    static int32_t wat(Vector3Int a);  // RVA: 0x67DF20
    static int32_t was(Vector3 a);  // RVA: 0x67DE30
    static bool okk(int64_t a, int32_t b);  // RVA: 0x67BFE0
    static bool kfb(Char[][] a, int32_t b);  // RVA: 0x67B740
    static bool ocs(int32_t a, int32_t b);  // RVA: 0x67B990
    static int32_t wao(double a);  // RVA: 0x67DCD0
    static bool nyi(bool a, int32_t b);  // RVA: 0x67BFC0
    static bool dep(double a, int32_t b);  // RVA: 0x67B8B0
    static int32_t dwa(Il2CppString* a);  // RVA: 0x67B9E0
    static int32_t bvr(Il2CppString* a);  // RVA: 0x67B6C0
    static bool vzu(Vector2Int a, int32_t b);  // RVA: 0x67B8E0
    static bool ojc(uint32_t a, int32_t b);  // RVA: 0x67B990
    static int32_t su(BigInteger a);  // RVA: 0x67CD90
    static int32_t ncx(bool a);  // RVA: 0x67CA20
    static bool eoo(Quaternion a, int32_t b);  // RVA: 0x67BB40
    static bool hne(DateTimeOffset a, int32_t b);  // RVA: 0x67BB70
    static bool nom(uint32_t a, int32_t b);  // RVA: 0x67B990
    static bool vzs(Quaternion a, int32_t b);  // RVA: 0x67BB40
    static bool vzw(Vector3Int a, int32_t b);  // RVA: 0x67BB10
    static bool hsk(Decimal a, int32_t b);  // RVA: 0x67C220
    static bool iue(float a, int32_t b);  // RVA: 0x67B850
    static int32_t iop(DateTimeOffset a);  // RVA: 0x67C380
    static bool vzt(Vector2 a, int32_t b);  // RVA: 0x67BA60
    static int32_t gyq(Vector2 a);  // RVA: 0x67C090
    static bool oig(Vector2 a, int32_t b);  // RVA: 0x67BA60
    static bool mzr(double a, int32_t b);  // RVA: 0x67B8B0
    static int32_t lrr(uint64_t a);  // RVA: 0x67C330
    static bool iz(bool a, int32_t b);  // RVA: 0x67BFC0
    static int32_t fbe(Decimal a);  // RVA: 0x67BE90
    static int32_t nlr(DateTime a);  // RVA: 0x67CA30
    static bool lfk(Char[][] a, int32_t b);  // RVA: 0x67B740
    static bool vzz(Char[][] a, int32_t b);  // RVA: 0x67B740
    static bool hbl(Vector2Int a, int32_t b);  // RVA: 0x67B8E0
    static int32_t wae(bool a);  // RVA: 0x67D530
    static int32_t mkp(Decimal a);  // RVA: 0x67C860
    static bool vzp(int64_t a, int32_t b);  // RVA: 0x67BFE0
    static int32_t nsn(uint64_t a);  // RVA: 0x67C330
    static bool waa(DateTimeOffset a, int32_t b);  // RVA: 0x67BB70
    static int32_t ifv(DateTimeOffset a);  // RVA: 0x67C250
    static int32_t or(double a);  // RVA: 0x67CD70
    static bool mil(Vector2Int a, int32_t b);  // RVA: 0x67B8E0
    static int32_t obj(Vector2 a);  // RVA: 0x67C090
    static bool eao(Vector2 a, int32_t b);  // RVA: 0x67BA60
    static bool vzm(bool a, int32_t b);  // RVA: 0x67BFC0
    static int32_t wau(Char[][] a);  // RVA: 0x67E020
    static int32_t kkk(Il2CppString* a);  // RVA: 0x67C780
    static int32_t nte(Il2CppString* a);  // RVA: 0x67CB20
};

// Namespace: <global>
class das : public CertificateHandler
{
public:

    // Methods
    bool ValidateCertificate(Byte[][] certificateData);  // RVA: 0x67E0F0
    void .ctor();  // RVA: 0x67E100
};

// Namespace: <global>
class dat
{
public:

    // Methods
    static bool dmi(double a, double b, double c);  // RVA: 0x67E110
    static bool waw(float a, float b, float c);  // RVA: 0x67E550
    static bool jco(double a, double b, double c);  // RVA: 0x67E370
    static bool wax(double a, double b, double c);  // RVA: 0x67E600
    static bool hyi(double a, double b, double c);  // RVA: 0x67E240
    static bool khn(float a, float b, float c);  // RVA: 0x67E4A0
};

// Namespace: <global>
class dau
{
public:

    // Methods
    static void way(System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> a, int32_t b, int32_t c, int64_t d, Il2CppString* e);  // RVA: 0x67E730
};

// Namespace: <global>
class dav
{
public:

    // Methods
    static int32_t jdp();  // RVA: 0x67EAF0
    static uint64_t ixf();  // RVA: 0x67E8B0
    static uint8_t wba();  // RVA: 0x67EF80
    static wchar_t wbc();  // RVA: 0x67F020
    static uint8_t gsq();  // RVA: 0x67EA00
    static uint8_t fri();  // RVA: 0x67E910
    static int16_t wbd();  // RVA: 0x67F070
    static int8_t ftx();  // RVA: 0x67E960
    static int64_t wbh();  // RVA: 0x67E8B0
    static uint32_t jxl();  // RVA: 0x67EB40
    static Il2CppString* waz(int32_t a);  // RVA: 0x67EEA0
    static uint32_t wbg();  // RVA: 0x67EB40
    static int32_t wbf();  // RVA: 0x67EB40
    static int64_t ogh();  // RVA: 0x67EDB0
    static uint64_t wbi();  // RVA: 0x67E8B0
    static void wbj(Char[][] a);  // RVA: 0x67F110
    static int16_t los();  // RVA: 0x67EC30
    static Il2CppString* ndo(int32_t a);  // RVA: 0x67EC80
    static int32_t hwk();  // RVA: 0x67EA50
    static uint8_t cwt();  // RVA: 0x67E860
    static int64_t hzt();  // RVA: 0x67EAA0
    static int32_t kto();  // RVA: 0x67EBE0
    static int64_t uj();  // RVA: 0x67EE50
    static int32_t kqd();  // RVA: 0x67EB90
    static int64_t oh();  // RVA: 0x67EE00
    static uint8_t gfg();  // RVA: 0x67E9B0
    static int16_t nic();  // RVA: 0x67ED60
    static uint64_t dxj();  // RVA: 0x67E8B0
    static uint16_t wbe();  // RVA: 0x67F0C0
    static int8_t wbb();  // RVA: 0x67EFD0
};

// Namespace: <global>
class daw
{
public:
    // Static fields
    // static Char[][] bmnq;


    // Methods
    static Il2CppString* wbp(Byte[][] a);  // RVA: 0x67F3A0
    static Byte[][] wbk(Char[][] a);  // RVA: 0x67F230
    static Char[][] dkj(Byte[][] a);  // RVA: 0x67F270
    static Il2CppString* dvv(Byte[][] a);  // RVA: 0x67F2B0
    static Il2CppString* wbo(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x67F340
    static Il2CppString* hyv(Byte[][] a);  // RVA: 0x67F2B0
    static Char[][] bhc(Byte[][] a);  // RVA: 0x67F270
    static Byte[][] wbl(Il2CppString* a);  // RVA: 0x67F2F0
    static Byte[][] cus(Char[][] a);  // RVA: 0x67F230
    static Il2CppString* wbn(Byte[][] a);  // RVA: 0x67F2B0
    static Il2CppString* ofi(Byte[][] a);  // RVA: 0x67F2B0
    static Char[][] kpc(Byte[][] a);  // RVA: 0x67F270
    static Byte[][] bcc(Char[][] a);  // RVA: 0x67F230
    static void .cctor();  // RVA: 0x67F1A0
    static Char[][] wbm(Byte[][] a);  // RVA: 0x67F270
    static Byte[][] mat(Il2CppString* a);  // RVA: 0x67F2F0
    static Il2CppString* ckv(Byte[][] a);  // RVA: 0x67F2B0
};

// Namespace: <global>
class dax`1
{
public:
    System.Collections.Concurrent.ConcurrentBag<a> bmnr; // 0x0000
    System.Func<a> bmns; // 0x0000

    // Methods
    void hyd();  // RVA: 0x42DD80
    a wbq();  // RVA: 0x563BC0
    void .ctor(System.Func<a> a);  // RVA: 0x418540
    void wbs();  // RVA: 0x42DD80
    void kbw();  // RVA: 0x42DD80
    void hsz();  // RVA: 0x42DD80
    void wbr(a a);  // RVA: 0x563BC0
};

// Namespace: <global>
class day
{
public:
    // Static fields
    // static Random* bmnt;
    // static Random* bmnu;


    // Methods
    static void hjt(Byte[][] a);  // RVA: 0x67F5A0
    static int64_t wbu(int64_t a, int64_t b);  // RVA: 0x680FF0
    static int64_t zj(int64_t a, int64_t b);  // RVA: 0x681910
    static void laj(Byte[][] a);  // RVA: 0x67FAA0
    static int64_t mwr(int64_t a, int64_t b);  // RVA: 0x680850
    static void .cctor();  // RVA: 0x67F520
    static void wbw(Char[][] a);  // RVA: 0x6814F0
    static int64_t wbx(Random* a, int64_t b, int64_t c);  // RVA: 0x681800
    static void mvs(Char[][] a);  // RVA: 0x680540
    static void ner(Char[][] a);  // RVA: 0x680AC0
    static void wbv(Byte[][] a);  // RVA: 0x681260
    static int32_t wbt(int32_t a, int32_t b);  // RVA: 0x680DD0
    static void wby(Random* a, Char[][] b);  // RVA: 0x681880
    static int64_t hsc(int64_t a, int64_t b);  // RVA: 0x67F830
    static void le(Byte[][] a);  // RVA: 0x680040
    static int64_t mcn(int64_t a, int64_t b);  // RVA: 0x6802D0
    static void lbu(Char[][] a);  // RVA: 0x67FD30
};

// Namespace: <global>
class daz
{
public:
    // Static fields
    // static int64_t bmnv;


    // Methods
    static int64_t wcb();  // RVA: 0x681DF0
    static int64_t wcd();  // RVA: 0x681E30
    static int64_t fqe();  // RVA: 0x681C50
    static int64_t czw();  // RVA: 0x681C10
    static int64_t wbz();  // RVA: 0x681D20
    static double ph();  // RVA: 0x681CB0
    static double czh();  // RVA: 0x681BA0
    static int64_t egr();  // RVA: 0x681C30
    static int64_t hxq();  // RVA: 0x681C70
    static int64_t jep();  // RVA: 0x681C90
    static double wca();  // RVA: 0x681D80
    static int64_t bgv();  // RVA: 0x681B80
    static int64_t wcc();  // RVA: 0x681E10
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
    static uint32_t wce(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x682640
    static uint32_t wcf(Stream* a, int64_t b, uint32_t c);  // RVA: 0x682A70
    static uint32_t kqq(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x682440
    static uint32_t ffw(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x681E50
    static uint32_t hwh(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x682230
    static uint32_t hgf(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x682020
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
    void eag();  // RVA: 0x683390
    void wct();  // RVA: 0x684C30
    static float wcj();  // RVA: 0x684460
    static void wcg();  // RVA: 0x684100
    static void wch();  // RVA: 0x684170
    static float wck();  // RVA: 0x684520
    static void ebj();  // RVA: 0x6834A0
    void lpn();  // RVA: 0x683A10
    void dyh();  // RVA: 0x6832F0
    static float wcl();  // RVA: 0x6845E0
    void Update();  // RVA: 0x682ED0
    void bci();  // RVA: 0x682FD0
    static float wcm();  // RVA: 0x6846A0
    void jou();  // RVA: 0x683760
    void mfq();  // RVA: 0x683CD0
    bool ocu();  // RVA: 0x683E80
    void .ctor();  // RVA: 0x682F90
    static void old();  // RVA: 0x684090
    void wcu(Scene a, LoadSceneMode b);  // RVA: 0x684CD0
    static float wci();  // RVA: 0x6843A0
    static void eox();  // RVA: 0x683510
    void wcs();  // RVA: 0x684B20
    void mfk();  // RVA: 0x683C10
    bool wcq();  // RVA: 0x684840
    static void lvh();  // RVA: 0x683BA0
    bool kgd();  // RVA: 0x683800
    void gl();  // RVA: 0x683690
    void lpu();  // RVA: 0x683AD0
    void wcr();  // RVA: 0x684A50
    void nco();  // RVA: 0x683DE0
    static float wco();  // RVA: 0x684820
    void esv();  // RVA: 0x683580
    bool clp();  // RVA: 0x6830E0
    static float wcn();  // RVA: 0x684760
    static void wcp(float a);  // RVA: 0x684830
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
        void .ctor(StorageDataType type, Byte[][] data);  // RVA: 0x679AE0
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbc
{
public:

    // Methods
    static Color32 ilg(Byte[][] a);  // RVA: 0x684D90
    static c wcy(Byte[][] a);  // RVA: 0x563BC0
    static T wdd(Byte[][] a);  // RVA: 0x563BC0
    static Color32 wcv(Byte[][] a);  // RVA: 0x684DD0
    static Color32 gew(Byte[][] a);  // RVA: 0x684D50
    static d wcz(StorageDataType a, Byte[][] b);  // RVA: 0x563BC0
    static f wdb(StorageDataType a, Byte[][] b);  // RVA: 0x563BC0
    static Byte[][] wda(StorageDataType a, e b);  // RVA: 0x563BC0
    static b wcx(ObscuredPrefsData a);  // RVA: 0x563BC0
    static ObscuredPrefsData wcw(a a);  // RVA: 0x563BC0
    static Byte[][] wdc(T a);  // RVA: 0x563BC0
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
    static StorageDataType wde();  // RVA: 0x421260
    static void .cctor();  // RVA: 0x684E10
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    class UnsupportedDataTypeException : public Exception
    {
    public:
    
        // Methods
        void .ctor(Type* type);  // RVA: 0x679B60
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class HashCheckSumModifierDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x678F90
    Byte[][] Invoke(Il2CppString* input);  // RVA: 0x678E30
    IAsyncResult* BeginInvoke(Il2CppString* input, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x678F60
    Byte[][] EndInvoke(IAsyncResult* result);  // RVA: 0x678E20
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
    void wf(HashCheckSumModifierDelegate* a);  // RVA: 0x685BF0
    static void wdg(Il2CppString* a);  // RVA: 0x685930
    static void wdh();  // RVA: 0x685990
    uint32_t wdp(Il2CppString* a);  // RVA: 0x685C00
    static Il2CppString* lry();  // RVA: 0x685700
    bool wdj();  // RVA: 0x679730
    void wdk(bool a);  // RVA: 0x685A90
    static Il2CppString* wdi();  // RVA: 0x685700
    void .ctor(uint32_t a);  // RVA: 0x6856C0
    static Il2CppString* jfv();  // RVA: 0x685700
    uint32_t wdl();  // RVA: 0x685AA0
    void ivx(bool a);  // RVA: 0x6856F0
    static Il2CppString* grn();  // RVA: 0x685700
    void bvv(bool a);  // RVA: 0x6856F0
    void wdm(HashCheckSumModifierDelegate* a);  // RVA: 0x685BF0
    static Il2CppString* eoa();  // RVA: 0x685700
    static Il2CppString* wdf();  // RVA: 0x685880
    uint32_t nkh(Il2CppString* a);  // RVA: 0x685750
    void wdn(bool a);  // RVA: 0x6856F0
    void wdo();  // RVA: 0x685740
    void dcm(bool a);  // RVA: 0x6856F0
    void mwq(bool a);  // RVA: 0x6856F0
    void ksx();  // RVA: 0x685740
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
    DeviceLockLevel wdq();  // RVA: 0x679A10
    void wdr(DeviceLockLevel a);  // RVA: 0x685D70
    DeviceLockTamperingSensitivity wds();  // RVA: 0x685D80
    void wdt(DeviceLockTamperingSensitivity a);  // RVA: 0x685D90
    void .ctor(DeviceLockLevel a, DeviceLockTamperingSensitivity b);  // RVA: 0x685D30
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
        void .ctor();  // RVA: 0x678EF0
    };

    // Namespace: CodeStage.AntiCheat.Storage
    class PersistentDataPathException : public BackgroundThreadAccessException
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x679B00
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
    ObscuredFileWriteResult wed(Byte[][] a);  // RVA: 0x686860
    void wdv(Action* a);  // RVA: 0x68B3F0
    ObscuredFileReadResult j();  // RVA: 0x688AB0
    ObscuredFileHeader jlc(Stream* a);  // RVA: 0x686890
    Il2CppString* jky(Il2CppString* a);  // RVA: 0x689720
    ObscuredFileWriteResult cv(Byte[][] a);  // RVA: 0x6868F0
    ObscuredFileWriteResult bu(Byte[][] a);  // RVA: 0x686360
    ObscuredFileHeader cxx(Stream* a);  // RVA: 0x686890
    ObscuredFileReadResult wef();  // RVA: 0x68B6B0
    void omu(Stream* a, DeviceLockLevel b);  // RVA: 0x68B230
    void ghw(Stream* a);  // RVA: 0x686E30
    void .ctor(Il2CppString* a, dbq* b);  // RVA: 0x685E20
    void vw(Stream* a, DeviceLockLevel b);  // RVA: 0x68B2C0
    void wdu(Action* a);  // RVA: 0x68B350
    void wej(Stream* a, DeviceLockLevel b);  // RVA: 0x68C890
    ObscuredFileWriteResult mbl(Byte[][] a);  // RVA: 0x68A830
    void gok(Stream* a);  // RVA: 0x686EA0
    ObscuredFileReadResult wee();  // RVA: 0x686DF0
    ObscuredFileReadResult exj();  // RVA: 0x686DF0
    static void .cctor();  // RVA: 0x685DA0
    Il2CppString* wek(Il2CppString* a);  // RVA: 0x68C920
    void .ctor(Il2CppString* a);  // RVA: 0x685F20
    ObscuredFileWriteResult nzb(Byte[][] a);  // RVA: 0x68AD30
    ObscuredFileWriteResult weh(Byte[][] a);  // RVA: 0x68C320
    dbq* wdy();  // RVA: 0x63AEB0
    bool wdz();  // RVA: 0x68B5D0
    ObscuredFileHeader cjd(Stream* a);  // RVA: 0x686890
    void wdw(Action* a);  // RVA: 0x68B490
    static void web(Il2CppString* a);  // RVA: 0x68B5F0
    void hvp(Stream* a);  // RVA: 0x687B80
    Il2CppString* klx(Il2CppString* a);  // RVA: 0x689970
    void boe(Stream* a, DeviceLockLevel b);  // RVA: 0x6862D0
    ObscuredFileReadResult idr();  // RVA: 0x687BF0
    Il2CppString* beh(Il2CppString* a);  // RVA: 0x686080
    void .ctor();  // RVA: 0x685FC0
    ObscuredFileWriteResult cdl(Byte[][] a);  // RVA: 0x686860
    Il2CppString* wea();  // RVA: 0x68B5E0
    void wei(Stream* a);  // RVA: 0x68C820
    ObscuredFileHeader kcj(Stream* a);  // RVA: 0x686890
    ObscuredFileReadResult jfq();  // RVA: 0x686DF0
    void .ctor(dbr* a);  // RVA: 0x685E80
    ObscuredFileReadResult gta();  // RVA: 0x686F10
    Il2CppString* idt(Il2CppString* a);  // RVA: 0x688860
    void wec();  // RVA: 0x68B680
    void wdx(Action* a);  // RVA: 0x68B530
    ObscuredFileReadResult lai();  // RVA: 0x689BC0
    ObscuredFileHeader weg(Stream* a);  // RVA: 0x686890
    ObscuredFileReadResult nnt();  // RVA: 0x686DF0
    ObscuredFileReadResult fix();  // RVA: 0x686DF0
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
    static void ojf(Stream* a, Stream* b, dbp* c);  // RVA: 0x68CF20
    static void wem(Stream* a, Stream* b, dbp* c);  // RVA: 0x68CF20
    static void gyr(Stream* a, Stream* b, dbp* c);  // RVA: 0x68CC90
    static void ps(Stream* a, Stream* b, dbp* c);  // RVA: 0x68CC90
    static void wep(Stream* a, uint32_t b);  // RVA: 0x68D000
    static uint32_t wen(Stream* a);  // RVA: 0x68CE30
    static void nvx(Stream* a, Stream* b, dbp* c);  // RVA: 0x68CE70
    static uint32_t weq(Stream* a);  // RVA: 0x68CE30
    static void nha(Stream* a, Stream* b, dbp* c);  // RVA: 0x68CC90
    static uint32_t leh(Stream* a);  // RVA: 0x68CD80
    static uint32_t iqj(Byte[][] a);  // RVA: 0x68CD40
    static uint32_t wes(Byte[][] a);  // RVA: 0x68D0E0
    static void wel(Stream* a, Stream* b, dbp* c);  // RVA: 0x68CC90
    static uint32_t mkk(Byte[][] a);  // RVA: 0x68CDC0
    static uint32_t noo(Stream* a);  // RVA: 0x68CE30
    static void wer(Stream* a, Stream* b, dbp* c);  // RVA: 0x68CC90
    static uint32_t nez(Byte[][] a);  // RVA: 0x68CDD0
    static uint32_t opx(Stream* a);  // RVA: 0x68CF30
    static uint32_t fgc(Stream* a);  // RVA: 0x68CBA0
    static void fls(Stream* a, Stream* b, dbp* c);  // RVA: 0x68CBE0
    static uint32_t nkk(Stream* a);  // RVA: 0x68CDF0
    static uint32_t weo(Stream* a);  // RVA: 0x68CF70
    static void mrt(Stream* a, Stream* b, dbp* c);  // RVA: 0x68CC90
    static void wet(Stream* a, Stream* b, dbp* c);  // RVA: 0x68D100
    static uint32_t ivo(Byte[][] a);  // RVA: 0x68CD60
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
        uint8_t get_Byte1();  // RVA: 0x679160
        void set_Byte1(uint8_t value);  // RVA: 0x679200
        uint8_t get_Byte2();  // RVA: 0x6791B0
        void set_Byte2(uint8_t value);  // RVA: 0x679210
        uint8_t get_Byte3();  // RVA: 0x6791C0
        void set_Byte3(uint8_t value);  // RVA: 0x679220
        uint8_t get_Byte4();  // RVA: 0x6791D0
        void set_Byte4(uint8_t value);  // RVA: 0x679230
        uint8_t get_Version();  // RVA: 0x6791F0
        void set_Version(uint8_t value);  // RVA: 0x679250
        ObscurationMode get_ObscurationMode();  // RVA: 0x6791E0
        void set_ObscurationMode(ObscurationMode value);  // RVA: 0x679240
        bool IsValid();  // RVA: 0x679180
        void weu(Stream* a);  // RVA: 0x679260
        static void wev(Stream* a, ObscurationMode b);  // RVA: 0x679320
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
        ObscuredFileErrorCode get_ErrorCode();  // RVA: 0x679160
        Exception* get_Exception();  // RVA: 0x679170
        void .ctor(ObscuredFileErrorCode code);  // RVA: 0x679140
        void .ctor(Exception* exception);  // RVA: 0x679130
        Il2CppString* ToString();  // RVA: 0x679050
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
        bool wew();  // RVA: 0x679740
        Byte[][] get_Data();  // RVA: 0x679710
        bool wex();  // RVA: 0x679770
        bool get_DataIsNotGenuine();  // RVA: 0x679700
        bool get_DataFromAnotherDevice();  // RVA: 0x6796F0
        ObscuredFileError get_Error();  // RVA: 0x679720
        bool get_IsValid();  // RVA: 0x679730
        void .ctor(Byte[][] data, bool dataIsNotGenuine, bool dataFromAnotherDevice);  // RVA: 0x6796A0
        void .ctor(ObscuredFileError error);  // RVA: 0x679650
        static ObscuredFileReadResult wey(Exception* a);  // RVA: 0x679780
        static ObscuredFileReadResult wez(ObscuredFileErrorCode a);  // RVA: 0x679800
        Il2CppString* ToString();  // RVA: 0x6793E0
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
        bool wfa();  // RVA: 0x679A20
        ObscuredFileError get_Error();  // RVA: 0x679A00
        bool get_IsValid();  // RVA: 0x679A10
        void .ctor(ObscuredFileErrorCode result);  // RVA: 0x6799B0
        void .ctor(ObscuredFileError error);  // RVA: 0x679980
        static ObscuredFileWriteResult wfb(Exception* a);  // RVA: 0x679A30
        static ObscuredFileWriteResult wfc(ObscuredFileErrorCode a);  // RVA: 0x679A80
        Il2CppString* ToString();  // RVA: 0x679880
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
    static void iym(bool a);  // RVA: 0x690F40
    static Il2CppString* whk();  // RVA: 0x697290
    static ObscuredFileWriteResult mlh(Byte[][] a);  // RVA: 0x692B00
    static ObscuredLong wgl(Il2CppString* a, ObscuredLong b);  // RVA: 0x696250
    static void lcf(Il2CppString* a, ObscuredULong b);  // RVA: 0x6924C0
    static void bpq();  // RVA: 0x68DB50
    static void wfu(Il2CppString* a, ObscuredULong b);  // RVA: 0x6955A0
    static ObscuredDateTimeOffset wge(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x695C10
    static dbg* dbi(Il2CppString* a, dbq* b);  // RVA: 0x68E6B0
    static ObscuredVector2Int wgu(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6968D0
    static void whq(dbl* a);  // RVA: 0x697520
    static void wfo(Il2CppString* a, ObscuredLong b);  // RVA: 0x695250
    static void ont(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x694780
    static void mxb(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6932F0
    static void gqs();  // RVA: 0x68FAF0
    static ObscuredFileWriteResult whn();  // RVA: 0x6973E0
    static void wft(Il2CppString* a, ObscuredUInt b);  // RVA: 0x695520
    static void wfj(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x694F30
    static ObscuredBool wga(Il2CppString* a, ObscuredBool b);  // RVA: 0x695950
    static ObscuredChar wgc(Il2CppString* a, ObscuredChar b);  // RVA: 0x695A90
    static void omf(Il2CppString* a, ObscuredSByte b);  // RVA: 0x694700
    static ObscuredFileReadResult kol();  // RVA: 0x691C30
    static dbl* whp();  // RVA: 0x6974D0
    static ObscuredLong fbg(Il2CppString* a, ObscuredLong b);  // RVA: 0x68F000
    static ObscuredDecimal wgf(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x695D00
    static ObscuredFileWriteResult wij();  // RVA: 0x698A80
    static ObscuredDateTime wgd(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x695B50
    static void wic();  // RVA: 0x698290
    static void gyv(Il2CppString* a, ObscuredString* b);  // RVA: 0x68FD60
    static void gts(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x68FCB0
    static ObscuredDouble ibb(Il2CppString* a, ObscuredDouble b);  // RVA: 0x690710
    static ObscuredVector2 wgt(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x696800
    static ObscuredChar mgk(Il2CppString* a, ObscuredChar b);  // RVA: 0x692970
    static void wil(Il2CppString* a, d b);  // RVA: 0x563BC0
    static void wha(Action* a);  // RVA: 0x696E70
    static ObscuredString* wgp(Il2CppString* a, ObscuredString* b);  // RVA: 0x696550
    static ObscuredSByte wgn(Il2CppString* a, ObscuredSByte b);  // RVA: 0x696410
    static void wfe(Il2CppString* a, ObscuredByte b);  // RVA: 0x694C30
    static void bth(bool a);  // RVA: 0x68DD10
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> gaf();  // RVA: 0x68F570
    static ObscuredULong wgr(Il2CppString* a, ObscuredULong b);  // RVA: 0x696680
    static ObscuredUInt pr(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6949A0
    static bool cuw(Il2CppString* a);  // RVA: 0x68E570
    static void wfm(Il2CppString* a, ObscuredGuid b);  // RVA: 0x695120
    static void wfs(Il2CppString* a, ObscuredString* b);  // RVA: 0x6954A0
    static void cge(Il2CppString* a, bool b);  // RVA: 0x68E1D0
    static void whs(bool a);  // RVA: 0x6976A0
    static ObscuredUInt foe(Il2CppString* a, ObscuredUInt b);  // RVA: 0x68F280
    static ObscuredQuaternion wgm(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x696310
    static void wfk(Il2CppString* a, ObscuredDouble b);  // RVA: 0x694FE0
    static void jhy(Il2CppString* a, ObscuredShort b);  // RVA: 0x691300
    static void ola(Il2CppString* a, ObscuredByte b);  // RVA: 0x694440
    static ObscuredLong gks(Il2CppString* a, ObscuredLong b);  // RVA: 0x68FA30
    static ObscuredVector2Int mby(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6928B0
    static bool whf();  // RVA: 0x6970D0
    static void wgx(Action* a);  // RVA: 0x696B90
    static void whh(bool a);  // RVA: 0x697180
    static void bke(Il2CppString* a, ObscuredInt b);  // RVA: 0x68DAD0
    static void dxl(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68ED50
    static void wfn(Il2CppString* a, ObscuredInt b);  // RVA: 0x6951D0
    static ObscuredFileReadResult whl();  // RVA: 0x6972E0
    static ObscuredChar cwu(Il2CppString* a, ObscuredChar b);  // RVA: 0x68E5F0
    static void lul(Il2CppString* a, ObscuredULong b);  // RVA: 0x692650
    static dbg* whr();  // RVA: 0x697590
    static void kp(Il2CppString* a);  // RVA: 0x691E10
    static ObscuredUShort jpx(Il2CppString* a, ObscuredUShort b);  // RVA: 0x691670
    static ObscuredLong gtq(Il2CppString* a, ObscuredLong b);  // RVA: 0x68FBF0
    static void wfw(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6956C0
    static void wht(Il2CppString* a, bool b);  // RVA: 0x697760
    static ObscuredBigInteger heq(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6901E0
    static void whv(Il2CppString* a, dbq* b, bool c);  // RVA: 0x697890
    static void wfr(Il2CppString* a, ObscuredShort b);  // RVA: 0x695410
    static ObscuredByte wgb(Il2CppString* a, ObscuredByte b);  // RVA: 0x695A10
    static void why(bool a);  // RVA: 0x697FC0
    static void wfp(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6952E0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wii();  // RVA: 0x698680
    static void wib(Il2CppString* a);  // RVA: 0x6981A0
    static void mny(Il2CppString* a, ObscuredGuid b);  // RVA: 0x692E80
    static void mzz(Il2CppString* a, ObscuredShort b);  // RVA: 0x693490
    static void wid(Il2CppString* a, a b);  // RVA: 0x563BC0
    static ObscuredVector3 wgv(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x696990
    static void ezc(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68EF60
    static void oli(Il2CppString* a, dbq* b, bool c);  // RVA: 0x6944C0
    static void wih();  // RVA: 0x698610
    static void isj(Il2CppString* a);  // RVA: 0x690D50
    static void whd(bool a);  // RVA: 0x697010
    static bool whc();  // RVA: 0x696FC0
    static void yu();  // RVA: 0x699060
    static ObscuredSByte eeh(Il2CppString* a, ObscuredSByte b);  // RVA: 0x68EDE0
    static ObscuredDateTimeOffset cls(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x68E320
    static ObscuredByte hsu(Il2CppString* a, ObscuredByte b);  // RVA: 0x6905D0
    static void kly(Il2CppString* a, ObscuredByte b);  // RVA: 0x691A80
    static void eyi(Il2CppString* a, ObscuredByte b);  // RVA: 0x68EEE0
    static ObscuredDateTimeOffset kvc(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x692030
    static void ktt(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x691F80
    static ObscuredSByte knt(Il2CppString* a, ObscuredSByte b);  // RVA: 0x691B00
    static void or(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6948B0
    static void g(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x68F4C0
    static void dly(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x68EB00
    static ObscuredUInt wgq(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6965D0
    static void whw();  // RVA: 0x697AD0
    static ObscuredInt wgk(Il2CppString* a, ObscuredInt b);  // RVA: 0x6961A0
    static dbg* ihb(Il2CppString* a, dbq* b);  // RVA: 0x6908D0
    static void fji(Il2CppString* a, ObscuredString* b);  // RVA: 0x68F0C0
    static void gsv(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68FB60
    static void wfz(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6958A0
    static void ope(Il2CppString* a, ObscuredDouble b);  // RVA: 0x694810
    static ObscuredDouble wgh(Il2CppString* a, ObscuredDouble b);  // RVA: 0x695F00
    static void wfg(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x694D40
    static ObscuredVector3Int wgw(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x696A90
    static void wfv(Il2CppString* a, ObscuredUShort b);  // RVA: 0x695630
    static dbg* wif(Il2CppString* a, dbq* b);  // RVA: 0x698480
    static ObscuredVector3Int kxs(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x692310
    static void kdx(Il2CppString* a, ObscuredChar b);  // RVA: 0x691910
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> ohb();  // RVA: 0x693F10
    static void lvm(Il2CppString* a, ObscuredInt b);  // RVA: 0x6926E0
    static void yx(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6990D0
    static ObscuredDateTimeOffset mza(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6933A0
    static void cmh(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x68E410
    static void fmp(Il2CppString* a, bool b);  // RVA: 0x68F1F0
    static void hgb(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6903E0
    static void wfx(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x695760
    static void msg(Il2CppString* a, ObscuredShort b);  // RVA: 0x693260
    static void nly(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6937F0
    static System.Collections.Generic.ICollection<System.String> wia();  // RVA: 0x698120
    static void wfy(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6957F0
    static void whx();  // RVA: 0x697C90
    static void lgx();  // RVA: 0x692550
    static void kvo();  // RVA: 0x692120
    static void wff(Il2CppString* a, ObscuredChar b);  // RVA: 0x694CB0
    static void jan(Il2CppString* a, ObscuredFloat b);  // RVA: 0x691020
    static ObscuredGuid wgj(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6960A0
    static void jj(Il2CppString* a, ObscuredFloat b);  // RVA: 0x691390
    static void vj(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x694B10
    static ObscuredFileWriteResult iju();  // RVA: 0x6909F0
    static ObscuredFileReadResult wim();  // RVA: 0x698C60
    static ObscuredVector2Int clg(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x68E260
    static void dqj();  // RVA: 0x68EB90
    static void jct(Il2CppString* a, dbq* b, bool c);  // RVA: 0x6910C0
    static ObscuredVector2Int beu(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x68DA10
    static void bbs(Il2CppString* a, dbq* b, bool c);  // RVA: 0x68D7D0
    static void fjo(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x68F140
    static ObscuredChar ggi(Il2CppString* a, ObscuredChar b);  // RVA: 0x68F970
    static void wfl(Il2CppString* a, ObscuredFloat b);  // RVA: 0x695080
    static ObscuredString* oja(Il2CppString* a, ObscuredString* b);  // RVA: 0x6943C0
    static ObscuredFileWriteResult nzu(Byte[][] a);  // RVA: 0x693A50
    static void whm(ObscuredFileReadResult a);  // RVA: 0x697350
    static void whu(dbq* a, bool b);  // RVA: 0x6977F0
    static void nhl(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x693740
    static void whj(bool a);  // RVA: 0x697230
    static ObscuredLong hvy(Il2CppString* a, ObscuredLong b);  // RVA: 0x690650
    static c wik(Il2CppString* a, c b);  // RVA: 0x563BC0
    static void mna(dbq* a, bool b);  // RVA: 0x692D20
    static bool whz(Il2CppString* a);  // RVA: 0x6980A0
    static ObscuredQuaternion nni(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6938A0
    static void ohs(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x694310
    static ObscuredUShort wgs(Il2CppString* a, ObscuredUShort b);  // RVA: 0x696740
    static void wfq(Il2CppString* a, ObscuredSByte b);  // RVA: 0x695390
    static void jvy(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6917E0
    static ObscuredShort oaq(Il2CppString* a, ObscuredShort b);  // RVA: 0x693C70
    static ObscuredFloat wgi(Il2CppString* a, ObscuredFloat b);  // RVA: 0x695FE0
    static ObscuredString* kqf(Il2CppString* a, ObscuredString* b);  // RVA: 0x691F00
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> bwm();  // RVA: 0x68DDD0
    static ObscuredFileWriteResult win(Byte[][] a);  // RVA: 0x698E40
    static ObscuredDouble ics(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6907F0
    static void lbo(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x692410
    static void fos(Il2CppString* a, ObscuredLong b);  // RVA: 0x68F330
    static ObscuredVector2 mig(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x692A30
    static ObscuredVector2 iov(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x690C80
    static void ofg(Il2CppString* a, ObscuredDouble b);  // RVA: 0x693E70
    static ObscuredShort wgo(Il2CppString* a, ObscuredShort b);  // RVA: 0x696490
    static void wig();  // RVA: 0x6985A0
    static void jrc(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x691730
    static void jlv(Il2CppString* a, dbq* b, bool c);  // RVA: 0x691430
    static void nsk(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6939A0
    static ObscuredVector3Int hff(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6902E0
    static void kfe(bool a);  // RVA: 0x6919A0
    static void hgh(bool a);  // RVA: 0x690490
    static ObscuredUInt koj(Il2CppString* a, ObscuredUInt b);  // RVA: 0x691B80
    static void csg(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x68E4C0
    static void oen(dbq* a, bool b);  // RVA: 0x693DD0
    static void oc(dbq* a, bool b);  // RVA: 0x693D30
    static void osl();  // RVA: 0x694930
    static void eis(Il2CppString* a, ObscuredInt b);  // RVA: 0x68EE60
    static void wfh(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x694DD0
    static ObscuredSByte hjw(Il2CppString* a, ObscuredSByte b);  // RVA: 0x690550
    static b wie(Il2CppString* a, b b);  // RVA: 0x563BC0
    static void wfi(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x694E80
    static bool whi();  // RVA: 0x6971E0
    static ObscuredUInt iok(Il2CppString* a, ObscuredUInt b);  // RVA: 0x690BD0
    static void dgz();  // RVA: 0x68E7D0
    static ObscuredShort uy(Il2CppString* a, ObscuredShort b);  // RVA: 0x694A50
    static void .cctor();  // RVA: 0x68D750
    static void wfd(Il2CppString* a, ObscuredBool b);  // RVA: 0x694BA0
    static ObscuredChar mnp(Il2CppString* a, ObscuredChar b);  // RVA: 0x692DC0
    static void wgz(Action* a);  // RVA: 0x696D70
    static bool Save();  // RVA: 0x68D200
    static ObscuredVector2Int mbk(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6927F0
    static void ltj(Il2CppString* a, ObscuredLong b);  // RVA: 0x6925C0
    static ObscuredBigInteger wgg(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x695E00
    static void mam(Il2CppString* a, ObscuredLong b);  // RVA: 0x692760
    static void who(ObscuredFileWriteResult a);  // RVA: 0x697450
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> he();  // RVA: 0x68FDE0
    static ObscuredBigInteger fyh(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x68F3C0
    static void wgy(Action* a);  // RVA: 0x696C80
    static void jwy(Il2CppString* a, ObscuredUShort b);  // RVA: 0x691880
    static bool whe();  // RVA: 0x697070
    static dbq* whb();  // RVA: 0x696F70
    static void mrp();  // RVA: 0x692F30
    static bool whg();  // RVA: 0x697130
    static ObscuredVector3 iwx(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x690E40
    static ObscuredFileWriteResult nar(Byte[][] a);  // RVA: 0x693520
};

// Namespace: <global>
class dbj
{
public:
    // Static fields
    // static bool bmqw;


    // Methods
    static void wit();  // RVA: 0x699CB0
    static void wio();  // RVA: 0x699930
    static void ggz();  // RVA: 0x6994E0
    static bool ccj();  // RVA: 0x699160
    static void hmy(bool a);  // RVA: 0x699750
    static void lqn(bool a);  // RVA: 0x699840
    static bool els();  // RVA: 0x699160
    static void wir(bool a);  // RVA: 0x699BB0
    static bool wip();  // RVA: 0x699160
    static void wiq(bool a);  // RVA: 0x699BA0
    static void wis(bool a);  // RVA: 0x699BC0
    static void dsd(bool a);  // RVA: 0x699180
    static void etd();  // RVA: 0x699270
    static bool dsw();  // RVA: 0x699160
};

// Namespace: <global>
class dbk
{
public:

    // Methods
    static ObscuredPrefsData wiu(a a, dbl* b);  // RVA: 0x563BC0
    static b wiv(ObscuredPrefsData a, dbl* b);  // RVA: 0x563BC0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wix(Byte[][] a, dbl* b);  // RVA: 0x699EF0
    static Byte[][] wiw(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x699E80
    static dbn* wiy(dbl* a);  // RVA: 0x699FC0
    static Byte[][] eut(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x699E10
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
    ACTkSerializationKind wiz();  // RVA: 0x678C30
    void .ctor(ACTkSerializationKind a);  // RVA: 0x6856C0
};

// Namespace: <global>
class dbm
{
public:
    // Static fields
    // static uint8_t bmqy;
    // static dbm* bmqz;


    // Methods
    Byte[][] wjd(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x69A4C0
    static dbn* h();  // RVA: 0x69A160
    void .ctor();  // RVA: 0x628390
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> olg(BinaryReader* a);  // RVA: 0x69A320
    void mlg(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x69A280
    void wjf(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x69A280
    b wjc(ObscuredPrefsData a);  // RVA: 0x563BC0
    static dbn* kcn();  // RVA: 0x69A1F0
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wjg(BinaryReader* a);  // RVA: 0x69ACC0
    ObscuredPrefsData wjb(a a);  // RVA: 0x563BC0
    static dbn* gun();  // RVA: 0x69A0D0
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wje(Byte[][] a);  // RVA: 0x69A8B0
    static dbn* wja();  // RVA: 0x69A430
    void mxg(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x69A280
};

// Namespace: <global>
class dbn
{
public:

    // Methods
    ObscuredPrefsData wjb(a a);  // RVA: 0x563BC0
    b wjc(ObscuredPrefsData a);  // RVA: 0x563BC0
    Byte[][] wjd(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x4193D0
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wje(Byte[][] a);  // RVA: 0x4193D0
};

// Namespace: <global>
class dbo
{
public:
    // Static fields
    // static dbo* bmra;


    // Methods
    Byte[][] wjd(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x69ADD0
    b wjc(ObscuredPrefsData a);  // RVA: 0x563BC0
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wje(Byte[][] a);  // RVA: 0x69AE10
    static dbn* wjh();  // RVA: 0x69AE50
    void .ctor();  // RVA: 0x628390
    ObscuredPrefsData wjb(a a);  // RVA: 0x563BC0
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
    ObscurationMode wji();  // RVA: 0x679A10
    Byte[][] wjj();  // RVA: 0x69B000
    void .ctor(Il2CppString* a);  // RVA: 0x69AEE0
    void .ctor(Byte[][] a);  // RVA: 0x69AFB0
};

// Namespace: <global>
class dbq
{
public:

    // Methods
    ObscuredFileLocation wjk();  // RVA: 0x4211E0
    dbp* wjl();  // RVA: 0x41C1E0
    dbf* wjm();  // RVA: 0x41C1E0
    bool wjn();  // RVA: 0x4211E0
    bool wjo();  // RVA: 0x4211E0
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
    ObscuredFileLocation wjk();  // RVA: 0x679A10
    void wjp(ObscuredFileLocation a);  // RVA: 0x685D70
    dbp* wjl();  // RVA: 0x69B000
    void wjq(dbp* a);  // RVA: 0x685BF0
    dbf* wjm();  // RVA: 0x63AEB0
    void wjr(dbf* a);  // RVA: 0x63AEC0
    bool wjn();  // RVA: 0x63AED0
    void wjs(bool a);  // RVA: 0x63AEE0
    bool wjo();  // RVA: 0x69B2F0
    void wjt(bool a);  // RVA: 0x69B300
    void .ctor();  // RVA: 0x69B0C0
    void .ctor(ObscuredFileLocation a);  // RVA: 0x69B190
    void .ctor(dbf* a);  // RVA: 0x69B010
    void .ctor(dbp* a, dbf* b, ObscuredFileLocation c, bool d, bool e);  // RVA: 0x69B270
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
    static void mec(Il2CppString* a, float b);  // RVA: 0x6A1610
    static void wma(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6A5840
    static float frm(Il2CppString* a, float b);  // RVA: 0x69D8A0
    static Il2CppString* wnh(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A7A70
    static ObscuredInt cok(Il2CppString* a, ObscuredInt b);  // RVA: 0x69BCA0
    static void wnv(Action* a);  // RVA: 0x6A94B0
    static ObscuredFloat tb(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A3500
    static void dhl(Il2CppString* a, ObscuredULong b);  // RVA: 0x69BDF0
    static Byte[][] exo(uint8_t a, int32_t b);  // RVA: 0x69D390
    static ObscuredDecimal egr(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69CD20
    static bool bqs(Il2CppString* a, Il2CppString* b);  // RVA: 0x69B680
    static Decimal wkf(Il2CppString* a, Decimal defaultValue);  // RVA: 0x6A3B50
    static void ejp(Il2CppString* a, ObscuredULong b);  // RVA: 0x69CE20
    static void gxf(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69E920
    static ObscuredVector2Int kdk(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6A03B0
    static Il2CppString* wjx(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A37C0
    static ObscuredVector2 jrp(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6A01D0
    static ObscuredVector2 mux(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6A1EB0
    static ObscuredQuaternion wmn(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6A62B0
    static void ebg(Il2CppString* a, ObscuredByte b);  // RVA: 0x69CAE0
    static ObscuredQuaternion mvq(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6A1F80
    static ObscuredBool dot(Il2CppString* a, ObscuredBool b);  // RVA: 0x69C070
    static ObscuredVector3Int ndr(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6A2100
    static void hd(Il2CppString* a, ObscuredUInt b);  // RVA: 0x69EB10
    static void cmp(Il2CppString* a, ObscuredGuid b);  // RVA: 0x69BBF0
    static ObscuredVector3 mdd(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6A1510
    static Vector3 wku(Il2CppString* a, Vector3 b);  // RVA: 0x6A4520
    static Color32 wla(Il2CppString* a, Color32 b);  // RVA: 0x6A48F0
    static void hvl();  // RVA: 0x69F080
    static Byte[][] wnd(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x6A6F10
    static b wnc(Il2CppString* a, Il2CppString* b, b c, Il2CppString* d);  // RVA: 0x563BC0
    static void wke(Il2CppString* a, Decimal b);  // RVA: 0x6A3AD0
    static void eva(Il2CppString* a, ObscuredBool b);  // RVA: 0x69D0D0
    static void wlb(Il2CppString* a, Rect b);  // RVA: 0x6A4960
    static void wjy(Il2CppString* a, float b);  // RVA: 0x6A3830
    static Vector3 wkt(Il2CppString* a);  // RVA: 0x6A4410
    static ObscuredShort wmp(Il2CppString* a, ObscuredShort b);  // RVA: 0x6A6430
    static ObscuredGuid wmk(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6A6040
    static Il2CppString* jnv(Il2CppString* a, Il2CppString* b);  // RVA: 0x69FF50
    static ObscuredVector2 fw(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x69D910
    static void wlr(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6A5330
    static void kuh(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A0ED0
    static e woo(Il2CppString* a, e b);  // RVA: 0x563BC0
    static void wlz(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6A5790
    static void wkv(Il2CppString* a, Quaternion b);  // RVA: 0x6A45D0
    static void wlt(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A5440
    static Byte[][] wnk(Il2CppString* a);  // RVA: 0x6A8B00
    static void wlp(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A51F0
    static Quaternion wkw(Il2CppString* a);  // RVA: 0x6A4650
    static ObscuredUShort wmt(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6A66E0
    static void nhu(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A2300
    static void gii(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x69E0F0
    static void wlx(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6A5660
    static void kfw();  // RVA: 0x6A0470
    static void wlw(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6A55D0
    static Il2CppString* wnn();  // RVA: 0x6A8D50
    static void wly(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6A5700
    static void wju(Il2CppString* a, int32_t b);  // RVA: 0x6A3670
    static Il2CppString* wor(Il2CppString* a, Il2CppString* b);  // RVA: 0x69B6E0
    static ObscuredInt hud(Il2CppString* a, ObscuredInt b);  // RVA: 0x69EFD0
    static Il2CppString* wmz(Il2CppString* a);  // RVA: 0x6A6DB0
    static void wlq(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6A5280
    static ObscuredLong lmz(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A11A0
    static void hkd(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x69EBF0
    static void mtl(Il2CppString* a, ObscuredULong b);  // RVA: 0x6A1E20
    static void wog(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A9B90
    static ObscuredDateTimeOffset wmf(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6A5BB0
    static void brb();  // RVA: 0x69B700
    static void ecr();  // RVA: 0x69CB60
    static bool hen(Il2CppString* a, Il2CppString* b);  // RVA: 0x69EB90
    static bool bpw(Il2CppString* a, Il2CppString* b);  // RVA: 0x69B620
    static ObscuredChar wmd(Il2CppString* a, ObscuredChar b);  // RVA: 0x6A5A30
    static ObscuredSByte wmo(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6A63B0
    static ObscuredUInt vj(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6A35C0
    static Il2CppString* iej(Il2CppString* a);  // RVA: 0x69F350
    static void wnw(Action* a);  // RVA: 0x6A95B0
    static ObscuredULong wms(Il2CppString* a, ObscuredULong b);  // RVA: 0x6A6620
    static void wki(Il2CppString* a, uint64_t b);  // RVA: 0x6A3CD0
    static ObscuredVector2 wmu(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6A67A0
    static ObscuredDouble diy(Il2CppString* a, ObscuredDouble b);  // RVA: 0x69BF20
    static ObscuredVector3 wmw(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6A6930
    static void nke();  // RVA: 0x6A2380
    static void wlk(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6A4ED0
    static void wkc(Il2CppString* a, double b);  // RVA: 0x6A39F0
    static Byte[][] dwm(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x69C890
    static void esv(Il2CppString* a, float b);  // RVA: 0x69D060
    static void wnq(Action* a);  // RVA: 0x6A8FB0
    static void wls(Il2CppString* a, ObscuredShort b);  // RVA: 0x6A53B0
    static Il2CppString* mnn(Il2CppString* a, Il2CppString* b);  // RVA: 0x69B6E0
    static Byte[][] wnf(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A73D0
    static ObscuredInt wml(Il2CppString* a, ObscuredInt b);  // RVA: 0x6A6140
    static ObscuredInt buw(Il2CppString* a, ObscuredInt b);  // RVA: 0x69B820
    static bool wni(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A7BF0
    static Byte[][] wnj(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x6A8A10
    static void wky(Il2CppString* a, Color32 b);  // RVA: 0x6A47E0
    static Il2CppString* hcs(Il2CppString* a);  // RVA: 0x69EA50
    static Il2CppString* lhe(Il2CppString* a, Il2CppString* b);  // RVA: 0x69B6E0
    static void hbp(Il2CppString* a, Il2CppString* b);  // RVA: 0x69C1A0
    static void dru(Il2CppString* a, Il2CppString* b);  // RVA: 0x69C1A0
    static bool wob();  // RVA: 0x6A9930
    static void fjg(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x69D6C0
    static ObscuredBigInteger jcz(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x69FA50
    static void wns(Action* a);  // RVA: 0x6A91B0
    static int64_t wkh(Il2CppString* a, int64_t b);  // RVA: 0x6A3C60
    static void Save();  // RVA: 0x69B310
    static ObscuredShort eex(Il2CppString* a, ObscuredShort b);  // RVA: 0x69CC60
    static Il2CppString* oqw(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x6A2F90
    static Byte[][] ksa(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A09A0
    static ObscuredVector2Int wmv(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6A6870
    static Il2CppString* opo(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x6A2B60
    static ObscuredVector3Int wmx(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6A6A30
    static void fjs(Il2CppString* a, ObscuredInt b);  // RVA: 0x69D770
    static Char[][] wmy(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A6B30
    static ObscuredByte wmc(Il2CppString* a, ObscuredByte b);  // RVA: 0x6A59B0
    static void woe(bool a);  // RVA: 0x6A9AF0
    static void fdw(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x69D4D0
    static void wnt(Action* a);  // RVA: 0x6A92B0
    static void wlu(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6A54C0
    static void wlg(Il2CppString* a, ObscuredChar b);  // RVA: 0x6A4C50
    static void woj(Il2CppString* a);  // RVA: 0x6A9D70
    static void wok();  // RVA: 0x6A9DF0
    static Byte[][] oiw(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x6A29C0
    static void ofk(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6A2910
    static void wjw(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A3750
    static d won(Il2CppString* a, d b);  // RVA: 0x563BC0
    static ObscuredUInt wmr(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6A6570
    static Il2CppString* wnm();  // RVA: 0x6A8D00
    static Vector2 wkq(Il2CppString* a);  // RVA: 0x6A4240
    static Char[][] jmg(Il2CppString* a, Il2CppString* b);  // RVA: 0x69FC50
    static ObscuredDateTime wme(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6A5AF0
    static void wno(Il2CppString* a);  // RVA: 0x6A8D60
    static void .cctor();  // RVA: 0x69B3B0
    static void jng(Il2CppString* a, ObscuredInt b);  // RVA: 0x69FED0
    static void bmw(Il2CppString* a, int32_t b);  // RVA: 0x69B550
    static void lzj(Il2CppString* a, int32_t b);  // RVA: 0x6A1320
    static ObscuredVector2Int lsj(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6A1260
    static dbf* wny();  // RVA: 0x6A97B0
    static Il2CppString* nvu(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A26B0
    static ObscuredChar oae(Il2CppString* a, ObscuredChar b);  // RVA: 0x6A27E0
    static Il2CppString* fxu(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x69D9E0
    static void wlf(Il2CppString* a, ObscuredByte b);  // RVA: 0x6A4BD0
    static Byte[][] wkn(Il2CppString* a, uint8_t b, int32_t c);  // RVA: 0x6A3F00
    static void guy(Il2CppString* a, ObscuredChar b);  // RVA: 0x69E890
    static bool woi(Il2CppString* a);  // RVA: 0x6A9CB0
    static ObscuredBigInteger jqg(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6A00D0
    static bool woh(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x6A9BF0
    static void kfx();  // RVA: 0x6A0590
    static uint64_t wkj(Il2CppString* a, uint64_t b);  // RVA: 0x6A3D40
    static Il2CppString* fbu(Il2CppString* a);  // RVA: 0x69D410
    static ObscuredBool dyl(Il2CppString* a, ObscuredBool b);  // RVA: 0x69C960
    static void fii(Il2CppString* a, ObscuredChar b);  // RVA: 0x69D630
    static void hbw(Il2CppString* a, ObscuredInt b);  // RVA: 0x69E9D0
    static ObscuredDecimal enx(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69CEB0
    static void jcj();  // RVA: 0x69F930
    static void mxy(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A2080
    static void hvv(Il2CppString* a, ObscuredChar b);  // RVA: 0x69F1A0
    static Byte[][] iq(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x69F610
    static void gfq(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x69E060
    static Byte[][] wng(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x6A79A0
    static ObscuredLong wmm(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A61F0
    static float wjz(Il2CppString* a, float b);  // RVA: 0x6A38A0
    static void gaq(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69DFB0
    static ObscuredFloat hqq(Il2CppString* a, ObscuredFloat b);  // RVA: 0x69EDA0
    static bool wod();  // RVA: 0x6A9A60
    static void wlo(Il2CppString* a, ObscuredInt b);  // RVA: 0x6A5170
    static ObscuredString* wmq(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A64F0
    static ObscuredLong gai(Il2CppString* a, ObscuredLong b);  // RVA: 0x69DE70
    static Vector2 wkr(Il2CppString* a, Vector2 b);  // RVA: 0x6A4320
    static void ide();  // RVA: 0x69F2B0
    static ObscuredLong led(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A1030
    static void dmf(Il2CppString* a, float b);  // RVA: 0x69C000
    static void nhf(Il2CppString* a, int32_t b);  // RVA: 0x6A2200
    static void jz(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A0350
    static Byte[][] cvt(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x69BD50
    static void wka(Il2CppString* a, uint32_t b);  // RVA: 0x6A3910
    static void eqd(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69CFB0
    static Il2CppString* fwn(Il2CppString* a, Il2CppString* b);  // RVA: 0x69B6E0
    static void wof();  // RVA: 0x685990
    static void ojk(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6A2AB0
    static Rect wld(Il2CppString* a, Rect b);  // RVA: 0x6A4AA0
    static Quaternion wkx(Il2CppString* a, Quaternion b);  // RVA: 0x6A4740
    static ObscuredBigInteger wmh(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6A5DA0
    static void mfr(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6A1730
    static void wkk(Il2CppString* a, bool b);  // RVA: 0x6A3DB0
    static ObscuredDouble wmi(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6A5EA0
    static ObscuredFloat wmj(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A5F80
    static void nhh(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6A2270
    static ObscuredVector3 nre(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6A25B0
    static void wos();  // RVA: 0x6A9FA0
    static float ivr(Il2CppString* a, float b);  // RVA: 0x69F6E0
    static void wnl(Il2CppString* a);  // RVA: 0x6A8C90
    static void wkg(Il2CppString* a, int64_t b);  // RVA: 0x6A3BF0
    static void bdz(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69B4A0
    static void htc(Il2CppString* a, ObscuredSByte b);  // RVA: 0x69EF50
    static ObscuredVector3Int mbh(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6A1390
    static void fkj(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x69D7F0
    static void woa(DeviceLockLevel a);  // RVA: 0x6A9890
    static Byte[][] gju(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x69E1A0
    static Il2CppString* ixo(Il2CppString* a, Il2CppString* b);  // RVA: 0x69F7E0
    static ObscuredDateTime moh(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6A1940
    static void dtd(Il2CppString* a, float b);  // RVA: 0x69C1F0
    static void dwj(Il2CppString* a, ObscuredChar b);  // RVA: 0x69C800
    static ObscuredUShort bwt(Il2CppString* a, ObscuredUShort b);  // RVA: 0x69B990
    static Byte[][] guf(uint8_t a, int32_t b);  // RVA: 0x69E270
    static void wot();  // RVA: 0x6AA0C0
    static ObscuredBigInteger cch(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x69BAF0
    static void wlm(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A5020
    static ObscuredDateTime kqq(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6A0850
    static int32_t wjv(Il2CppString* a, int32_t b);  // RVA: 0x6A36E0
    static Il2CppString* exc(Il2CppString* a);  // RVA: 0x69D2D0
    static void wkm(Il2CppString* a, Byte[][] b);  // RVA: 0x6A3E90
    static ObscuredFloat nzl(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A2720
    static void lmy(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6A10F0
    static ObscuredInt mgt(Il2CppString* a, ObscuredInt b);  // RVA: 0x6A17C0
    static void inm(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x69F4D0
    static void wlh(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6A4CE0
    static void dqb(Il2CppString* a, Il2CppString* b);  // RVA: 0x69C130
    static void wop(Il2CppString* a, Il2CppString* b);  // RVA: 0x69C1A0
    static Il2CppString* wne(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x6A6FB0
    static Byte[][] hxo(uint8_t a, int32_t b);  // RVA: 0x69F230
    static ObscuredLong iht(Il2CppString* a, ObscuredLong b);  // RVA: 0x69F410
    static dbe* wnp();  // RVA: 0x6A8DC0
    static Il2CppString* wnb(Il2CppString* a, a b);  // RVA: 0x563BC0
    static ObscuredSByte evq(Il2CppString* a, ObscuredSByte b);  // RVA: 0x69D160
    static void jfs(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x69FBC0
    static ObscuredChar bvz(Il2CppString* a, ObscuredChar b);  // RVA: 0x69B8D0
    static void orp(Il2CppString* a, ObscuredULong b);  // RVA: 0x6A33C0
    static Color32 wkz(Il2CppString* a);  // RVA: 0x6A4850
    static Byte[][] kkf(uint8_t a, int32_t b);  // RVA: 0x6A07D0
    static void iwu();  // RVA: 0x69F750
    static void mfe(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6A1680
    static void px(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6A3450
    static void jyt(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6A02A0
    static ObscuredDecimal wmg(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6A5CA0
    static void wll(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6A4F80
    static DeviceLockLevel wnz();  // RVA: 0x6A9800
    static void wom(Il2CppString* a, c b);  // RVA: 0x563BC0
    static Rect wlc(Il2CppString* a);  // RVA: 0x6A49E0
    static ObscuredDouble jbl(Il2CppString* a, ObscuredDouble b);  // RVA: 0x69F850
    static void woc(bool a);  // RVA: 0x6A99C0
    static void wkp(Il2CppString* a, Vector2 b);  // RVA: 0x6A41D0
    static void wli(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6A4D70
    static ObscuredQuaternion nnw(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6A24B0
    static void wnu(Action* a);  // RVA: 0x6A93B0
    static ObscuredChar kxf(Il2CppString* a, ObscuredChar b);  // RVA: 0x6A0F70
    static double wkd(Il2CppString* a, double b);  // RVA: 0x6A3A60
    static void wlj(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6A4E20
    static void kgr();  // RVA: 0x6A06B0
    static void ioq(Il2CppString* a, ObscuredShort b);  // RVA: 0x69F580
    static float jej(Il2CppString* a, float b);  // RVA: 0x69FB50
    static StorageDataType yy(Il2CppString* a);  // RVA: 0x6AA1E0
    static void mby(Il2CppString* a, ObscuredInt b);  // RVA: 0x6A1490
    static void krn(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6A0910
    static ObscuredDateTime dz(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x69CA20
    static ObscuredBool wmb(Il2CppString* a, ObscuredBool b);  // RVA: 0x6A58F0
    static void oda(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A28A0
    static void wln(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6A50C0
    static Byte[][] hqv(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x69EE60
    static bool woq(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A9F40
    static void bpg(Il2CppString* a, Il2CppString* b);  // RVA: 0x69B5C0
    static void eew(Il2CppString* a, Il2CppString* b);  // RVA: 0x69CC00
    static void dip();  // RVA: 0x69BE80
    static void gaa(Il2CppString* a, Il2CppString* b);  // RVA: 0x69DE10
    static void wks(Il2CppString* a, Vector3 b);  // RVA: 0x6A4390
    static void fhw(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x69D580
    static void wlv(Il2CppString* a, ObscuredULong b);  // RVA: 0x6A5540
    static void bzg();  // RVA: 0x69BA50
    static void hmo(Il2CppString* a, Il2CppString* b);  // RVA: 0x69C1A0
    static Byte[][] guq(Il2CppString* a, Il2CppString* b);  // RVA: 0x69E2F0
    static Byte[][] mha(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x6A1870
    static void nls(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6A2410
    static void wol();  // RVA: 0x6A9EB0
    static Il2CppString* mrm(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x6A1A00
    static Byte[][] wko(uint8_t a, int32_t b);  // RVA: 0x6A4150
    static Byte[][] dut(Il2CppString* a, Il2CppString* b);  // RVA: 0x69C260
    static uint32_t wkb(Il2CppString* a, uint32_t b);  // RVA: 0x6A3980
    static Il2CppString* bqt(Il2CppString* a, Il2CppString* b);  // RVA: 0x69B6E0
    static void wnr(Action* a);  // RVA: 0x6A90B0
    static ObscuredVector3 ho(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x69ECA0
    static void wle(Il2CppString* a, ObscuredBool b);  // RVA: 0x6A4B40
    static StorageDataType wna(Il2CppString* a);  // RVA: 0x6A6E70
    static ObscuredString* gao(Il2CppString* a, ObscuredString* b);  // RVA: 0x69DF30
    static void wnx(Action* a);  // RVA: 0x6A96B0
    static ObscuredDateTimeOffset ewe(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x69D1E0
    static bool wkl(Il2CppString* a, bool b);  // RVA: 0x6A3E20
};

// Namespace: <global>
class dbt
{
public:

    // Methods
    int32_t wou();  // RVA: 0x420210
    void wov();  // RVA: 0x42DD80
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
        static ObscuredBigInteger op_Implicit(BigInteger value);  // RVA: 0x6ABFC0
        static ObscuredBigInteger op_Implicit(uint8_t value);  // RVA: 0x6AC390
        static ObscuredBigInteger op_Implicit(int8_t value);  // RVA: 0x6AC1B0
        static ObscuredBigInteger op_Implicit(int16_t value);  // RVA: 0x6ABF30
        static ObscuredBigInteger op_Implicit(uint16_t value);  // RVA: 0x6AC420
        static ObscuredBigInteger op_Implicit(int32_t value);  // RVA: 0x6ABE10
        static ObscuredBigInteger op_Implicit(uint32_t value);  // RVA: 0x6ABEA0
        static ObscuredBigInteger op_Implicit(int64_t value);  // RVA: 0x6AC270
        static ObscuredBigInteger op_Implicit(uint64_t value);  // RVA: 0x6AC120
        static ObscuredBigInteger op_Implicit(float value);  // RVA: 0x6AC000
        static ObscuredBigInteger op_Implicit(double value);  // RVA: 0x6AC090
        static ObscuredBigInteger op_Implicit(Decimal value);  // RVA: 0x6AC300
        static BigInteger op_Implicit(ObscuredBigInteger value);  // RVA: 0x6AC240
        static uint8_t wow(ObscuredBigInteger a);  // RVA: 0x6AC510
        static int8_t wox(ObscuredBigInteger a);  // RVA: 0x6AC580
        static int16_t woy(ObscuredBigInteger a);  // RVA: 0x6AC5F0
        static uint16_t woz(ObscuredBigInteger a);  // RVA: 0x6AC660
        static int32_t wpa(ObscuredBigInteger a);  // RVA: 0x6AC6D0
        static uint32_t wpb(ObscuredBigInteger a);  // RVA: 0x6AC740
        static int64_t wpc(ObscuredBigInteger a);  // RVA: 0x6AC7B0
        static uint64_t wpd(ObscuredBigInteger a);  // RVA: 0x6AC820
        static float wpe(ObscuredBigInteger a);  // RVA: 0x6AC890
        static double wpf(ObscuredBigInteger a);  // RVA: 0x6AC900
        static Decimal wpg(ObscuredBigInteger a);  // RVA: 0x6AC970
        static ObscuredBigInteger wph(ObscuredBigInteger a, int32_t b);  // RVA: 0x6ACA00
        static ObscuredBigInteger wpi(ObscuredBigInteger a, int32_t b);  // RVA: 0x6ACB00
        static ObscuredBigInteger wpj(ObscuredBigInteger a);  // RVA: 0x6ACC00
        static ObscuredBigInteger wpk(ObscuredBigInteger a);  // RVA: 0x6ACCF0
        static ObscuredBigInteger wpl(ObscuredBigInteger a);  // RVA: 0x6ACDE0
        static ObscuredBigInteger wpm(ObscuredBigInteger a, int64_t b);  // RVA: 0x6ACED0
        static ObscuredBigInteger wpn(ObscuredBigInteger a, int64_t b);  // RVA: 0x6AD000
        static ObscuredBigInteger wpo(ObscuredBigInteger a);  // RVA: 0x6AD140
        static ObscuredBigInteger wpp(ObscuredBigInteger a);  // RVA: 0x6AD2E0
        static bool wpq(ObscuredBigInteger a, int64_t b);  // RVA: 0x6AD480
        static bool wpr(ObscuredBigInteger a, int64_t b);  // RVA: 0x6AD540
        static bool wps(ObscuredBigInteger a, int64_t b);  // RVA: 0x6AD600
        static bool wpt(ObscuredBigInteger a, int64_t b);  // RVA: 0x6AD6A0
        static bool wpu(ObscuredBigInteger a, int64_t b);  // RVA: 0x6AD740
        static bool wpv(ObscuredBigInteger a, int64_t b);  // RVA: 0x6AD7E0
        static bool wpw(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6AD880
        static bool wpx(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6AD940
        static bool wpy(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6ADA00
        static bool wpz(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6ADAA0
        static bool wqa(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6ADB40
        static bool wqb(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6ADBE0
        static bool wqc(int64_t a, ObscuredBigInteger b);  // RVA: 0x6ADC80
        static bool wqd(int64_t a, ObscuredBigInteger b);  // RVA: 0x6ADD20
        static bool wqe(int64_t a, ObscuredBigInteger b);  // RVA: 0x6ADDC0
        static bool wqf(int64_t a, ObscuredBigInteger b);  // RVA: 0x6ADE60
        static bool wqg(int64_t a, ObscuredBigInteger b);  // RVA: 0x6ADF00
        static bool wqh(int64_t a, ObscuredBigInteger b);  // RVA: 0x6ADFA0
        static bool wqi(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6AE040
        static bool wqj(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6AE0E0
        static bool wqk(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6AE180
        static bool wql(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6AE220
        static bool wqm(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6AE2C0
        static bool wqn(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6AE360
        static ObscuredBigInteger wqo(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6AE400
        static ObscuredBigInteger wqp(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6AE540
        static ObscuredBigInteger wqq(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6AE680
        static ObscuredBigInteger wqr(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6AE7C0
        static ObscuredBigInteger wqs(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6AE900
        static ObscuredBigInteger wqt(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6AEA40
        static ObscuredBigInteger wqu(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6AEB80
        static ObscuredBigInteger wqv(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6AECC0
        static ObscuredBigInteger wqw(ObscuredBigInteger a, int32_t b);  // RVA: 0x6AEE00
        int32_t GetHashCode();  // RVA: 0x6ABA90
        Il2CppString* ToString();  // RVA: 0x6ABB60
        Il2CppString* wqx(Il2CppString* a);  // RVA: 0x6AEEF0
        Il2CppString* wqy(IFormatProvider* a);  // RVA: 0x6AEF70
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6ABBD0
        bool Equals(Il2CppObject* other);  // RVA: 0x6AB7D0
        bool Equals(BigInteger other);  // RVA: 0x6AB740
        bool Equals(ObscuredBigInteger obj);  // RVA: 0x6AB960
        int32_t CompareTo(ObscuredBigInteger other);  // RVA: 0x6AB600
        int32_t CompareTo(BigInteger other);  // RVA: 0x6AB6B0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AB580
        int32_t wqz(int64_t a);  // RVA: 0x6AEFF0
        int32_t wra(uint64_t a);  // RVA: 0x6AF070
        Byte[][] wrb();  // RVA: 0x6AF0F0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6ABB00
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(BigInteger value);  // RVA: 0x6ABC80
        static BigInteger wrc(BigInteger a, uint32_t b);  // RVA: 0x6AF160
        static BigInteger wrd(BigInteger a, uint32_t b);  // RVA: 0x6AF2C0
        static ObscuredBigInteger wre(BigInteger a, uint32_t b);  // RVA: 0x6AF320
        static uint32_t wrf();  // RVA: 0x6AF3F0
        BigInteger wrg(uint32_t a);  // RVA: 0x6AF400
        void wrh(BigInteger a, uint32_t b);  // RVA: 0x6AF4E0
        BigInteger wri();  // RVA: 0x6AC240
        void wov();  // RVA: 0x6AC4C0
        static bool wrj(BigInteger a, int32_t b);  // RVA: 0x6AF5A0
        void wrk(BigInteger a);  // RVA: 0x6AF5C0
        BigInteger wrl();  // RVA: 0x6AF6A0
        bool wrm();  // RVA: 0x6AF8C0
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
    bool Equals(BigIntegerContents other);  // RVA: 0x6AB170
    bool Equals(Il2CppObject* obj);  // RVA: 0x6AB1F0
    int32_t GetHashCode();  // RVA: 0x6AB2D0
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
        SerializableBigInteger wrn(uint32_t a);  // RVA: 0x6CA110
        BigInteger wro(uint32_t a);  // RVA: 0x6CA1B0
        SerializableBigInteger wrp(uint32_t a);  // RVA: 0x6CA110
        static BigInteger op_Implicit(SerializableBigInteger value);  // RVA: 0x6CA0C0
        bool Equals(SerializableBigInteger other);  // RVA: 0x6C9F20
        bool Equals(Il2CppObject* obj);  // RVA: 0x6C9F90
        int32_t GetHashCode();  // RVA: 0x6CA070
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
        static ObscuredBool op_Implicit(bool value);  // RVA: 0x6AFDE0
        static bool op_Implicit(ObscuredBool value);  // RVA: 0x6AFE60
        int32_t GetHashCode();  // RVA: 0x6AFCA0
        Il2CppString* ToString();  // RVA: 0x6AFD30
        bool Equals(Il2CppObject* other);  // RVA: 0x6AFA40
        bool Equals(ObscuredBool obj);  // RVA: 0x6AFC30
        bool Equals(bool other);  // RVA: 0x6AFBE0
        int32_t CompareTo(ObscuredBool other);  // RVA: 0x6AF940
        int32_t CompareTo(bool other);  // RVA: 0x6AF9A0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AF9F0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6AFCE0
        int32_t wou();  // RVA: 0x6AC4B0
        void wrq(bool a);  // RVA: 0x6AFED0
        bool wrr();  // RVA: 0x6796F0
        void .ctor(bool value);  // RVA: 0x6AFD70
        static int32_t wrs(bool a, uint8_t b);  // RVA: 0x6AFEE0
        static bool wrt(int32_t a, uint8_t b);  // RVA: 0x6AFF00
        static ObscuredBool wru(int32_t a, uint8_t b);  // RVA: 0x6AFF20
        static uint8_t wrv();  // RVA: 0x6AFF90
        int32_t wrw(uint8_t a);  // RVA: 0x6AFFA0
        void wrx(int32_t a, uint8_t b);  // RVA: 0x6B0040
        bool wry();  // RVA: 0x6B00A0
        void wov();  // RVA: 0x6AFE70
        static bool wrz(bool a, int32_t b);  // RVA: 0x6B00B0
        void wsa(bool a);  // RVA: 0x6B00C0
        bool wsb();  // RVA: 0x6B0100
        bool wsc();  // RVA: 0x6B0240
        static void wsd(uint8_t a);  // RVA: 0x63E5A0
        void wse();  // RVA: 0x63E5A0
        static bool wsf(int32_t a, uint8_t b);  // RVA: 0x6B0260
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
        static ObscuredByte op_Implicit(uint8_t value);  // RVA: 0x6B0640
        static uint8_t op_Implicit(ObscuredByte value);  // RVA: 0x6B06A0
        static ObscuredByte wsg(ObscuredByte a);  // RVA: 0x6B0700
        static ObscuredByte wsh(ObscuredByte a);  // RVA: 0x6B0760
        static ObscuredByte wsi(ObscuredByte a, int32_t b);  // RVA: 0x6B07C0
        int32_t GetHashCode();  // RVA: 0x6B04F0
        Il2CppString* ToString();  // RVA: 0x6B0570
        Il2CppString* wsj(Il2CppString* a);  // RVA: 0x6B0820
        Il2CppString* wsk(IFormatProvider* a);  // RVA: 0x6B0850
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B05A0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B0340
        bool Equals(ObscuredByte obj);  // RVA: 0x6B0490
        bool Equals(uint8_t other);  // RVA: 0x6B0310
        int32_t CompareTo(ObscuredByte other);  // RVA: 0x6B0270
        int32_t CompareTo(uint8_t other);  // RVA: 0x6B02E0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B02B0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6B0520
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(uint8_t value);  // RVA: 0x6B05E0
        static uint8_t wsl(uint8_t a, uint8_t b);  // RVA: 0x6B0880
        static void wsm(Byte[][] a, uint8_t b);  // RVA: 0x6B0890
        static uint8_t wsn(uint8_t a, uint8_t b);  // RVA: 0x6B08F0
        static void wso(Byte[][] a, uint8_t b);  // RVA: 0x6B0900
        static ObscuredByte wsp(uint8_t a, uint8_t b);  // RVA: 0x6B0960
        static uint8_t wsq();  // RVA: 0x6AFF90
        uint8_t wsr(uint8_t a);  // RVA: 0x6B09B0
        void wss(uint8_t a, uint8_t b);  // RVA: 0x6B0A30
        uint8_t wst();  // RVA: 0x6B0A80
        void wov();  // RVA: 0x6B06C0
        static bool wsu(uint8_t a, int32_t b);  // RVA: 0x6B0A90
        void wsv(uint8_t a);  // RVA: 0x6B0AA0
        uint8_t wsw();  // RVA: 0x6B0AD0
        bool wsx();  // RVA: 0x6B0BD0
        static void wsy(uint8_t a);  // RVA: 0x63E5A0
        void wsz();  // RVA: 0x63E5A0
        static uint8_t wta(uint8_t a, uint8_t b);  // RVA: 0x6B0BF0
        static void wtb(Byte[][] a, uint8_t b);  // RVA: 0x6B0C30
        static uint8_t wtc(uint8_t a, uint8_t b);  // RVA: 0x6B0C70
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
        static ObscuredChar op_Implicit(wchar_t value);  // RVA: 0x6B1110
        static wchar_t op_Implicit(ObscuredChar value);  // RVA: 0x6B1100
        static ObscuredChar wtd(ObscuredChar a);  // RVA: 0x6B11C0
        static ObscuredChar wte(ObscuredChar a);  // RVA: 0x6B1250
        static ObscuredChar wtf(ObscuredChar a, int32_t b);  // RVA: 0x6B12E0
        int32_t GetHashCode();  // RVA: 0x6B1020
        Il2CppString* ToString();  // RVA: 0x6B1060
        Il2CppString* wtg(IFormatProvider* a);  // RVA: 0x6B1360
        bool Equals(Il2CppObject* other);  // RVA: 0x6B0DD0
        bool Equals(ObscuredChar other);  // RVA: 0x6B0F90
        bool Equals(wchar_t other);  // RVA: 0x6B0D80
        int32_t CompareTo(ObscuredChar other);  // RVA: 0x6B0C80
        int32_t CompareTo(wchar_t other);  // RVA: 0x6B0CE0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B0D30
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(wchar_t value);  // RVA: 0x6B10A0
        static wchar_t wth(wchar_t a, wchar_t b);  // RVA: 0x6B13B0
        static wchar_t wti(wchar_t a, wchar_t b);  // RVA: 0x6B13C0
        static ObscuredChar wtj(wchar_t a, wchar_t b);  // RVA: 0x6B13D0
        static wchar_t wtk();  // RVA: 0x6B1430
        wchar_t wtl(wchar_t a);  // RVA: 0x6B1440
        void wtm(wchar_t a, wchar_t b);  // RVA: 0x6B14F0
        wchar_t wtn();  // RVA: 0x6B1540
        void wov();  // RVA: 0x6B1170
        static bool wto(wchar_t a, int32_t b);  // RVA: 0x6B1550
        void wtp(wchar_t a);  // RVA: 0x6B1560
        wchar_t wtq();  // RVA: 0x6B1590
        bool wtr();  // RVA: 0x6B16D0
        static void wts(wchar_t a);  // RVA: 0x63E5A0
        void wtt();  // RVA: 0x63E5A0
        static wchar_t wtu(wchar_t a, wchar_t b);  // RVA: 0x6B1720
        static wchar_t wtv(wchar_t a, wchar_t b);  // RVA: 0x6B1720
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
        int64_t wtw();  // RVA: 0x6B5BE0
        static ObscuredDateTime op_Implicit(DateTime value);  // RVA: 0x6B5B00
        static DateTime op_Implicit(ObscuredDateTime value);  // RVA: 0x6B5B30
        int32_t GetHashCode();  // RVA: 0x6B56D0
        Il2CppString* ToString();  // RVA: 0x6B59B0
        Il2CppString* wtx(Il2CppString* a);  // RVA: 0x6B5C90
        TypeCode GetTypeCode();  // RVA: 0x6B5780
        bool wty(IFormatProvider* a);  // RVA: 0x6B5D50
        wchar_t wtz(IFormatProvider* a);  // RVA: 0x6B5D90
        int8_t wua(IFormatProvider* a);  // RVA: 0x6B5DD0
        uint8_t wub(IFormatProvider* a);  // RVA: 0x6B5E10
        int16_t wuc(IFormatProvider* a);  // RVA: 0x6B5E50
        uint16_t wud(IFormatProvider* a);  // RVA: 0x6B5E90
        int32_t wue(IFormatProvider* a);  // RVA: 0x6B5ED0
        uint32_t wuf(IFormatProvider* a);  // RVA: 0x6B5F10
        int64_t wug(IFormatProvider* a);  // RVA: 0x6B5F50
        uint64_t wuh(IFormatProvider* a);  // RVA: 0x6B5F90
        float wui(IFormatProvider* a);  // RVA: 0x6B5FD0
        double wuj(IFormatProvider* a);  // RVA: 0x6B6010
        Decimal wuk(IFormatProvider* a);  // RVA: 0x6B6050
        DateTime wul(IFormatProvider* a);  // RVA: 0x6B6090
        Il2CppObject* wum(Type* a, IFormatProvider* b);  // RVA: 0x6B6100
        Il2CppString* ToString(IFormatProvider* provider);  // RVA: 0x6B5820
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B58E0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B54B0
        bool Equals(ObscuredDateTime other);  // RVA: 0x6B5450
        bool Equals(DateTime other);  // RVA: 0x6B5610
        int32_t CompareTo(ObscuredDateTime other);  // RVA: 0x6B5290
        int32_t CompareTo(DateTime other);  // RVA: 0x6B51D0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B5390
        static DateTime wun(ObscuredDateTime a, TimeSpan b);  // RVA: 0x6B6300
        static DateTime wuo(ObscuredDateTime a, TimeSpan b);  // RVA: 0x6B63C0
        static TimeSpan wup(ObscuredDateTime a, DateTime b);  // RVA: 0x6B6480
        static TimeSpan wuq(DateTime a, ObscuredDateTime b);  // RVA: 0x6B6540
        static bool wur(ObscuredDateTime a, DateTime b);  // RVA: 0x6B6600
        static bool wus(DateTime a, ObscuredDateTime b);  // RVA: 0x6B66C0
        static bool wut(ObscuredDateTime a, DateTime b);  // RVA: 0x6B6780
        static bool wuu(DateTime a, ObscuredDateTime b);  // RVA: 0x6B6840
        static bool wuv(ObscuredDateTime a, DateTime b);  // RVA: 0x6B6900
        static bool wuw(DateTime a, ObscuredDateTime b);  // RVA: 0x6B69C0
        static bool wux(ObscuredDateTime a, DateTime b);  // RVA: 0x6B6A80
        static bool wuy(DateTime a, ObscuredDateTime b);  // RVA: 0x6B6B40
        static bool wuz(ObscuredDateTime a, DateTime b);  // RVA: 0x6B6C00
        static bool wva(DateTime a, ObscuredDateTime b);  // RVA: 0x6B6CC0
        static bool wvb(ObscuredDateTime a, DateTime b);  // RVA: 0x6B6D80
        static bool wvc(DateTime a, ObscuredDateTime b);  // RVA: 0x6B6E40
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6B5790
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(DateTime value);  // RVA: 0x6B5A60
        static int64_t wvd(DateTime a, int64_t b);  // RVA: 0x6B6F00
        static DateTime wve(int64_t a, int64_t b);  // RVA: 0x6B6F60
        static ObscuredDateTime wvf(int64_t a, int64_t b);  // RVA: 0x6B7050
        static int64_t wvg();  // RVA: 0x6B4C30
        int64_t wvh(int64_t a);  // RVA: 0x6B7080
        void wvi(int64_t a, int64_t b);  // RVA: 0x6B7180
        DateTime wvj();  // RVA: 0x6B7230
        void wov();  // RVA: 0x6B5B90
        static bool wvk(DateTime a, int32_t b);  // RVA: 0x6B7290
        static bool wvl(int64_t a, int32_t b);  // RVA: 0x6B4F20
        void wvm(int64_t a);  // RVA: 0x6B4F30
        static int64_t wvn(int64_t a, int64_t b);  // RVA: 0x6B4F60
        static int64_t wvo(int64_t a, int64_t b);  // RVA: 0x6B4F70
        DateTime wvp();  // RVA: 0x6B5B30
        int64_t wvq();  // RVA: 0x6B72F0
        bool wvr();  // RVA: 0x6B51B0
        static DateTime wvs(int64_t a, int64_t b);  // RVA: 0x6B7480
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
        int64_t wvt();  // RVA: 0x6B22D0
        DateTime wvu();  // RVA: 0x6B23A0
        DateTime wvv();  // RVA: 0x6B2470
        int32_t wvw();  // RVA: 0x6B2540
        DayOfWeek wvx();  // RVA: 0x6B2610
        int32_t wvy();  // RVA: 0x6B26E0
        int32_t wvz();  // RVA: 0x6B27B0
        int32_t wwa();  // RVA: 0x6B2880
        int32_t wwb();  // RVA: 0x6B2950
        int32_t wwc();  // RVA: 0x6B2A20
        TimeSpan wwd();  // RVA: 0x6B2AF0
        int32_t wwe();  // RVA: 0x6B2BC0
        TimeSpan wwf();  // RVA: 0x6B2C90
        DateTime wwg();  // RVA: 0x6B2D60
        int32_t wwh();  // RVA: 0x6B2E30
        static ObscuredDateTimeOffset op_Implicit(DateTimeOffset value);  // RVA: 0x6B2130
        static DateTimeOffset op_Implicit(ObscuredDateTimeOffset value);  // RVA: 0x6B21E0
        int32_t GetHashCode();  // RVA: 0x6B1D50
        Il2CppString* ToString();  // RVA: 0x6B1FC0
        Il2CppString* wwi(Il2CppString* a);  // RVA: 0x6B2F00
        Il2CppString* wwj(IFormatProvider* a);  // RVA: 0x6B2FE0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B1ED0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B1B90
        bool Equals(ObscuredDateTimeOffset other);  // RVA: 0x6B1CF0
        bool Equals(DateTimeOffset other);  // RVA: 0x6B1AA0
        int32_t CompareTo(ObscuredDateTimeOffset other);  // RVA: 0x6B1820
        int32_t CompareTo(DateTimeOffset other);  // RVA: 0x6B1730
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B1980
        static DateTimeOffset wwk(ObscuredDateTimeOffset a, TimeSpan b);  // RVA: 0x6B30C0
        static DateTimeOffset wwl(ObscuredDateTimeOffset a, TimeSpan b);  // RVA: 0x6B31C0
        static TimeSpan wwm(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6B32C0
        static TimeSpan wwn(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B33B0
        static TimeSpan wwo(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B34A0
        static bool wwp(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6B3620
        static bool wwq(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B3710
        static bool wwr(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B3800
        static bool wws(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6B3980
        static bool wwt(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B3A70
        static bool wwu(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B3B60
        static bool wwv(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6B3CE0
        static bool www(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B3DD0
        static bool wwx(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B3EC0
        static bool wwy(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6B4040
        static bool wwz(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B4130
        static bool wxa(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B4220
        static bool wxb(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6B43A0
        static bool wxc(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B4490
        static bool wxd(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B4580
        static bool wxe(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6B4700
        static bool wxf(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B47F0
        static bool wxg(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6B48E0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6B1E20
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(DateTimeOffset value);  // RVA: 0x6B2090
        static int64_t wxh(DateTimeOffset a, int64_t b);  // RVA: 0x6B4A60
        static DateTimeOffset wxi(int64_t a, int64_t b);  // RVA: 0x6B4AC0
        static ObscuredDateTimeOffset wxj(int64_t a, int64_t b);  // RVA: 0x6B4C00
        static int64_t wxk();  // RVA: 0x6B4C30
        int64_t wxl(int64_t a);  // RVA: 0x6B4C40
        void wxm(int64_t a, int64_t b);  // RVA: 0x6B4D50
        DateTimeOffset wxn();  // RVA: 0x6B4E20
        void wov();  // RVA: 0x6B2280
        static bool wxo(DateTimeOffset a, int32_t b);  // RVA: 0x6B4EB0
        static bool wxp(int64_t a, int32_t b);  // RVA: 0x6B4F20
        void wxq(int64_t a);  // RVA: 0x6B4F30
        static int64_t wxr(int64_t a, int64_t b);  // RVA: 0x6B4F60
        static int64_t wxs(int64_t a, int64_t b);  // RVA: 0x6B4F70
        DateTimeOffset wxt();  // RVA: 0x6B4F80
        int64_t wxu();  // RVA: 0x6B5010
        bool wxv();  // RVA: 0x6B51B0
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
        static ObscuredDecimal op_Implicit(Decimal value);  // RVA: 0x6B7CB0
        static Decimal op_Implicit(ObscuredDecimal value);  // RVA: 0x6B7CF0
        static ObscuredDecimal wxw(ObscuredFloat a);  // RVA: 0x6B7D90
        static ObscuredDecimal wxx(ObscuredDecimal a);  // RVA: 0x6B7EE0
        static ObscuredDecimal wxy(ObscuredDecimal a);  // RVA: 0x6B8050
        static ObscuredDecimal wxz(ObscuredDecimal a, Decimal b);  // RVA: 0x6B81C0
        int32_t GetHashCode();  // RVA: 0x6B79F0
        Il2CppString* ToString();  // RVA: 0x6B7AE0
        Il2CppString* wya(Il2CppString* a);  // RVA: 0x6B82C0
        Il2CppString* wyb(IFormatProvider* a);  // RVA: 0x6B8340
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B7B50
        bool Equals(Il2CppObject* other);  // RVA: 0x6B76D0
        bool Equals(ObscuredDecimal other);  // RVA: 0x6B7860
        bool Equals(Decimal other);  // RVA: 0x6B7960
        int32_t CompareTo(ObscuredDecimal other);  // RVA: 0x6B7510
        int32_t CompareTo(Decimal other);  // RVA: 0x6B7640
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B75C0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6B7A60
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(Decimal value);  // RVA: 0x6B7BE0
        static Decimal wyc(Decimal a, int64_t b);  // RVA: 0x6AB320
        static Decimal wyd(Decimal a, int64_t b);  // RVA: 0x6AB320
        static ObscuredDecimal wye(Decimal a, int64_t b);  // RVA: 0x6B83C0
        static int64_t wyf();  // RVA: 0x6B4C30
        Decimal wyg(int64_t a);  // RVA: 0x6B8440
        void wyh(Decimal a, int64_t b);  // RVA: 0x6B85C0
        Decimal wyi();  // RVA: 0x6B7CF0
        void wov();  // RVA: 0x6B7D20
        static bool wyj(Decimal a, int32_t b);  // RVA: 0x6B8630
        void wyk(Decimal a);  // RVA: 0x6B8650
        static ACTkByte16 wyl(Decimal a, int64_t b);  // RVA: 0x6AB320
        Decimal wym();  // RVA: 0x6B86A0
        bool wyn();  // RVA: 0x6B89A0
        static void wyo(int64_t a);  // RVA: 0x63E5A0
        void wyp();  // RVA: 0x63E5A0
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
        static Decimal wyq(Decimal a, int64_t b);  // RVA: 0x6AB320
        static ACTkByte16 wyr(Decimal a, int64_t b);  // RVA: 0x6AB320
        static Decimal wys(ACTkByte16 a, int64_t b);  // RVA: 0x6AB320
        static Decimal wyt(ACTkByte16 a);  // RVA: 0x679A00
        static ACTkByte16 wyu(Decimal a);  // RVA: 0x679A00
        static DecimalLongBytesUnion wyv(Decimal a);  // RVA: 0x679A00
        static DecimalLongBytesUnion wyw(ACTkByte16 a);  // RVA: 0x679A00
        DecimalLongBytesUnion wyx(int64_t a);  // RVA: 0x6AB350
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
    static int64_t wyy(int64_t a, uint8_t b, uint8_t c);  // RVA: 0x6AB370
    static int64_t wyz(double a, int64_t b);  // RVA: 0x6AB3B0
    static double wza(int64_t a, int64_t b);  // RVA: 0x6AB3E0
    static DoubleLongBytesUnion wzb(double a);  // RVA: 0x6AB410
    static DoubleLongBytesUnion wzc(int64_t a);  // RVA: 0x6AB420
    DoubleLongBytesUnion wzd(int64_t a);  // RVA: 0x6AB430
    DoubleLongBytesUnion wze(int64_t a);  // RVA: 0x6AB450
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
        static ObscuredDouble op_Implicit(double value);  // RVA: 0x6B8ED0
        static double op_Implicit(ObscuredDouble value);  // RVA: 0x6B8EC0
        static ObscuredDouble wzf(ObscuredFloat a);  // RVA: 0x6B8F60
        static ObscuredDouble wzg(ObscuredDouble a);  // RVA: 0x6B9020
        static ObscuredDouble wzh(ObscuredDouble a);  // RVA: 0x6B90E0
        static ObscuredDouble wzi(ObscuredDouble a, double b);  // RVA: 0x6B91A0
        int32_t GetHashCode();  // RVA: 0x6B8D00
        Il2CppString* ToString();  // RVA: 0x6B8E10
        Il2CppString* wzj(Il2CppString* a);  // RVA: 0x6B9250
        Il2CppString* wzk(IFormatProvider* a);  // RVA: 0x6B9290
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B8DC0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B8AB0
        bool Equals(ObscuredDouble other);  // RVA: 0x6B8C60
        bool Equals(double other);  // RVA: 0x6B8CC0
        int32_t CompareTo(ObscuredDouble other);  // RVA: 0x6B8A70
        int32_t CompareTo(double other);  // RVA: 0x6B89F0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B8A30
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6B8D50
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(double value);  // RVA: 0x6B8E40
        static int64_t wzl(double a, int64_t b);  // RVA: 0x6AB3B0
        static double wzm(int64_t a, int64_t b);  // RVA: 0x6AB3E0
        static int64_t wzn(int64_t a, uint8_t b, uint8_t c);  // RVA: 0x6AB370
        static ObscuredDouble wzo(int64_t a, int64_t b);  // RVA: 0x6B92D0
        static int64_t wzp();  // RVA: 0x6B4C30
        int64_t wzq(int64_t a);  // RVA: 0x6B9360
        void wzr(int64_t a, int64_t b);  // RVA: 0x6B9420
        double wzs();  // RVA: 0x6B94A0
        void wov();  // RVA: 0x6B8F00
        static bool wzt(double a, int32_t b);  // RVA: 0x6B94B0
        void wzu(double a);  // RVA: 0x6B94C0
        static bool wzv(double a, double b);  // RVA: 0x6B9520
        double wzw();  // RVA: 0x6B95E0
        bool wzx();  // RVA: 0x6B51B0
        static void wzy(int64_t a);  // RVA: 0x63E5A0
        void wzz();  // RVA: 0x63E5A0
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
    static int32_t xaa(int32_t a, uint8_t b, uint8_t c);  // RVA: 0x6AB480
    static int32_t xab(float a, int32_t b);  // RVA: 0x6AB4B0
    static float xac(int32_t a, int32_t b);  // RVA: 0x6AB4E0
    static FloatIntBytesUnion xad(float a);  // RVA: 0x6AB510
    static FloatIntBytesUnion xae(int32_t a);  // RVA: 0x6AB520
    FloatIntBytesUnion xaf(int32_t a);  // RVA: 0x6AB530
    FloatIntBytesUnion xag(int32_t a);  // RVA: 0x6AB550
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
        static ObscuredFloat op_Implicit(float value);  // RVA: 0x6B9CA0
        static float op_Implicit(ObscuredFloat value);  // RVA: 0x6B9C90
        static ObscuredFloat xah(ObscuredFloat a);  // RVA: 0x6B9D30
        static ObscuredFloat xai(ObscuredFloat a);  // RVA: 0x6B9DD0
        static ObscuredFloat xaj(ObscuredFloat a, int32_t b);  // RVA: 0x6B9E70
        int32_t GetHashCode();  // RVA: 0x6B9B00
        Il2CppString* ToString();  // RVA: 0x6B9BE0
        Il2CppString* xak(Il2CppString* a);  // RVA: 0x6B9F10
        Il2CppString* xal(IFormatProvider* a);  // RVA: 0x6B9F50
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B9B90
        bool Equals(Il2CppObject* other);  // RVA: 0x6B98F0
        bool Equals(ObscuredFloat other);  // RVA: 0x6B9AA0
        bool Equals(float other);  // RVA: 0x6B9A60
        int32_t CompareTo(ObscuredFloat other);  // RVA: 0x6B98B0
        int32_t CompareTo(float other);  // RVA: 0x6B9870
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B9830
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6B9B30
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(float value);  // RVA: 0x6B9C10
        static int32_t xam(float a, int32_t b);  // RVA: 0x6AB4B0
        static float xan(int32_t a, int32_t b);  // RVA: 0x6AB4E0
        static ObscuredFloat xao(int32_t a, int32_t b);  // RVA: 0x6B9F90
        static int32_t xap();  // RVA: 0x6AF3F0
        int32_t xaq(int32_t a);  // RVA: 0x6BA010
        void xar(int32_t a, int32_t b);  // RVA: 0x6BA0B0
        float xas();  // RVA: 0x6BA120
        void wov();  // RVA: 0x6B9CD0
        static bool xat(float a, int32_t b);  // RVA: 0x6BA130
        void xau(float a);  // RVA: 0x6BA140
        static bool xav(float a, float b);  // RVA: 0x6BA190
        float xaw();  // RVA: 0x6BA250
        bool xax();  // RVA: 0x6BA450
        static void xay(int32_t a);  // RVA: 0x63E5A0
        void xaz();  // RVA: 0x63E5A0
        static int32_t xba(int32_t a, uint8_t b, uint8_t c);  // RVA: 0x6AB480
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
        static ObscuredGuid op_Implicit(Guid value);  // RVA: 0x6BA9F0
        static Guid op_Implicit(ObscuredGuid value);  // RVA: 0x6BA9C0
        int32_t GetHashCode();  // RVA: 0x6BA7B0
        Il2CppString* ToString();  // RVA: 0x6BA8B0
        Il2CppString* xbb(Il2CppString* a);  // RVA: 0x6BAB00
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6BA860
        bool Equals(Il2CppObject* other);  // RVA: 0x6BA660
        bool Equals(ObscuredGuid other);  // RVA: 0x6BA5B0
        bool Equals(Guid other);  // RVA: 0x6BA560
        int32_t CompareTo(ObscuredGuid other);  // RVA: 0x6BA500
        int32_t CompareTo(Guid other);  // RVA: 0x6BA470
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6BA4C0
        static bool xbc(ObscuredGuid a, Guid b);  // RVA: 0x6BAB40
        static bool xbd(Guid a, ObscuredGuid b);  // RVA: 0x6BABA0
        static bool xbe(ObscuredGuid a, ObscuredGuid b);  // RVA: 0x6BAC00
        static bool xbf(ObscuredGuid a, Guid b);  // RVA: 0x6BACA0
        static bool xbg(Guid a, ObscuredGuid b);  // RVA: 0x6BAD00
        static bool xbh(ObscuredGuid a, ObscuredGuid b);  // RVA: 0x6BAD60
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6BA7F0
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(Guid value);  // RVA: 0x6BA8F0
        static void xbi(Guid a, int64_t b, int64_t c, int64_t d);  // RVA: 0x6BAE00
        static Guid xbj(int64_t a, int64_t b, int64_t c);  // RVA: 0x6BAE80
        static ObscuredGuid xbk(int64_t a, int64_t b, int64_t c);  // RVA: 0x6BB070
        static int64_t xbl();  // RVA: 0x6B4C30
        static int32_t xbm(int64_t a, int64_t b);  // RVA: 0x6BB0A0
        void xbn(int64_t a, int64_t b, int64_t c);  // RVA: 0x6BB0E0
        void xbo(int64_t a, int64_t b, int64_t c);  // RVA: 0x6BB240
        Guid xbp();  // RVA: 0x6BA9C0
        void wov();  // RVA: 0x6BAA30
        static bool xbq(Guid a, int32_t b);  // RVA: 0x6BB300
        static bool xbr(System.ReadOnlySpan<System.Byte> a, int32_t b);  // RVA: 0x6BB3C0
        void xbs(Guid a);  // RVA: 0x6BB4B0
        static int64_t xbt(int64_t a, int64_t b);  // RVA: 0x6B4F60
        static int64_t xbu(int64_t a, int64_t b);  // RVA: 0x6B4F70
        Guid xbv();  // RVA: 0x6BB550
        static bool xbw(Byte[][] a, Byte[][] b);  // RVA: 0x6BB8E0
        bool xbx();  // RVA: 0x6BB950
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
        static ObscuredInt op_Implicit(int32_t value);  // RVA: 0x6BBE50
        static int32_t op_Implicit(ObscuredInt value);  // RVA: 0x6BBF60
        static ObscuredFloat op_Implicit(ObscuredInt value);  // RVA: 0x6BBDB0
        static ObscuredDouble op_Implicit(ObscuredInt value);  // RVA: 0x6BBEB0
        static ObscuredUInt op_Explicit(ObscuredInt value);  // RVA: 0x6BBD40
        static ObscuredInt xby(ObscuredInt a);  // RVA: 0x6BBFB0
        static ObscuredInt xbz(ObscuredInt a);  // RVA: 0x6BC020
        static ObscuredInt xca(ObscuredInt a, int32_t b);  // RVA: 0x6BC090
        int32_t GetHashCode();  // RVA: 0x6BBBF0
        Il2CppString* ToString();  // RVA: 0x6BBCC0
        Il2CppString* xcb(Il2CppString* a);  // RVA: 0x6BC100
        Il2CppString* xcc(IFormatProvider* a);  // RVA: 0x6BC140
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6BBC70
        bool Equals(Il2CppObject* other);  // RVA: 0x6BBA50
        bool Equals(ObscuredInt other);  // RVA: 0x6BBB90
        bool Equals(int32_t other);  // RVA: 0x6BBA20
        int32_t CompareTo(ObscuredInt other);  // RVA: 0x6BB9E0
        int32_t CompareTo(int32_t other);  // RVA: 0x6BB970
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6BB9A0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6BBC20
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(int32_t value);  // RVA: 0x6BBCF0
        static int32_t xcd(int32_t a, int32_t b);  // RVA: 0x6BC180
        static int32_t xce(int32_t a, int32_t b);  // RVA: 0x6BC190
        static ObscuredInt xcf(int32_t a, int32_t b);  // RVA: 0x6BC1A0
        static int32_t xcg();  // RVA: 0x6AF3F0
        int32_t xch(int32_t a);  // RVA: 0x6BC1F0
        void xci(int32_t a, int32_t b);  // RVA: 0x6BC260
        int32_t xcj();  // RVA: 0x6BC2A0
        void wov();  // RVA: 0x6BBF70
        static bool xck(int32_t a, int32_t b);  // RVA: 0x6BC2B0
        void xcl(int32_t a);  // RVA: 0x6BC2C0
        int32_t xcm();  // RVA: 0x6BC2F0
        bool xcn();  // RVA: 0x6BA450
        static void xco(int32_t a);  // RVA: 0x63E5A0
        void xcp();  // RVA: 0x63E5A0
        static int32_t xcq(int32_t a, int32_t b);  // RVA: 0x6BC3E0
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
        static ObscuredLong op_Implicit(int64_t value);  // RVA: 0x6BC800
        static int64_t op_Implicit(ObscuredLong value);  // RVA: 0x6BC860
        static ObscuredLong xcr(ObscuredLong a);  // RVA: 0x6BC8B0
        static ObscuredLong xcs(ObscuredLong a);  // RVA: 0x6BC940
        static ObscuredLong xct(ObscuredLong a, int32_t b);  // RVA: 0x6BC9D0
        int32_t GetHashCode();  // RVA: 0x6BC6A0
        Il2CppString* ToString();  // RVA: 0x6BC720
        Il2CppString* xcu(Il2CppString* a);  // RVA: 0x6BCA40
        Il2CppString* xcv(IFormatProvider* a);  // RVA: 0x6BCA80
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6BC750
        bool Equals(Il2CppObject* other);  // RVA: 0x6BC550
        bool Equals(ObscuredLong other);  // RVA: 0x6BC4B0
        bool Equals(int64_t other);  // RVA: 0x6BC510
        int32_t CompareTo(ObscuredLong other);  // RVA: 0x6BC430
        int32_t CompareTo(int64_t other);  // RVA: 0x6BC470
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6BC3F0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6BC6D0
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(int64_t value);  // RVA: 0x6BC7A0
        static int64_t xcw(int64_t a, int64_t b);  // RVA: 0x6B4F60
        static int64_t xcx(int64_t a, int64_t b);  // RVA: 0x6B4F70
        static ObscuredLong xcy(int64_t a, int64_t b);  // RVA: 0x6BCAC0
        static int64_t xcz();  // RVA: 0x6B4C30
        int64_t xda(int64_t a);  // RVA: 0x6BCB10
        void xdb(int64_t a, int64_t b);  // RVA: 0x6BCBA0
        int64_t xdc();  // RVA: 0x6BCBF0
        void wov();  // RVA: 0x6BC870
        static bool xdd(int64_t a, int32_t b);  // RVA: 0x6B4F20
        void xde(int64_t a);  // RVA: 0x6B4F30
        int64_t xdf();  // RVA: 0x6BCC00
        bool xdg();  // RVA: 0x6B51B0
        static void xdh(int64_t a);  // RVA: 0x63E5A0
        void xdi();  // RVA: 0x63E5A0
        static int64_t xdj(int64_t a, int64_t b);  // RVA: 0x6BCD20
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
    bool Equals(RawEncryptedQuaternion other);  // RVA: 0x6C9BE0
    bool Equals(Il2CppObject* obj);  // RVA: 0x6C9C10
    int32_t GetHashCode();  // RVA: 0x6C9CC0
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
        static ObscuredQuaternion op_Implicit(Quaternion value);  // RVA: 0x6BD530
        static Quaternion op_Implicit(ObscuredQuaternion value);  // RVA: 0x6BD500
        static ObscuredQuaternion xdk(ObscuredQuaternion a, ObscuredQuaternion b);  // RVA: 0x6BD690
        static ObscuredQuaternion xdl(ObscuredQuaternion a, Quaternion b);  // RVA: 0x6BD890
        bool Equals(Il2CppObject* other);  // RVA: 0x6BCE70
        bool Equals(ObscuredQuaternion other);  // RVA: 0x6BCD30
        bool Equals(Quaternion other);  // RVA: 0x6BD010
        int32_t GetHashCode();  // RVA: 0x6BD0C0
        Il2CppString* ToString();  // RVA: 0x6BD290
        Il2CppString* xdm(Il2CppString* a);  // RVA: 0x6BDA70
        void xdn();  // RVA: 0x6BDAC0
        Quaternion xdo();  // RVA: 0x6BDBE0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6BD150
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(Quaternion value);  // RVA: 0x6BD2D0
        void .ctor(float x, float y, float z, float w);  // RVA: 0x6BD3D0
        float xdp();  // RVA: 0x6BDC20
        void xdq(float a);  // RVA: 0x6BDC40
        float xdr();  // RVA: 0x6BDCE0
        void xds(float a);  // RVA: 0x6BDD00
        float xdt();  // RVA: 0x6BDDA0
        void xdu(float a);  // RVA: 0x6BDDC0
        float xdv();  // RVA: 0x6BDE60
        void xdw(float a);  // RVA: 0x6BDE80
        float get_Item(int32_t index);  // RVA: 0x6BD410
        void set_Item(int32_t index, float value);  // RVA: 0x6BD570
        static RawEncryptedQuaternion xdx(Quaternion a, int32_t b);  // RVA: 0x6BDF20
        static RawEncryptedQuaternion xdy(float a, float b, float c, float d, int32_t e);  // RVA: 0x6BDFE0
        static Quaternion xdz(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x6BE0A0
        static ObscuredQuaternion xea(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x6BE140
        static int32_t xeb();  // RVA: 0x6AF3F0
        static bool xec(Quaternion a, Quaternion b);  // RVA: 0x6BE180
        RawEncryptedQuaternion xed(int32_t a);  // RVA: 0x6BE2A0
        void xee(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x6BE350
        Quaternion xef();  // RVA: 0x6BD500
        void wov();  // RVA: 0x6BD640
        static bool xeg(Quaternion a, int32_t b);  // RVA: 0x6BE470
        void xeh(Quaternion a);  // RVA: 0x6BE490
        Quaternion xei();  // RVA: 0x6BE570
        bool xej();  // RVA: 0x6BE8D0
        static void xek(int32_t a);  // RVA: 0x63E5A0
        void xel();  // RVA: 0x63E5A0
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
        static ObscuredSByte op_Implicit(int8_t value);  // RVA: 0x6BEC80
        static int8_t op_Implicit(ObscuredSByte value);  // RVA: 0x6BECE0
        static ObscuredSByte xem(ObscuredSByte a);  // RVA: 0x6BED40
        static ObscuredSByte xen(ObscuredSByte a);  // RVA: 0x6BEDA0
        static ObscuredSByte xeo(ObscuredSByte a, int32_t b);  // RVA: 0x6BEE00
        int32_t GetHashCode();  // RVA: 0x6BEB80
        Il2CppString* ToString();  // RVA: 0x6BEBB0
        Il2CppString* xep(Il2CppString* a);  // RVA: 0x6BEE60
        Il2CppString* xeq(IFormatProvider* a);  // RVA: 0x6BEE90
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6BEBE0
        bool Equals(Il2CppObject* other);  // RVA: 0x6BEA30
        bool Equals(ObscuredSByte obj);  // RVA: 0x6BE9D0
        bool Equals(int8_t other);  // RVA: 0x6BE9A0
        int32_t CompareTo(ObscuredSByte other);  // RVA: 0x6BE960
        int32_t CompareTo(int8_t other);  // RVA: 0x6BE930
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6BE900
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6B0520
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(int8_t value);  // RVA: 0x6BEC20
        static int8_t xer(int8_t a, int8_t b);  // RVA: 0x6B0880
        static int8_t xes(int8_t a, int8_t b);  // RVA: 0x6B08F0
        static ObscuredSByte xet(int8_t a, int8_t b);  // RVA: 0x6BEEC0
        static int8_t xeu();  // RVA: 0x6BEF10
        int8_t xev(int8_t a);  // RVA: 0x6BEF20
        void xew(int8_t a, int8_t b);  // RVA: 0x6BEFA0
        int8_t xex();  // RVA: 0x6BEFF0
        void wov();  // RVA: 0x6BED00
        static bool xey(int8_t a, int32_t b);  // RVA: 0x6BF000
        void xez(int8_t a);  // RVA: 0x6BF010
        int8_t xfa();  // RVA: 0x6BF040
        bool xfb();  // RVA: 0x6B0BD0
        static void xfc(int8_t a);  // RVA: 0x63E5A0
        void xfd();  // RVA: 0x63E5A0
        static int8_t xfe(int8_t a, int8_t b);  // RVA: 0x6B0C70
        static int8_t xff(int8_t a, int8_t b);  // RVA: 0x6B0C70
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
        static ObscuredShort op_Implicit(int16_t value);  // RVA: 0x6BF580
        static int16_t op_Implicit(ObscuredShort value);  // RVA: 0x6BF570
        static ObscuredShort xfg(ObscuredShort a);  // RVA: 0x6BF630
        static ObscuredShort xfh(ObscuredShort a);  // RVA: 0x6BF6C0
        static ObscuredShort xfi(ObscuredShort a, int32_t b);  // RVA: 0x6BF750
        int32_t GetHashCode();  // RVA: 0x6BF410
        Il2CppString* ToString();  // RVA: 0x6BF490
        Il2CppString* xfj(Il2CppString* a);  // RVA: 0x6BF7D0
        Il2CppString* xfk(IFormatProvider* a);  // RVA: 0x6BF810
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6BF4C0
        bool Equals(Il2CppObject* other);  // RVA: 0x6BF2A0
        bool Equals(ObscuredShort obj);  // RVA: 0x6BF200
        bool Equals(int16_t other);  // RVA: 0x6BF260
        int32_t CompareTo(ObscuredShort other);  // RVA: 0x6BF1C0
        int32_t CompareTo(int16_t other);  // RVA: 0x6BF180
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6BF140
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6BF440
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(int16_t value);  // RVA: 0x6BF510
        static int16_t xfl(int16_t a, int16_t b);  // RVA: 0x6B13B0
        static int16_t xfm(int16_t a, int16_t b);  // RVA: 0x6B13C0
        static ObscuredShort xfn(int16_t a, int16_t b);  // RVA: 0x6BF850
        static int16_t xfo();  // RVA: 0x6BF8B0
        int16_t xfp(int16_t a);  // RVA: 0x6BF8C0
        void xfq(int16_t a, int16_t b);  // RVA: 0x6BF950
        int16_t xfr();  // RVA: 0x6BF9A0
        void wov();  // RVA: 0x6BF5E0
        static bool xfs(int16_t a, int32_t b);  // RVA: 0x6BF9B0
        void xft(int16_t a);  // RVA: 0x6BF9C0
        int16_t xfu();  // RVA: 0x6BF9F0
        bool xfv();  // RVA: 0x6BFB10
        static void xfw(int16_t a);  // RVA: 0x63E5A0
        void xfx();  // RVA: 0x63E5A0
        static int16_t xfy(int16_t a, int16_t b);  // RVA: 0x6B1720
        static int16_t xfz(int16_t a, int16_t b);  // RVA: 0x6B1720
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
        int32_t xga();  // RVA: 0x6C02C0
        wchar_t get_Item(int32_t index);  // RVA: 0x6C0140
        static ObscuredString* op_Implicit(Il2CppString* value);  // RVA: 0x6C01C0
        static Il2CppString* op_Implicit(ObscuredString* value);  // RVA: 0x6C0230
        static bool xgb(ObscuredString* a, ObscuredString* b);  // RVA: 0x6C02E0
        static bool xgc(ObscuredString* a, ObscuredString* b);  // RVA: 0x6C0420
        Il2CppString* xgd(int32_t a);  // RVA: 0x6C0440
        Il2CppString* xge(int32_t a, int32_t b);  // RVA: 0x6C04A0
        bool xgf(Il2CppString* a, StringComparison b);  // RVA: 0x6C04F0
        bool xgg(Il2CppString* a, StringComparison b);  // RVA: 0x6C0540
        int32_t GetHashCode();  // RVA: 0x6BFE50
        Il2CppString* ToString();  // RVA: 0x6BFFD0
        static bool xgh(ObscuredString* a);  // RVA: 0x6C0590
        static bool xgi(ObscuredString* a);  // RVA: 0x6C05E0
        bool Equals(Il2CppObject* other);  // RVA: 0x6BFD70
        bool Equals(ObscuredString* obj);  // RVA: 0x6BFC60
        bool xgj(ObscuredString* a, StringComparison b);  // RVA: 0x6C06E0
        bool Equals(Il2CppString* other);  // RVA: 0x6BFC20
        int32_t CompareTo(ObscuredString* other);  // RVA: 0x6BFB30
        int32_t CompareTo(Il2CppString* other);  // RVA: 0x6BFBE0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6BFBA0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6BFE90
        int32_t wou();  // RVA: 0x678C30
        void .ctor();  // RVA: 0x6BFFF0
        void .ctor(Il2CppString* value);  // RVA: 0x6C0030
        static Char[][] xgk();  // RVA: 0x6C0760
        static Char[][] xgl(Il2CppString* a, Il2CppString* b);  // RVA: 0x6C07C0
        static Char[][] xgm(Il2CppString* a, Char[][] b);  // RVA: 0x6C0820
        static Char[][] xgn(Char[][] a, Char[][] b);  // RVA: 0x6C0850
        static Il2CppString* xgo(Char[][] a, Il2CppString* b);  // RVA: 0x6C0860
        static Il2CppString* xgp(Char[][] a, Char[][] b);  // RVA: 0x6C08B0
        static ObscuredString* xgq(Char[][] a, Char[][] b);  // RVA: 0x6C08E0
        static Char[][] xgr();  // RVA: 0x6C0970
        static void xgs(Char[][] a);  // RVA: 0x6C09D0
        Char[][] xgt(Char[][] a);  // RVA: 0x6C09E0
        void xgu(Char[][] a, Char[][] b);  // RVA: 0x6C0AC0
        Il2CppString* xgv();  // RVA: 0x6BFFD0
        Char[][] xgw();  // RVA: 0x6C0B50
        void wov();  // RVA: 0x6C0260
        static bool xgx(Char[][] a, int32_t b);  // RVA: 0x6C0B60
        void xgy(Char[][] a);  // RVA: 0x6C0B70
        static Char[][] xgz(Char[][] a, Char[][] b);  // RVA: 0x6C0BC0
        static wchar_t xha(Char[][] a, Char[][] b, int32_t c);  // RVA: 0x6C0D30
        static bool xhb(ObscuredString* a);  // RVA: 0x6C05E0
        Il2CppString* xhc();  // RVA: 0x6BFFD0
        Char[][] xhd();  // RVA: 0x6C0D80
        bool xhe();  // RVA: 0x6C10A0
        bool xhf(Char[][] a, Il2CppString* b);  // RVA: 0x6C10D0
        static void xhg(Il2CppString* a);  // RVA: 0x63E5A0
        void xhh();  // RVA: 0x63E5A0
        static Il2CppString* xhi(Il2CppString* a);  // RVA: 0x6C1230
        static Il2CppString* xhj(Il2CppString* a, Il2CppString* b);  // RVA: 0x6C1270
        Il2CppString* xhk();  // RVA: 0x6C1280
        void xhl(Il2CppString* a);  // RVA: 0x63E5A0
        static ObscuredString* xhm(Il2CppString* a, Il2CppString* b);  // RVA: 0x6C12C0
        void xhn(Il2CppString* a, Il2CppString* b);  // RVA: 0x6C1420
        static Char[][] xho(Char[][] a);  // RVA: 0x6C1530
        static Il2CppString* xhp(Il2CppString* a, Il2CppString* b);  // RVA: 0x6C1550
        static Il2CppString* xhq(Byte[][] a);  // RVA: 0x6C1720
        static Byte[][] xhr(Il2CppString* a);  // RVA: 0x6C17B0
        static bool xhs(Char[][] a, Char[][] b);  // RVA: 0x6C1840
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
        static ObscuredUInt op_Implicit(uint32_t value);  // RVA: 0x6BBE50
        static uint32_t op_Implicit(ObscuredUInt value);  // RVA: 0x6C1BF0
        static ObscuredInt xht(ObscuredUInt a);  // RVA: 0x6C1C40
        static ObscuredUInt xhu(ObscuredUInt a);  // RVA: 0x6C1CB0
        static ObscuredUInt xhv(ObscuredUInt a);  // RVA: 0x6C1D20
        static ObscuredUInt xhw(ObscuredUInt a, int32_t b);  // RVA: 0x6C1D90
        int32_t GetHashCode();  // RVA: 0x6C1B40
        Il2CppString* ToString();  // RVA: 0x6C1B70
        Il2CppString* xhx(Il2CppString* a);  // RVA: 0x6C1E00
        Il2CppString* xhy(IFormatProvider* a);  // RVA: 0x6C1E40
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6C1BA0
        bool Equals(Il2CppObject* other);  // RVA: 0x6C19A0
        bool Equals(ObscuredUInt obj);  // RVA: 0x6C1AE0
        bool Equals(uint32_t other);  // RVA: 0x6C1970
        int32_t CompareTo(ObscuredUInt other);  // RVA: 0x6C1900
        int32_t CompareTo(uint32_t other);  // RVA: 0x6C1940
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6C18C0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6BBC20
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(uint32_t value);  // RVA: 0x6BBCF0
        static uint32_t xhz(uint32_t a, uint32_t b);  // RVA: 0x6BC180
        static uint32_t xia(uint32_t a, uint32_t b);  // RVA: 0x6BC190
        static ObscuredUInt xib(uint32_t a, uint32_t b);  // RVA: 0x6BC1A0
        static uint32_t xic();  // RVA: 0x6AF3F0
        uint32_t xid(uint32_t a);  // RVA: 0x6BC1F0
        void xie(uint32_t a, uint32_t b);  // RVA: 0x6BC260
        uint32_t xif();  // RVA: 0x6C1E80
        void wov();  // RVA: 0x6C1C00
        static bool xig(uint32_t a, int32_t b);  // RVA: 0x6BC2B0
        void xih(uint32_t a);  // RVA: 0x6BC2C0
        uint32_t xii();  // RVA: 0x6C1E90
        bool xij();  // RVA: 0x6BA450
        static void xik(uint32_t a);  // RVA: 0x63E5A0
        void xil();  // RVA: 0x63E5A0
        static uint32_t xim(uint32_t a, uint32_t b);  // RVA: 0x6BC3E0
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
        static ObscuredULong op_Implicit(uint64_t value);  // RVA: 0x6C2350
        static uint64_t op_Implicit(ObscuredULong value);  // RVA: 0x6C2340
        static ObscuredULong xin(ObscuredULong a);  // RVA: 0x6C23F0
        static ObscuredULong xio(ObscuredULong a);  // RVA: 0x6C2480
        static ObscuredULong xip(ObscuredULong a, bool b);  // RVA: 0x6C2510
        int32_t GetHashCode();  // RVA: 0x6C2230
        Il2CppString* ToString();  // RVA: 0x6C22B0
        Il2CppString* xiq(Il2CppString* a);  // RVA: 0x6C2590
        Il2CppString* xir(IFormatProvider* a);  // RVA: 0x6C25D0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6C2260
        bool Equals(Il2CppObject* other);  // RVA: 0x6C2040
        bool Equals(ObscuredULong obj);  // RVA: 0x6C21D0
        bool Equals(uint64_t other);  // RVA: 0x6C2190
        int32_t CompareTo(ObscuredULong other);  // RVA: 0x6C2000
        int32_t CompareTo(uint64_t other);  // RVA: 0x6C1F80
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6C1FC0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6BC6D0
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(uint64_t value);  // RVA: 0x6C22E0
        static uint64_t xis(uint64_t a, uint64_t b);  // RVA: 0x6B4F60
        static uint64_t xit(uint64_t a, uint64_t b);  // RVA: 0x6B4F70
        static ObscuredULong xiu(uint64_t a, uint64_t b);  // RVA: 0x6C2610
        static uint64_t xiv();  // RVA: 0x6B4C30
        uint64_t xiw(uint64_t a);  // RVA: 0x6C2660
        void xix(uint64_t a, uint64_t b);  // RVA: 0x6C26F0
        uint64_t xiy();  // RVA: 0x6C2740
        void wov();  // RVA: 0x6C23B0
        static bool xiz(uint64_t a, int32_t b);  // RVA: 0x6C2750
        void xja(uint64_t a);  // RVA: 0x6C2760
        uint64_t xjb();  // RVA: 0x6C2790
        bool xjc();  // RVA: 0x6B51B0
        static void xjd(uint64_t a);  // RVA: 0x63E5A0
        void xje();  // RVA: 0x63E5A0
        static uint64_t xjf(uint64_t a, uint64_t b);  // RVA: 0x6BCD20
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
        static ObscuredUShort op_Implicit(uint16_t value);  // RVA: 0x6C2CA0
        static uint16_t op_Implicit(ObscuredUShort value);  // RVA: 0x6C2C90
        static ObscuredUShort xjg(ObscuredUShort a);  // RVA: 0x6C2D50
        static ObscuredUShort xjh(ObscuredUShort a);  // RVA: 0x6C2DE0
        static ObscuredUShort xji(ObscuredUShort a, int32_t b);  // RVA: 0x6C2E70
        int32_t GetHashCode();  // RVA: 0x6C2B80
        Il2CppString* ToString();  // RVA: 0x6C2BB0
        Il2CppString* xjj(Il2CppString* a);  // RVA: 0x6C2EF0
        Il2CppString* xjk(IFormatProvider* a);  // RVA: 0x6C2F30
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6C2BE0
        bool Equals(Il2CppObject* other);  // RVA: 0x6C2A10
        bool Equals(ObscuredUShort obj);  // RVA: 0x6C2970
        bool Equals(uint16_t other);  // RVA: 0x6C29D0
        int32_t CompareTo(ObscuredUShort other);  // RVA: 0x6C2930
        int32_t CompareTo(uint16_t other);  // RVA: 0x6C28B0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6C28F0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6BF440
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(uint16_t value);  // RVA: 0x6C2C30
        static uint16_t xjl(uint16_t a, uint16_t b);  // RVA: 0x6B13B0
        static uint16_t xjm(uint16_t a, uint16_t b);  // RVA: 0x6B13C0
        static ObscuredUShort xjn(uint16_t a, uint16_t b);  // RVA: 0x6B13D0
        static uint16_t xjo();  // RVA: 0x6C2F70
        uint16_t xjp(uint16_t a);  // RVA: 0x6C2F80
        void xjq(uint16_t a, uint16_t b);  // RVA: 0x6B14F0
        uint16_t xjr();  // RVA: 0x6C3000
        void wov();  // RVA: 0x6C2D00
        static bool xjs(uint16_t a, int32_t b);  // RVA: 0x6B1550
        void xjt(uint16_t a);  // RVA: 0x6B1560
        uint16_t xju();  // RVA: 0x6C3010
        bool xjv();  // RVA: 0x6BFB10
        static void xjw(uint16_t a);  // RVA: 0x63E5A0
        void xjx();  // RVA: 0x63E5A0
        static uint16_t xjy(uint16_t a, uint16_t b);  // RVA: 0x6B1720
        static uint16_t xjz(uint16_t a, uint16_t b);  // RVA: 0x6B1720
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
    bool Equals(RawEncryptedVector2 other);  // RVA: 0x6C9D70
    bool Equals(Il2CppObject* obj);  // RVA: 0x6C9DA0
    int32_t GetHashCode();  // RVA: 0x6C9D90
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
        static ObscuredVector2 op_Implicit(Vector2 value);  // RVA: 0x6C4BE0
        static Vector2 op_Implicit(ObscuredVector2 value);  // RVA: 0x6C4BD0
        static Vector3 op_Implicit(ObscuredVector2 value);  // RVA: 0x6C4C10
        static ObscuredVector2 xka(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6C4D80
        static ObscuredVector2 xkb(Vector2 a, ObscuredVector2 b);  // RVA: 0x6C4E10
        static ObscuredVector2 xkc(ObscuredVector2 a, Vector2 b);  // RVA: 0x6C4E90
        static ObscuredVector2 xkd(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6C4F10
        static ObscuredVector2 xke(Vector2 a, ObscuredVector2 b);  // RVA: 0x6C4FA0
        static ObscuredVector2 xkf(ObscuredVector2 a, Vector2 b);  // RVA: 0x6C5020
        static ObscuredVector2 xkg(ObscuredVector2 a);  // RVA: 0x6C50A0
        static ObscuredVector2 xkh(ObscuredVector2 a, float b);  // RVA: 0x6C5120
        static ObscuredVector2 xki(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6C51A0
        static ObscuredVector2 xkj(float a, ObscuredVector2 b);  // RVA: 0x6C5230
        static ObscuredVector2 xkk(ObscuredVector2 a, float b);  // RVA: 0x6C52B0
        static bool xkl(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6C5330
        static bool xkm(Vector2 a, ObscuredVector2 b);  // RVA: 0x6C5390
        static bool xkn(ObscuredVector2 a, Vector2 b);  // RVA: 0x6C53F0
        static bool xko(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6C5440
        static bool xkp(Vector2 a, ObscuredVector2 b);  // RVA: 0x6C54A0
        static bool xkq(ObscuredVector2 a, Vector2 b);  // RVA: 0x6C5500
        bool Equals(Il2CppObject* other);  // RVA: 0x6C4780
        bool Equals(ObscuredVector2 other);  // RVA: 0x6C46A0
        bool Equals(Vector2 other);  // RVA: 0x6C4730
        int32_t GetHashCode();  // RVA: 0x6C4960
        Il2CppString* ToString();  // RVA: 0x6C4A10
        Il2CppString* xkr(Il2CppString* a);  // RVA: 0x6C5550
        void xks();  // RVA: 0x6C5590
        Vector2 xkt();  // RVA: 0x6C5660
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6C49A0
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(Vector2 value);  // RVA: 0x6C4A50
        void .ctor(float x, float y);  // RVA: 0x6C4A40
        float xku();  // RVA: 0x6C56A0
        void xkv(float a);  // RVA: 0x6C56C0
        float xkw();  // RVA: 0x6C5730
        void xkx(float a);  // RVA: 0x6C5750
        float get_Item(int32_t index);  // RVA: 0x6C4B20
        void set_Item(int32_t index, float value);  // RVA: 0x6C4C50
        static RawEncryptedVector2 xky(Vector2 a, int32_t b);  // RVA: 0x6C57C0
        static RawEncryptedVector2 xkz(float a, float b, int32_t c);  // RVA: 0x6C5820
        static Vector2 xla(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6C5880
        static ObscuredVector2 xlb(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6C58E0
        static int32_t xlc();  // RVA: 0x6AF3F0
        static bool xld(Vector2 a, Vector2 b);  // RVA: 0x6C5910
        static bool xle(float a, float b);  // RVA: 0x6C5960
        RawEncryptedVector2 xlf(int32_t a);  // RVA: 0x6C5A20
        void xlg(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6C5AA0
        Vector2 xlh();  // RVA: 0x6C5B50
        void wov();  // RVA: 0x6C4D40
        static bool xli(Vector2 a, int32_t b);  // RVA: 0x6C5B60
        void xlj(Vector2 a);  // RVA: 0x6C5B70
        Vector2 xlk();  // RVA: 0x6C5C00
        bool xll();  // RVA: 0x6C4660
        static void xlm(int32_t a);  // RVA: 0x63E5A0
        void xln();  // RVA: 0x63E5A0
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
    bool Equals(RawEncryptedVector2Int other);  // RVA: 0x6C9D70
    bool Equals(Il2CppObject* obj);  // RVA: 0x6C9CE0
    int32_t GetHashCode();  // RVA: 0x6C9D90
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
        static ObscuredVector2Int op_Implicit(Vector2Int value);  // RVA: 0x6C37E0
        static Vector2Int op_Implicit(ObscuredVector2Int value);  // RVA: 0x6C3860
        static Vector3Int op_Explicit(ObscuredVector2Int v);  // RVA: 0x6C3760
        static Vector2 op_Implicit(ObscuredVector2Int value);  // RVA: 0x6C37B0
        static ObscuredVector2Int xlo(ObscuredVector2Int a);  // RVA: 0x6C3970
        static ObscuredVector2Int xlp(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6C39E0
        static ObscuredVector2Int xlq(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6C3A70
        static ObscuredVector2Int xlr(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6C3AF0
        static ObscuredVector2Int xls(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6C3B80
        static ObscuredVector2Int xlt(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6C3C00
        static ObscuredVector2Int xlu(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6C3C80
        static ObscuredVector2Int xlv(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6C3D00
        static ObscuredVector2Int xlw(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6C3D90
        static ObscuredVector2Int xlx(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6C3E10
        static ObscuredVector2Int xly(int32_t a, ObscuredVector2Int b);  // RVA: 0x6C3E90
        static ObscuredVector2Int xlz(ObscuredVector2Int a, int32_t b);  // RVA: 0x6C3F10
        static ObscuredVector2Int xma(ObscuredVector2Int a, int32_t b);  // RVA: 0x6C3F90
        static bool xmb(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6C4010
        static bool xmc(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6C4090
        bool Equals(Il2CppObject* other);  // RVA: 0x6C3160
        bool Equals(ObscuredVector2Int other);  // RVA: 0x6C32E0
        bool Equals(Vector2Int other);  // RVA: 0x6C3120
        int32_t GetHashCode();  // RVA: 0x6C3370
        Il2CppString* ToString();  // RVA: 0x6C3410
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6C33A0
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(Vector2Int value);  // RVA: 0x6C3650
        void .ctor(int32_t x, int32_t y);  // RVA: 0x6C35C0
        int32_t xmd();  // RVA: 0x6C4120
        void xme(int32_t a);  // RVA: 0x6C4130
        int32_t xmf();  // RVA: 0x6C41D0
        void xmg(int32_t a);  // RVA: 0x6C41F0
        int32_t get_Item(int32_t index);  // RVA: 0x6C36C0
        void set_Item(int32_t index, int32_t value);  // RVA: 0x6C3870
        static RawEncryptedVector2Int xmh(Vector2Int a, int32_t b);  // RVA: 0x6C4290
        static RawEncryptedVector2Int xmi(int32_t a, int32_t b, int32_t c);  // RVA: 0x6C42B0
        static Vector2Int xmj(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6C42D0
        static ObscuredVector2Int xmk(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6C42F0
        static int32_t xml();  // RVA: 0x6AF3F0
        RawEncryptedVector2Int xmm(int32_t a);  // RVA: 0x6C4360
        void xmn(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6C4400
        Vector2Int xmo();  // RVA: 0x6C4460
        void wov();  // RVA: 0x6C3910
        static bool xmp(Vector2Int a, int32_t b);  // RVA: 0x6C4470
        void xmq(Vector2Int a);  // RVA: 0x6C4480
        Vector2Int xmr();  // RVA: 0x6C44D0
        bool xms();  // RVA: 0x6C4660
        static void xmt(int32_t a);  // RVA: 0x63E5A0
        void xmu();  // RVA: 0x63E5A0
        static Vector2Int xmv(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6C4680
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
    bool Equals(RawEncryptedVector3 other);  // RVA: 0x6C9E30
    bool Equals(Il2CppObject* obj);  // RVA: 0x6C9E50
    int32_t GetHashCode();  // RVA: 0x6C9F00
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
        static ObscuredVector3 op_Implicit(Vector3 value);  // RVA: 0x6C8390
        static Vector3 op_Implicit(ObscuredVector3 value);  // RVA: 0x6C83D0
        static ObscuredVector3 xmw(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6C8510
        static ObscuredVector3 xmx(Vector3 a, ObscuredVector3 b);  // RVA: 0x6C85D0
        static ObscuredVector3 xmy(ObscuredVector3 a, Vector3 b);  // RVA: 0x6C8670
        static ObscuredVector3 xmz(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6C8720
        static ObscuredVector3 xna(Vector3 a, ObscuredVector3 b);  // RVA: 0x6C87E0
        static ObscuredVector3 xnb(ObscuredVector3 a, Vector3 b);  // RVA: 0x6C8880
        static ObscuredVector3 xnc(ObscuredVector3 a);  // RVA: 0x6C8930
        static ObscuredVector3 xnd(ObscuredVector3 a, float b);  // RVA: 0x6C89B0
        static ObscuredVector3 xne(float a, ObscuredVector3 b);  // RVA: 0x6C8A40
        static ObscuredVector3 xnf(ObscuredVector3 a, float b);  // RVA: 0x6C8AD0
        static bool xng(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6C8B60
        static bool xnh(Vector3 a, ObscuredVector3 b);  // RVA: 0x6C8C00
        static bool xni(ObscuredVector3 a, Vector3 b);  // RVA: 0x6C8C70
        static bool xnj(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6C8CF0
        static bool xnk(Vector3 a, ObscuredVector3 b);  // RVA: 0x6C8D90
        static bool xnl(ObscuredVector3 a, Vector3 b);  // RVA: 0x6C8E00
        bool Equals(Il2CppObject* other);  // RVA: 0x6C7E20
        bool Equals(ObscuredVector3 other);  // RVA: 0x6C7D30
        bool Equals(Vector3 other);  // RVA: 0x6C7F80
        int32_t GetHashCode();  // RVA: 0x6C7FE0
        Il2CppString* ToString();  // RVA: 0x6C8140
        Il2CppString* xnm(Il2CppString* a);  // RVA: 0x6C8E70
        void xnn();  // RVA: 0x6C8EC0
        Vector3 xno();  // RVA: 0x6C9040
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6C8060
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(Vector3 value);  // RVA: 0x6C81C0
        void .ctor(float x, float y, float z);  // RVA: 0x6C8190
        float xnp();  // RVA: 0x6C9170
        void xnq(float a);  // RVA: 0x6C9190
        float xnr();  // RVA: 0x6C9210
        void xns(float a);  // RVA: 0x6C9230
        float xnt();  // RVA: 0x6C92B0
        void xnu(float a);  // RVA: 0x6C92D0
        float get_Item(int32_t index);  // RVA: 0x6C82C0
        void set_Item(int32_t index, float value);  // RVA: 0x6C8400
        static RawEncryptedVector3 xnv(Vector3 a, int32_t b);  // RVA: 0x6C9360
        static RawEncryptedVector3 xnw(float a, float b, float c, int32_t d);  // RVA: 0x6C9400
        static Vector3 xnx(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6C94A0
        static ObscuredVector3 xny(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6C9530
        static int32_t xnz();  // RVA: 0x6AF3F0
        static bool xoa(Vector3 a, Vector3 b);  // RVA: 0x6C9570
        static bool xob(float a, float b);  // RVA: 0x6C95E0
        RawEncryptedVector3 xoc(int32_t a);  // RVA: 0x6C96A0
        void xod(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6C9750
        Vector3 xoe();  // RVA: 0x6C83D0
        void wov();  // RVA: 0x6C84B0
        static bool xof(Vector3 a, int32_t b);  // RVA: 0x6C9850
        void xog(Vector3 a);  // RVA: 0x6C9880
        Vector3 xoh();  // RVA: 0x6C9950
        bool xoi();  // RVA: 0x6C7CE0
        static void xoj(int32_t a);  // RVA: 0x63E5A0
        void xok();  // RVA: 0x63E5A0
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
    bool Equals(RawEncryptedVector3Int other);  // RVA: 0x6C9E30
    bool Equals(Il2CppObject* obj);  // RVA: 0x6D0F90
    int32_t GetHashCode();  // RVA: 0x6C9F00
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
        static ObscuredVector3Int op_Implicit(Vector3Int value);  // RVA: 0x6C6480
        static Vector3Int op_Implicit(ObscuredVector3Int value);  // RVA: 0x6C64C0
        static Vector2Int xol(ObscuredVector3Int a);  // RVA: 0x6C6640
        static Vector3 op_Implicit(ObscuredVector3Int value);  // RVA: 0x6C6420
        static ObscuredVector3Int xom(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6C6680
        static ObscuredVector3Int xon(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6C6790
        static ObscuredVector3Int xoo(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6C68A0
        static ObscuredVector3Int xop(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6C69A0
        static ObscuredVector3Int xoq(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6C6AB0
        static ObscuredVector3Int xor(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6C6BC0
        static ObscuredVector3Int xos(ObscuredVector3Int a, int32_t b);  // RVA: 0x6C6CC0
        static ObscuredVector3Int xot(int32_t a, ObscuredVector3Int b);  // RVA: 0x6C6DD0
        static ObscuredVector3Int xou(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6C6EE0
        static ObscuredVector3Int xov(ObscuredVector3Int a, int32_t b);  // RVA: 0x6C6F90
        static bool xow(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6C7020
        static bool xox(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6C70B0
        static bool xoy(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6C7120
        static bool xoz(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6C7180
        static bool xpa(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6C7210
        static bool xpb(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6C7280
        bool Equals(Il2CppObject* other);  // RVA: 0x6C5F00
        bool Equals(ObscuredVector3Int other);  // RVA: 0x6C5E20
        bool Equals(Vector3Int other);  // RVA: 0x6C6050
        int32_t GetHashCode();  // RVA: 0x6C60C0
        Il2CppString* ToString();  // RVA: 0x6C61F0
        Il2CppString* xpc(Il2CppString* a);  // RVA: 0x6C72F0
        void OnBeforeSerialize();  // RVA: 0x63E5A0
        void OnAfterDeserialize();  // RVA: 0x6C6160
        int32_t wou();  // RVA: 0x6AC4B0
        void .ctor(Vector3Int value);  // RVA: 0x6C6230
        void .ctor(int32_t x, int32_t y, int32_t z);  // RVA: 0x6C6300
        int32_t xpd();  // RVA: 0x6C7340
        void xpe(int32_t a);  // RVA: 0x6C7370
        int32_t xpf();  // RVA: 0x6C7460
        void xpg(int32_t a);  // RVA: 0x6C7490
        int32_t xph();  // RVA: 0x6C7580
        void xpi(int32_t a);  // RVA: 0x6C75A0
        int32_t get_Item(int32_t index);  // RVA: 0x6C6330
        void set_Item(int32_t index, int32_t value);  // RVA: 0x6C64F0
        static RawEncryptedVector3Int xpj(Vector3Int a, int32_t b);  // RVA: 0x6C7690
        static RawEncryptedVector3Int xpk(int32_t a, int32_t b, int32_t c, int32_t d);  // RVA: 0x6C76D0
        static Vector3Int xpl(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6C7700
        static ObscuredVector3Int xpm(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6C7730
        static int32_t xpn();  // RVA: 0x6AF3F0
        RawEncryptedVector3Int xpo(int32_t a);  // RVA: 0x6C77F0
        void xpp(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6C7900
        Vector3Int xpq();  // RVA: 0x6C64C0
        void wov();  // RVA: 0x6C65A0
        static bool xpr(Vector3Int a, int32_t b);  // RVA: 0x6C79B0
        void xps(Vector3Int a);  // RVA: 0x6C79E0
        Vector3Int xpt();  // RVA: 0x6C7A60
        bool xpu();  // RVA: 0x6C7CE0
        static void xpv(int32_t a);  // RVA: 0x63E5A0
        void xpw();  // RVA: 0x63E5A0
        static Vector3Int xpx(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6C7D10
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
    static void .cctor();  // RVA: 0x6D71B0
    void .ctor();  // RVA: 0x628390
    void xpy(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7300
    void xpz(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D73F0
    void xqa(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7490
    void xqb(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7520
    void xqc(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D75C0
    void xqd(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7660
    void xqe(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7720
    void xqf(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D77E0
    void xqg(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7890
    void xqh(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7930
    void xqi(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D79F0
    void xqj(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7A90
    void xqk(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7B30
    void xql(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7D80
    void xqm(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7E10
    void xqn(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7EB0
    void xqo(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7F40
    void xqp(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D7FE0
    void xqq(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D8080
    void xqr(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D8120
    void xqs(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D82D0
    void xqt(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D8470
    void xqu(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D8670
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
        void WriteJson(JsonWriter* writer, Il2CppObject* value, JsonSerializer* serializer);  // RVA: 0x6CE850
        static void xqv(JsonWriter* a, Quaternion b);  // RVA: 0x6D05A0
        static void xqw(JsonWriter* a, Vector2 b);  // RVA: 0x6D0740
        static void xqx(JsonWriter* a, Vector2Int b);  // RVA: 0x6D0850
        static void xqy(JsonWriter* a, Vector3 b);  // RVA: 0x6D0960
        static void xqz(JsonWriter* a, Vector3Int b);  // RVA: 0x6D0AC0
        Il2CppObject* ReadJson(JsonReader* reader, Type* objectType, Il2CppObject* existingValue, JsonSerializer* serializer);  // RVA: 0x6CC780
        bool CanConvert(Type* objectType);  // RVA: 0x6CC720
        void .ctor();  // RVA: 0x6CEB30
        static void .cctor();  // RVA: 0x6CE9F0
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
    static void .cctor();  // RVA: 0x6D7140
    void .ctor();  // RVA: 0x628390
    int32_t xra(dby* a, dby* b);  // RVA: 0x6D8860
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
    Il2CppString* xrb();  // RVA: 0x6D0E80
    void .ctor(Il2CppString* a, dby[][] b);  // RVA: 0x6DCCB0
    Il2CppString* lmj(dby[][] a);  // RVA: 0x6DDDF0
    void xrh();  // RVA: 0x6DE480
    void lkt();  // RVA: 0x6DD8C0
    bool dym(Il2CppString* a);  // RVA: 0x6DD3D0
    void xrf(double a);  // RVA: 0x6DE2F0
    bool xrg(Il2CppString* a);  // RVA: 0x6DE300
    System.Collections.Generic.IReadOnlyList<dby> xrc();  // RVA: 0x69B000
    bool lmm(Il2CppString* a);  // RVA: 0x6DE160
    double xre();  // RVA: 0x6DE2E0
    void .ctor(Il2CppString* a, dby[][] b, Il2CppString* c);  // RVA: 0x6DCE30
    void bgr();  // RVA: 0x6DCEA0
    Il2CppString* xri(dby[][] a);  // RVA: 0x6DE9B0
    Il2CppString* xrd();  // RVA: 0x63AEB0
    Il2CppString* ilh(dby[][] a);  // RVA: 0x6DD550
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
    void .ctor(int32_t a);  // RVA: 0x6856C0
    void xrj();  // RVA: 0x63E5A0
    bool MoveNext();  // RVA: 0x6DED20
    Il2CppObject* xrk();  // RVA: 0x69B000
    void xrl();  // RVA: 0x6DEE20
    Il2CppObject* xrm();  // RVA: 0x69B000
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
    void MoveNext();  // RVA: 0x6D5AB0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6D5D50
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
    dcd* bbk(int32_t a);  // RVA: 0x6DEF50
    static dcd* xrs();  // RVA: 0x6DF530
    static dcd* jtt();  // RVA: 0x6DF330
    static void xro(HashGeneratorResultHandler* a);  // RVA: 0x6DF450
    static dcd* jju();  // RVA: 0x6DF300
    dcd* xrw(int32_t a);  // RVA: 0x6DF710
    IEnumerator* xsa();  // RVA: 0x6DFB70
    dcd* ene(int32_t a);  // RVA: 0x6DF140
    static void xrn(HashGeneratorResultHandler* a);  // RVA: 0x6DF390
    dcc* xrp();  // RVA: 0x6DF510
    bool xrv();  // RVA: 0x6DF6F0
    static bool xrr();  // RVA: 0x67E0F0
    System.Threading.Tasks.Task<dcc> xry(int32_t a);  // RVA: 0x6DF8A0
    void OnDestroy();  // RVA: 0x6DEE60
    static dcd* nkd();  // RVA: 0x6DF360
    void xrq(dcc* a);  // RVA: 0x6DF520
    static bool rd();  // RVA: 0x67E0F0
    void .ctor();  // RVA: 0x6DEED0
    static dcd* xrt(int32_t a);  // RVA: 0x6DF560
    static dcd* doz();  // RVA: 0x6DF110
    dcd* xrz(int32_t a);  // RVA: 0x6DF9B0
    static System.Threading.Tasks.Task<dcc> xru(int32_t a);  // RVA: 0x6DF5B0
    System.Threading.Tasks.Task<dcc> xrx(int32_t a);  // RVA: 0x6DF760
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
    Il2CppString* xsb();  // RVA: 0x6D0E80
    Il2CppString* xsc();  // RVA: 0x69B000
    void .ctor(Il2CppString* a, Stream* b, dax<dce> c);  // RVA: 0x6DFC50
    void .ctor(Il2CppString* a, Il2CppString* b);  // RVA: 0x6DFD50
    Il2CppString* ToString();  // RVA: 0x6DFBE0
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> <>9__2_0;


    // Methods
    static void .cctor();  // RVA: 0x6D7290
    void .ctor();  // RVA: 0x628390
    void xsd(FilesProgress a);  // RVA: 0x63E5A0
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    struct FilesProgress
    {
    public:
    
        // Methods
        static FilesProgress xse(float a, Il2CppString* b);  // RVA: 0x628750
        static FilesProgress None();  // RVA: 0x628750
        static System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> xsf(Il2CppString* a);  // RVA: 0x6CB360
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
    bool xsg(Il2CppString* a);  // RVA: 0x6E08E0
    static bool xsh(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6E0BE0
    bool fj(Il2CppString* a);  // RVA: 0x6E02E0
    Il2CppString* ToString();  // RVA: 0x6DFDA0
    bool bqy(Il2CppString* a);  // RVA: 0x6DFFE0
    void .ctor();  // RVA: 0x628390
    bool gfn(Il2CppString* a);  // RVA: 0x6E05E0
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
    a[][] xso(a[][] a, a[][] b);  // RVA: 0x42CD90
    dbz[][] xsj();  // RVA: 0x69B000
    bool eiy(Il2CppString* a);  // RVA: 0x6E0D30
    bool lic(Il2CppString* a, dbz[][] b);  // RVA: 0x6E0DC0
    bool xsl(Il2CppString* a);  // RVA: 0x6E0D30
    dca* xsm(dca* a);  // RVA: 0x6E0FE0
    bool lgi(Il2CppString* a, dbz[][] b);  // RVA: 0x6E0DC0
    bool xsk(Il2CppString* a);  // RVA: 0x6E0CB0
    dbz[][] xsi();  // RVA: 0x6D0E80
    bool xsn(Il2CppString* a, dbz[][] b);  // RVA: 0x6E0DC0
    bool fsc(Il2CppString* a);  // RVA: 0x6E0CB0
    bool bnc(Il2CppString* a);  // RVA: 0x6E0CB0
    void .ctor(dbz[][] a, dbz[][] b);  // RVA: 0x6DFD50
    bool nqx(Il2CppString* a);  // RVA: 0x6E0D30
    dca* i(dca* a);  // RVA: 0x6E0E40
    bool ntx(Il2CppString* a);  // RVA: 0x6E0D30
    bool gdl(Il2CppString* a, dbz[][] b);  // RVA: 0x6E0DC0
    bool nsd(Il2CppString* a);  // RVA: 0x6E0D30
    dca* ltl(dca* a);  // RVA: 0x6E0F10
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
        FilterGroup get_DefaultGroup();  // RVA: 0x6CB490
        void set_DefaultGroup(FilterGroup value);  // RVA: 0x6CB4A0
        void .ctor();  // RVA: 0x6CB480
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dcb
{
public:

    // Methods
    static dca* xsr(bool a);  // RVA: 0x6E2FB0
    static dca* ess(bool a);  // RVA: 0x6E1910
    static dca* iqg(bool a);  // RVA: 0x6E1EF0
    static dca* ols(bool a);  // RVA: 0x6E2D00
    static dca* mbn(bool a);  // RVA: 0x6E24D0
    static dca* fqk(bool a);  // RVA: 0x6E1BB0
    static dca* xsv(bool a);  // RVA: 0x6E3630
    static FilteringSettings* xsp();  // RVA: 0x6E2E40
    static dca* xst(bool a);  // RVA: 0x6E33E0
    static dca* nwr(bool a);  // RVA: 0x6E2A10
    static dca* xsx(bool a);  // RVA: 0x6E1BB0
    static dca* cgp(bool a);  // RVA: 0x6E10B0
    static dca* xss(bool a);  // RVA: 0x6E30F0
    static dca* xsq(bool a);  // RVA: 0x6E2E70
    static dca* hzm(bool a);  // RVA: 0x6E1C00
    static dca* hwu(bool a);  // RVA: 0x6E1BB0
    static dca* xsw(bool a);  // RVA: 0x6E39B0
    static dca* meg(bool a);  // RVA: 0x6E2720
    static dca* fpn(bool a);  // RVA: 0x6E1960
    static dca* jyf(bool a);  // RVA: 0x6E21E0
    static dca* crn(bool a);  // RVA: 0x6E14E0
    static dca* xsu(bool a);  // RVA: 0x6E1910
    static dca* eob(bool a);  // RVA: 0x6E1620
    static dca* cl(bool a);  // RVA: 0x6E11F0
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
    void lgu();  // RVA: 0x6E3DA0
    Il2CppString* xsz();  // RVA: 0x6E3E10
    void fyv();  // RVA: 0x6E3CC0
    double xte();  // RVA: 0x6E3E70
    static dcc* xtf(Il2CppString* a);  // RVA: 0x6E3E90
    void xtc(Il2CppString* a);  // RVA: 0x6E3E50
    bool kzu(Il2CppString* a);  // RVA: 0x6E3CA0
    void .ctor();  // RVA: 0x628390
    Il2CppString* xsy();  // RVA: 0x6E3E10
    bool xth(Il2CppString* a);  // RVA: 0x6E3CA0
    Il2CppString* xtb();  // RVA: 0x6D0E80
    void xti();  // RVA: 0x6E3F70
    static dcc* xtg(dbv* a);  // RVA: 0x6E3F00
    bool kzs(Il2CppString* a);  // RVA: 0x6E3CA0
    bool dek(Il2CppString* a);  // RVA: 0x6E3CA0
    bool goh(Il2CppString* a);  // RVA: 0x6E3CA0
    System.Collections.Generic.IReadOnlyList<dby> xta();  // RVA: 0x6E3E30
    static dcc* ii(Il2CppString* a);  // RVA: 0x6E3D30
    bool xtd();  // RVA: 0x6E3E60
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    class HashGeneratorResultHandler : public MulticastDelegate
    {
    public:
    
        // Methods
        void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6CB4B0
        void Invoke(dcc* result);  // RVA: 0x678E30
        IAsyncResult* BeginInvoke(dcc* result, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x678F60
        void EndInvoke(IAsyncResult* result);  // RVA: 0x678E20
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dcd
{
public:

    // Methods
    dcc* xrp();  // RVA: 0x41C1E0
    bool xrv();  // RVA: 0x4211E0
    dcd* xtj(int32_t a);  // RVA: 0x41C820
    System.Threading.Tasks.Task<dcc> xtk(int32_t a);  // RVA: 0x41C820
};

// Namespace: <global>
class dce
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SHA1Managed* bmtg; // 0x0010

    // Methods
    Byte[][] xtl(Stream* a);  // RVA: 0x6E4070
    Byte[][] iuf(Stream* a);  // RVA: 0x6E4070
    Byte[][] lfy(Stream* a);  // RVA: 0x6E4070
    void .ctor();  // RVA: 0x6E4000
    Byte[][] xtm(Byte[][] a);  // RVA: 0x6E4090
    void Dispose();  // RVA: 0x6E3FE0
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
    dcc* xtn();  // RVA: 0x6D0E80
    void xto(dcc* a);  // RVA: 0x6E3E50
    bool xtp();  // RVA: 0x6E40F0
    void xtq(bool a);  // RVA: 0x6E4100
    void .ctor(int32_t a);  // RVA: 0x6E40C0
    void Execute();  // RVA: 0x6E40B0
    void xtr(dcc* a);  // RVA: 0x6E4110
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<dce> <>9__1_0;


    // Methods
    static void .cctor();  // RVA: 0x6D7220
    void .ctor();  // RVA: 0x628390
    dce* xts();  // RVA: 0x6D88A0
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
    void .ctor();  // RVA: 0x628390
    void ejp(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6E4660
    void sa(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6E4B90
    void eex(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6E4130
    void xtt(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6E50C0
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
    void .ctor();  // RVA: 0x628390
    void xtu();  // RVA: 0x6E55F0
    void mpf();  // RVA: 0x6E55F0
    void chm();  // RVA: 0x6E55F0
};

// Namespace: <global>
class dci : public dcf
{
public:
    // Static fields
    // static Il2CppObject* bmtv;


    // Methods
    static dbv* bpv(Il2CppString* a, dca* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6E59F0
    static dbv* iw(Il2CppString* a, dca* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6E64C0
    static dbv* xtv(Il2CppString* a, dca* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6E6960
    static void .cctor();  // RVA: 0x6E5970
    void Execute();  // RVA: 0x6E5620
    static dbv* gpg(Il2CppString* a, dca* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6E6020
    void .ctor(int32_t a);  // RVA: 0x6E40C0
    void xtw(Il2CppString* a, dca* b);  // RVA: 0x6E6E00
    void glx(Il2CppString* a, dca* b);  // RVA: 0x6E5E90
    static dbv* zw(Il2CppString* a, dca* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6E6F90
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
    Il2CppString* xtx();  // RVA: 0x6D0E80
    AndroidAppSource cvp(Il2CppString* a);  // RVA: 0x6E7610
    AndroidAppSource xty();  // RVA: 0x6CB490
    AndroidAppSource xtz(Il2CppString* a);  // RVA: 0x6E77B0
    void .ctor(Il2CppString* a);  // RVA: 0x6E7430
};

// Namespace: <global>
class dck
{
public:

    // Methods
    static dcj* xua();  // RVA: 0x6E7A80
    static dcj* ifs();  // RVA: 0x6E7950
    static bool lzy();  // RVA: 0x6E79D0
    static bool xub();  // RVA: 0x6E79D0
    static bool mkq();  // RVA: 0x6E79D0
    static dcj* myc();  // RVA: 0x6E7A00
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
        void xuc(Action* a);  // RVA: 0x418540
        void xud(Action* a);  // RVA: 0x418540
        bool xue();  // RVA: 0x4211E0
        void xuf(bool a);  // RVA: 0x41C290
        bool xug();  // RVA: 0x4211E0
        void xuh(bool a);  // RVA: 0x41C290
        bool xui();  // RVA: 0x4211E0
        void xuj(bool a);  // RVA: 0x41C290
        dcl* xuk();  // RVA: 0x41C1E0
        void xul(dcl* a);  // RVA: 0x418540
        void Start();  // RVA: 0x42DD80
        void OnEnable();  // RVA: 0x42DD80
        void OnDisable();  // RVA: 0x42DD80
        void OnApplicationQuit();  // RVA: 0x42DD80
        void OnDestroy();  // RVA: 0x42DD80
        void xum(dcl* a);  // RVA: 0x418540
        void xun();  // RVA: 0x42DD80
        bool xuo();  // RVA: 0x4211E0
        void xup();  // RVA: 0x42DD80
        void xuq();  // RVA: 0x42DD80
        bool xur();  // RVA: 0x4211E0
        bool xus();  // RVA: 0x4211E0
        void xut();  // RVA: 0x42DD80
        void .ctor();  // RVA: 0x42DD80
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcl
{
public:

    // Methods
    Il2CppString* xuu();  // RVA: 0x41C1E0
};

// Namespace: <global>
class dcm
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmue>k__BackingField; // 0x0010

    // Methods
    Il2CppString* xuv();  // RVA: 0x6D0E80
    void .ctor(Il2CppString* a);  // RVA: 0x6E7B60
    Il2CppString* xuu();  // RVA: 0x6E7B00
    Il2CppString* ToString();  // RVA: 0x6E7B00
};

// Namespace: <global>
class InjectionDetectedEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6CB5E0
    void Invoke(Il2CppString* reason);  // RVA: 0x678E30
    IAsyncResult* BeginInvoke(Il2CppString* reason, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x678F60
    void EndInvoke(IAsyncResult* result);  // RVA: 0x678E20
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
        dcm* xuw();  // RVA: 0x6CB760
        static InjectionDetector* xux();  // RVA: 0x6CB7E0
        static void xuy();  // RVA: 0x6CB860
        static void xuz(System.Action<System.String> a);  // RVA: 0x6CB8E0
        static void xva();  // RVA: 0x6CB960
        static void xvb();  // RVA: 0x6CB9E0
        void xut();  // RVA: 0x6CB6E0
        void .ctor();  // RVA: 0x6CB6A0
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
    Type* xvc();  // RVA: 0x6D0E80
    bool xvd();  // RVA: 0x6E40F0
    Il2CppObject* xve();  // RVA: 0x63AEB0
    Il2CppObject* xvf();  // RVA: 0x68B5E0
    void .ctor(Type* a, bool b, Il2CppObject* c, Il2CppObject* d);  // RVA: 0x6E7CA0
    Il2CppString* xuu();  // RVA: 0x6E7BA0
    Il2CppString* ToString();  // RVA: 0x6E7BA0
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
        dcn* xvg();  // RVA: 0x6CBAE0
        static ObscuredCheatingDetector* xvh();  // RVA: 0x6CBB60
        static ObscuredCheatingDetector* xvi();  // RVA: 0x6CBB90
        static ObscuredCheatingDetector* xvj(Action* a);  // RVA: 0x6CBCE0
        static void xvk();  // RVA: 0x6CBD30
        static void xvl();  // RVA: 0x6CBE40
        static bool xvm();  // RVA: 0x6CBF50
        static bool xvn();  // RVA: 0x6CC050
        void .ctor();  // RVA: 0x6CBA60
        void xvo();  // RVA: 0x6CC1C0
        void xvp(dbt* a, Il2CppObject* b, Il2CppObject* c);  // RVA: 0x6CC350
        void xvq(dbt* a, bool b, Il2CppObject* c, Il2CppObject* d);  // RVA: 0x6CC430
        ObscuredCheatingDetector* xvr(Action* a);  // RVA: 0x6CC520
        void xut();  // RVA: 0x6CBAD0
        static void xvs(b a, bool b, c c, bool d, a e, d f);  // RVA: 0x563BC0
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
    bool xvt();  // RVA: 0x679A10
    bool xvu();  // RVA: 0x685D80
    bool xvv();  // RVA: 0x6E7F30
    bool xvw();  // RVA: 0x6E7F40
    bool xvx();  // RVA: 0x6E7F50
    void .ctor(bool a, bool b, bool c, bool d, bool e);  // RVA: 0x6E7D30
    Il2CppString* xuu();  // RVA: 0x6E7D90
    Il2CppString* ToString();  // RVA: 0x6E7D20
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
        dco* xvy();  // RVA: 0x6D15E0
        int32_t get_TimeJumpThreshold();  // RVA: 0x6D14F0
        void set_TimeJumpThreshold(int32_t value);  // RVA: 0x6D1520
        bool get_UseDsp();  // RVA: 0x6D1500
        void set_UseDsp(bool value);  // RVA: 0x6D1530
        bool get_WatchTimeScale();  // RVA: 0x6D1510
        void set_WatchTimeScale(bool value);  // RVA: 0x6D1540
        static SpeedHackDetector* xvz();  // RVA: 0x6D1660
        static SpeedHackDetector* xwa();  // RVA: 0x6D1690
        static SpeedHackDetector* xwb(Action* a);  // RVA: 0x6D1900
        static SpeedHackDetector* xwc(Action* a, float b);  // RVA: 0x6D1A20
        static SpeedHackDetector* xwd(Action* a, float b, uint8_t c);  // RVA: 0x6D1B10
        static SpeedHackDetector* xwe(Action* a, float b, uint8_t c, int32_t d);  // RVA: 0x6D1BD0
        static void xwf();  // RVA: 0x6D1C60
        static void xwg();  // RVA: 0x6D1D70
        static void xwh(float a);  // RVA: 0x6D1E80
        static void xwi(float a);  // RVA: 0x6D1FE0
        static void xwj();  // RVA: 0x6D2120
        static void xwk();  // RVA: 0x6D2250
        void xwl();  // RVA: 0x6D2370
        void .ctor();  // RVA: 0x6D1470
        void OnApplicationPause(bool pause);  // RVA: 0x6D1040
        void Update();  // RVA: 0x6D10D0
        SpeedHackDetector* xwm(Action* a, float b, uint8_t c, int32_t d);  // RVA: 0x6D2460
        void xut();  // RVA: 0x6D15B0
        void xup();  // RVA: 0x6D1550
        bool xwn(int64_t a, int64_t b, int64_t c);  // RVA: 0x6D26D0
        void xwo(float a);  // RVA: 0x6D2790
        bool xwp();  // RVA: 0x6D27E0
        void xwq(float a);  // RVA: 0x6D2880
        void xwr();  // RVA: 0x6D28C0
        void xws();  // RVA: 0x6D28E0
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
    CheckResult xwt();  // RVA: 0x678C30
    ErrorKind xwu();  // RVA: 0x6E80B0
    void .ctor(CheckResult a, ErrorKind b);  // RVA: 0x6E8070
    Il2CppString* xuu();  // RVA: 0x6E7F60
    Il2CppString* ToString();  // RVA: 0x6E7F60
};

// Namespace: <global>
class OnlineTimeCallback : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6D0CD0
    void Invoke(OnlineTimeResult result);  // RVA: 0x6D0C90
    IAsyncResult* BeginInvoke(OnlineTimeResult result, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6D0C10
    void EndInvoke(IAsyncResult* result);  // RVA: 0x678E20
};

// Namespace: <global>
class TimeCheatingDetectorEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6D29E0
    void Invoke(CheckResult result, ErrorKind error);  // RVA: 0x6D29D0
    IAsyncResult* BeginInvoke(CheckResult result, ErrorKind error, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6D2930
    void EndInvoke(IAsyncResult* result);  // RVA: 0x678E20
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
    bool xwv();  // RVA: 0x679160
    Il2CppString* xww();  // RVA: 0x679170
    int64_t xwx();  // RVA: 0x6D0E80
    double xwy();  // RVA: 0x6D0E90
    DateTime xwz();  // RVA: 0x63AEB0
    OnlineTimeResult xxa(double a, DateTime b);  // RVA: 0x6D0EA0
    OnlineTimeResult xxb(Il2CppString* a, int64_t b);  // RVA: 0x6D0F20
    Il2CppString* ToString();  // RVA: 0x6D0D80
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
    void .ctor(int32_t a);  // RVA: 0x6856C0
    void xxc();  // RVA: 0x63E5A0
    bool MoveNext();  // RVA: 0x6E80C0
    Il2CppObject* xxd();  // RVA: 0x69B000
    void xxe();  // RVA: 0x6E84E0
    Il2CppObject* xxf();  // RVA: 0x69B000
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
    void MoveNext();  // RVA: 0x6D5470
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6D5700
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
    void .ctor(int32_t a);  // RVA: 0x6856C0
    void xxg();  // RVA: 0x63E5A0
    bool MoveNext();  // RVA: 0x6E8520
    Il2CppObject* xxh();  // RVA: 0x69B000
    void xxi();  // RVA: 0x6E8630
    Il2CppObject* xxj();  // RVA: 0x69B000
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
    void MoveNext();  // RVA: 0x6D5730
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6D5A40
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
    void MoveNext();  // RVA: 0x6D5DC0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6D66B0
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
    void .ctor(int32_t a);  // RVA: 0x6856C0
    void xxk();  // RVA: 0x63E5A0
    bool MoveNext();  // RVA: 0x6E8670
    Il2CppObject* xxl();  // RVA: 0x69B000
    void xxm();  // RVA: 0x6E8720
    Il2CppObject* xxn();  // RVA: 0x69B000
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
    Il2CppObject* xxq();  // RVA: 0x69B000
    void ltz();  // RVA: 0x6E8AA0
    Il2CppObject* xxs();  // RVA: 0x69B000
    void .ctor(int32_t a);  // RVA: 0x6856C0
    void xxp();  // RVA: 0x6E8B80
    void xxr();  // RVA: 0x6E8BD0
    bool MoveNext();  // RVA: 0x6E8760
    void xxo();  // RVA: 0x6E8AF0
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
    void MoveNext();  // RVA: 0x6D66E0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6D70D0
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
        dcp* xxt();  // RVA: 0x6D2F50
        static System.Lazy<das> xxu();  // RVA: 0x6D2FD0
        void xxv(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6D3020
        void xxw(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6D30C0
        Il2CppString* xxx();  // RVA: 0x6D3160
        void xxy(Il2CppString* a);  // RVA: 0x6D3170
        ErrorKind xxz();  // RVA: 0x6D3230
        void xya(ErrorKind a);  // RVA: 0x6D3240
        CheckResult xyb();  // RVA: 0x6D3250
        void xyc(CheckResult a);  // RVA: 0x6D3260
        OnlineTimeResult xyd();  // RVA: 0x6D3270
        void xye(OnlineTimeResult a);  // RVA: 0x6D32A0
        bool xyf();  // RVA: 0x6D32D0
        void xyg(bool a);  // RVA: 0x6D32E0
        void OnApplicationPause(bool pauseStatus);  // RVA: 0x6D2A90
        void Update();  // RVA: 0x6D2B10
        static TimeCheatingDetector* xyh();  // RVA: 0x6D32F0
        static TimeCheatingDetector* xyi(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6D3320
        static TimeCheatingDetector* xyj(float a, TimeCheatingDetectorEventHandler* b);  // RVA: 0x6D3510
        static void xyk();  // RVA: 0x6D3570
        static void xyl();  // RVA: 0x6D3680
        static IEnumerator* xym(Il2CppString* a, OnlineTimeCallback* b, RequestMethod c);  // RVA: 0x6D3790
        static IEnumerator* xyn(Uri* a, OnlineTimeCallback* b, RequestMethod c);  // RVA: 0x6D3830
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyo(Il2CppString* a, RequestMethod b);  // RVA: 0x6D38D0
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyp(Il2CppString* a, CancellationToken b, RequestMethod c);  // RVA: 0x6D39A0
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyq(Uri* a, RequestMethod b);  // RVA: 0x6D3A20
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyr(Uri* a, CancellationToken b, RequestMethod c);  // RVA: 0x6D3AB0
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xys(Il2CppString* a, RequestMethod b);  // RVA: 0x6D3C00
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyt(Il2CppString* a, CancellationToken b, RequestMethod c);  // RVA: 0x6D3CD0
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyu(Uri* a, RequestMethod b);  // RVA: 0x6D3D50
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyv(Uri* a, CancellationToken b, RequestMethod c);  // RVA: 0x6D3DE0
        static das* xyw();  // RVA: 0x6D3EF0
        static UnityWebRequest* xyx(Uri* a, RequestMethod b);  // RVA: 0x6D3F40
        static void xyy(UnityWebRequest* a, OnlineTimeResult b);  // RVA: 0x6D4180
        static Uri* xyz(Il2CppString* a);  // RVA: 0x6D4450
        static bool xza(Il2CppString* a, DateTime b);  // RVA: 0x6D4520
        void xzb();  // RVA: 0x6D4890
        bool xzc();  // RVA: 0x6D4940
        IEnumerator* xzd();  // RVA: 0x6D49D0
        System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> xze();  // RVA: 0x6D4A40
        UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> xzf();  // RVA: 0x6D4B30
        bool xzg();  // RVA: 0x6D4BF0
        TimeCheatingDetector* xzh(float a, TimeCheatingDetectorEventHandler* b);  // RVA: 0x6D4D20
        bool xzi(TimeCheatingDetector* a);  // RVA: 0x6D4E70
        void xut();  // RVA: 0x6D2F40
        bool xuo();  // RVA: 0x6D2E20
        void xuq();  // RVA: 0x6D2EF0
        void xup();  // RVA: 0x6D2E80
        IEnumerator* xzj();  // RVA: 0x6D4F40
        void xzk();  // RVA: 0x6D4FB0
        void xzl(OnlineTimeResult a);  // RVA: 0x6D50F0
        void xzm(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x6D5180
        void xzn(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x6D5240
        void xzo(Action* a);  // RVA: 0x6D5300
        void xzp(Action* a);  // RVA: 0x6D53B0
        static double xzq(Il2CppString* a);  // RVA: 0x6D5460
        static void xzr(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x63E5A0
        static void xzs(Action* a, int32_t b);  // RVA: 0x63E5A0
        static void xzt(Action* a, System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> b, int32_t c);  // RVA: 0x63E5A0
        static void xzu(float a, Action* b, System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> c, Action* d);  // RVA: 0x63E5A0
        void .ctor();  // RVA: 0x6D2D00
        static void .cctor();  // RVA: 0x6D2BE0
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
    bool xzv();  // RVA: 0x679A10
    bool xzw();  // RVA: 0x685D80
    bool xzx();  // RVA: 0x6E7F30
    bool xzy();  // RVA: 0x6E7F40
    void .ctor(bool a, bool b, bool c, bool d);  // RVA: 0x6E8D80
    Il2CppString* xuu();  // RVA: 0x6E8C10
    Il2CppString* ToString();  // RVA: 0x6E8C10
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
    void .ctor(int32_t a);  // RVA: 0x6856C0
    void xzz();  // RVA: 0x63E5A0
    bool MoveNext();  // RVA: 0x6FC900
    Il2CppObject* yaa();  // RVA: 0x69B000
    void yab();  // RVA: 0x6FCF30
    Il2CppObject* yac();  // RVA: 0x69B000
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
    void .ctor(int32_t a);  // RVA: 0x6856C0
    void yad();  // RVA: 0x63E5A0
    bool MoveNext();  // RVA: 0x6FCF70
    Il2CppObject* yae();  // RVA: 0x69B000
    void yaf();  // RVA: 0x6FD030
    Il2CppObject* yag();  // RVA: 0x69B000
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
        dcu* yah();  // RVA: 0x6D9A80
        bool yai();  // RVA: 0x6D9B00
        void yaj(bool a);  // RVA: 0x6D9B10
        bool yak();  // RVA: 0x6D9BE0
        void yal(bool a);  // RVA: 0x6D9BF0
        bool yam();  // RVA: 0x6D9CC0
        void yan(bool a);  // RVA: 0x6D9CD0
        bool yao();  // RVA: 0x6D9DA0
        void yap(bool a);  // RVA: 0x6D9DB0
        static WallHackDetector* yaq();  // RVA: 0x6D9E80
        static WallHackDetector* yar();  // RVA: 0x6D9EB0
        static WallHackDetector* yas(Action* a);  // RVA: 0x6DA0E0
        static WallHackDetector* yat(Action* a, Vector3 b);  // RVA: 0x6DA1E0
        static WallHackDetector* yau(Action* a, Vector3 b, uint8_t c);  // RVA: 0x6DA2A0
        static void yav();  // RVA: 0x6DA330
        static void yaw();  // RVA: 0x6DA440
        void yax();  // RVA: 0x6DA550
        void .ctor();  // RVA: 0x6D9710
        void OnDestroy();  // RVA: 0x6D8A30
        void FixedUpdate();  // RVA: 0x6D8940
        void Update();  // RVA: 0x6D9590
        WallHackDetector* yay(Action* a, Vector3 b, uint8_t c);  // RVA: 0x6DA630
        void xut();  // RVA: 0x6D9A40
        void xuq();  // RVA: 0x6D98B0
        bool xur();  // RVA: 0x6D99B0
        void xup();  // RVA: 0x6D9840
        void yaz();  // RVA: 0x6DA8D0
        IEnumerator* yba();  // RVA: 0x6DBF60
        void StartRigidModule();  // RVA: 0x6D9110
        void StartControllerModule();  // RVA: 0x6D8EC0
        void ybb();  // RVA: 0x6DBFD0
        void ShootWireframeModule();  // RVA: 0x6D8DF0
        IEnumerator* ybc();  // RVA: 0x6DC0A0
        bool ybd(Color a, Color b);  // RVA: 0x6DC110
        void ybe();  // RVA: 0x6DC200
        void ShootRaycastModule();  // RVA: 0x6D8BE0
        void ybf();  // RVA: 0x6DC2C0
        void ybg();  // RVA: 0x6DC3B0
        void ybh();  // RVA: 0x6DC450
        void ybi();  // RVA: 0x6DC4E0
        void ybj();  // RVA: 0x6DC540
        void ybk();  // RVA: 0x6DC5A0
        void ybl();  // RVA: 0x6DC740
        void ybm();  // RVA: 0x6DC910
        void ybn();  // RVA: 0x6DC9D0
        bool ybo();  // RVA: 0x6DCA90
        static Color32 ybp();  // RVA: 0x6DCB70
        static bool ybq(Color32 a, Color32 b, int32_t c);  // RVA: 0x6DCBC0
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
        static void GetUnityInfo();  // RVA: 0x6E9220
        static void ybr(Il2CppString* a, Exception* b);  // RVA: 0x6E93B0
        static void ybs(Il2CppString* a, Il2CppString* b, Exception* c);  // RVA: 0x6E9490
        static Il2CppString* ybt(Il2CppString* a, Il2CppString* b, Exception* c);  // RVA: 0x6E9550
        static Il2CppString* ybu(Exception* a);  // RVA: 0x6E9760
        static void .cctor();  // RVA: 0x6E9320
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
        bool Equals(ACTkByte16 other);  // RVA: 0x6E8F40
        bool Equals(Il2CppObject* obj);  // RVA: 0x6E8DE0
        int32_t GetHashCode();  // RVA: 0x6E8FE0
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
        void ybv();  // RVA: 0x6E91A0
        void ybw();  // RVA: 0x6E91B0
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
        void ybx();  // RVA: 0x6E91C0
        void yby();  // RVA: 0x6E91F0
    };

    // Namespace: CodeStage.AntiCheat.Common
    class BackgroundThreadAccessException : public Exception
    {
    public:
        uint8_t pad_0000[0x90]; // 0x0000
        Il2CppString* <bmyn>k__BackingField; // 0x0090
    
        // Methods
        Il2CppString* ybz();  // RVA: 0x6E9D40
        void .ctor(Il2CppString* apiName);  // RVA: 0x6E9B50
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
        static void AfterAssembliesLoaded();  // RVA: 0x6E9D50
        static void BeforeSplashScreen();  // RVA: 0x6E9F10
        static void BeforeSceneLoad();  // RVA: 0x6E9E30
        static void yca(Il2CppString* a);  // RVA: 0x6E9FF0
        static a ycb();  // RVA: 0x563BC0
        static void ycc(GameObject* a);  // RVA: 0x6EA1D0
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
    static a ycd();  // RVA: 0x563BC0
    static void yce(a a);  // RVA: 0x563BC0
    static a ycf();  // RVA: 0x563BC0
    void Awake();  // RVA: 0x42DD80
    void Start();  // RVA: 0x42DD80
    void OnDestroy();  // RVA: 0x42DD80
    void wcu(Scene a, LoadSceneMode b);
    void ycg(Scene a);
    bool xzi(a a);  // RVA: 0x563BC0
    void ych();  // RVA: 0x42DD80
    void .ctor();  // RVA: 0x42DD80
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
    static bool krc();  // RVA: 0x6FD5D0
    static Il2CppString* iqa();  // RVA: 0x6FD3D0
    static bool pt();  // RVA: 0x6FD8F0
    static void yci(bool a);  // RVA: 0x6FD9D0
    static void czo(bool a);  // RVA: 0x6FD150
    static bool cnm();  // RVA: 0x6FD070
    static bool ycl();  // RVA: 0x6FDD10
    static Il2CppString* ycm();  // RVA: 0x6FDDF0
    static Il2CppString* nwl();  // RVA: 0x6FD7F0
    static Il2CppString* ycj();  // RVA: 0x6FDB10
    static Il2CppString* kqw();  // RVA: 0x6FD4D0
    static void fdn(bool a);  // RVA: 0x6FD290
    static Il2CppString* yck();  // RVA: 0x6FDC10
    static void kve(bool a);  // RVA: 0x6FD6B0
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

namespace <PrivateImplementationDetails>{56A2A9AC-B715-4B5E-87EC-BCB84DE9F5CF}
{

    // Namespace: <PrivateImplementationDetails>{56A2A9AC-B715-4B5E-87EC-BCB84DE9F5CF}
    class a
    {
    public:
        // Static fields
        // static a_ a_;
        // static Byte[][] a__;
        // static String[][] a___;
    
    
        // Methods
        static Il2CppString* a_(int32_t param0, int32_t param1, int32_t param2);  // RVA: 0x6EA4E0
        static Il2CppString* a();  // RVA: 0x6EA5D0
        static Il2CppString* b();  // RVA: 0x6EA660
        static Il2CppString* c();  // RVA: 0x6EB740
        static Il2CppString* d();  // RVA: 0x6EC820
        static Il2CppString* e();  // RVA: 0x6ED900
        static Il2CppString* f();  // RVA: 0x6EE9E0
        static Il2CppString* g();  // RVA: 0x6EFAC0
        static Il2CppString* h();  // RVA: 0x6F0BA0
        static Il2CppString* i();  // RVA: 0x6F1C80
        static Il2CppString* j();  // RVA: 0x6F2D60
        static Il2CppString* k();  // RVA: 0x6F3E40
        static Il2CppString* l();  // RVA: 0x6F4F20
        static Il2CppString* m();  // RVA: 0x6F6000
        static Il2CppString* n();  // RVA: 0x6F70E0
        static Il2CppString* o();  // RVA: 0x6F81C0
        static Il2CppString* p();  // RVA: 0x6F92A0
        static Il2CppString* q();  // RVA: 0x6FA380
        static Il2CppString* r();  // RVA: 0x6FB460
        static Il2CppString* s();  // RVA: 0x6FC400
        static Il2CppString* t();  // RVA: 0x6FC4A0
        static Il2CppString* u();  // RVA: 0x6FC540
        static Il2CppString* v();  // RVA: 0x6FC5E0
        static Il2CppString* w();  // RVA: 0x6FC680
        static Il2CppString* x();  // RVA: 0x6FC720
        static Il2CppString* y();  // RVA: 0x6FC7C0
        static Il2CppString* z();  // RVA: 0x6FC860
        static Il2CppString* ba();  // RVA: 0x6EA700
        static Il2CppString* bb();  // RVA: 0x6EA7A0
        static Il2CppString* bc();  // RVA: 0x6EA840
        static Il2CppString* bd();  // RVA: 0x6EA8E0
        static Il2CppString* be();  // RVA: 0x6EA980
        static Il2CppString* bf();  // RVA: 0x6EAA20
        static Il2CppString* bg();  // RVA: 0x6EAAC0
        static Il2CppString* bh();  // RVA: 0x6EAB60
        static Il2CppString* bi();  // RVA: 0x6EAC00
        static Il2CppString* bj();  // RVA: 0x6EACA0
        static Il2CppString* bk();  // RVA: 0x6EAD40
        static Il2CppString* bl();  // RVA: 0x6EADE0
        static Il2CppString* bm();  // RVA: 0x6EAE80
        static Il2CppString* bn();  // RVA: 0x6EAF20
        static Il2CppString* bo();  // RVA: 0x6EAFC0
        static Il2CppString* bp();  // RVA: 0x6EB060
        static Il2CppString* bq();  // RVA: 0x6EB100
        static Il2CppString* br();  // RVA: 0x6EB1A0
        static Il2CppString* bs();  // RVA: 0x6EB240
        static Il2CppString* bt();  // RVA: 0x6EB2E0
        static Il2CppString* bu();  // RVA: 0x6EB380
        static Il2CppString* bv();  // RVA: 0x6EB420
        static Il2CppString* bw();  // RVA: 0x6EB4C0
        static Il2CppString* bx();  // RVA: 0x6EB560
        static Il2CppString* by();  // RVA: 0x6EB600
        static Il2CppString* bz();  // RVA: 0x6EB6A0
        static Il2CppString* ca();  // RVA: 0x6EB7E0
        static Il2CppString* cb();  // RVA: 0x6EB880
        static Il2CppString* cc();  // RVA: 0x6EB920
        static Il2CppString* cd();  // RVA: 0x6EB9C0
        static Il2CppString* ce();  // RVA: 0x6EBA60
        static Il2CppString* cf();  // RVA: 0x6EBB00
        static Il2CppString* cg();  // RVA: 0x6EBBA0
        static Il2CppString* ch();  // RVA: 0x6EBC40
        static Il2CppString* ci();  // RVA: 0x6EBCE0
        static Il2CppString* cj();  // RVA: 0x6EBD80
        static Il2CppString* ck();  // RVA: 0x6EBE20
        static Il2CppString* cl();  // RVA: 0x6EBEC0
        static Il2CppString* cm();  // RVA: 0x6EBF60
        static Il2CppString* cn();  // RVA: 0x6EC000
        static Il2CppString* co();  // RVA: 0x6EC0A0
        static Il2CppString* cp();  // RVA: 0x6EC140
        static Il2CppString* cq();  // RVA: 0x6EC1E0
        static Il2CppString* cr();  // RVA: 0x6EC280
        static Il2CppString* cs();  // RVA: 0x6EC320
        static Il2CppString* ct();  // RVA: 0x6EC3C0
        static Il2CppString* cu();  // RVA: 0x6EC460
        static Il2CppString* cv();  // RVA: 0x6EC500
        static Il2CppString* cw();  // RVA: 0x6EC5A0
        static Il2CppString* cx();  // RVA: 0x6EC640
        static Il2CppString* cy();  // RVA: 0x6EC6E0
        static Il2CppString* cz();  // RVA: 0x6EC780
        static Il2CppString* da();  // RVA: 0x6EC8C0
        static Il2CppString* db();  // RVA: 0x6EC960
        static Il2CppString* dc();  // RVA: 0x6ECA00
        static Il2CppString* dd();  // RVA: 0x6ECAA0
        static Il2CppString* de();  // RVA: 0x6ECB40
        static Il2CppString* df();  // RVA: 0x6ECBE0
        static Il2CppString* dg();  // RVA: 0x6ECC80
        static Il2CppString* dh();  // RVA: 0x6ECD20
        static Il2CppString* di();  // RVA: 0x6ECDC0
        static Il2CppString* dj();  // RVA: 0x6ECE60
        static Il2CppString* dk();  // RVA: 0x6ECF00
        static Il2CppString* dl();  // RVA: 0x6ECFA0
        static Il2CppString* dm();  // RVA: 0x6ED040
        static Il2CppString* dn();  // RVA: 0x6ED0E0
        static Il2CppString* do();  // RVA: 0x6ED180
        static Il2CppString* dp();  // RVA: 0x6ED220
        static Il2CppString* dq();  // RVA: 0x6ED2C0
        static Il2CppString* dr();  // RVA: 0x6ED360
        static Il2CppString* ds();  // RVA: 0x6ED400
        static Il2CppString* dt();  // RVA: 0x6ED4A0
        static Il2CppString* du();  // RVA: 0x6ED540
        static Il2CppString* dv();  // RVA: 0x6ED5E0
        static Il2CppString* dw();  // RVA: 0x6ED680
        static Il2CppString* dx();  // RVA: 0x6ED720
        static Il2CppString* dy();  // RVA: 0x6ED7C0
        static Il2CppString* dz();  // RVA: 0x6ED860
        static Il2CppString* ea();  // RVA: 0x6ED9A0
        static Il2CppString* eb();  // RVA: 0x6EDA40
        static Il2CppString* ec();  // RVA: 0x6EDAE0
        static Il2CppString* ed();  // RVA: 0x6EDB80
        static Il2CppString* ee();  // RVA: 0x6EDC20
        static Il2CppString* ef();  // RVA: 0x6EDCC0
        static Il2CppString* eg();  // RVA: 0x6EDD60
        static Il2CppString* eh();  // RVA: 0x6EDE00
        static Il2CppString* ei();  // RVA: 0x6EDEA0
        static Il2CppString* ej();  // RVA: 0x6EDF40
        static Il2CppString* ek();  // RVA: 0x6EDFE0
        static Il2CppString* el();  // RVA: 0x6EE080
        static Il2CppString* em();  // RVA: 0x6EE120
        static Il2CppString* en();  // RVA: 0x6EE1C0
        static Il2CppString* eo();  // RVA: 0x6EE260
        static Il2CppString* ep();  // RVA: 0x6EE300
        static Il2CppString* eq();  // RVA: 0x6EE3A0
        static Il2CppString* er();  // RVA: 0x6EE440
        static Il2CppString* es();  // RVA: 0x6EE4E0
        static Il2CppString* et();  // RVA: 0x6EE580
        static Il2CppString* eu();  // RVA: 0x6EE620
        static Il2CppString* ev();  // RVA: 0x6EE6C0
        static Il2CppString* ew();  // RVA: 0x6EE760
        static Il2CppString* ex();  // RVA: 0x6EE800
        static Il2CppString* ey();  // RVA: 0x6EE8A0
        static Il2CppString* ez();  // RVA: 0x6EE940
        static Il2CppString* fa();  // RVA: 0x6EEA80
        static Il2CppString* fb();  // RVA: 0x6EEB20
        static Il2CppString* fc();  // RVA: 0x6EEBC0
        static Il2CppString* fd();  // RVA: 0x6EEC60
        static Il2CppString* fe();  // RVA: 0x6EED00
        static Il2CppString* ff();  // RVA: 0x6EEDA0
        static Il2CppString* fg();  // RVA: 0x6EEE40
        static Il2CppString* fh();  // RVA: 0x6EEEE0
        static Il2CppString* fi();  // RVA: 0x6EEF80
        static Il2CppString* fj();  // RVA: 0x6EF020
        static Il2CppString* fk();  // RVA: 0x6EF0C0
        static Il2CppString* fl();  // RVA: 0x6EF160
        static Il2CppString* fm();  // RVA: 0x6EF200
        static Il2CppString* fn();  // RVA: 0x6EF2A0
        static Il2CppString* fo();  // RVA: 0x6EF340
        static Il2CppString* fp();  // RVA: 0x6EF3E0
        static Il2CppString* fq();  // RVA: 0x6EF480
        static Il2CppString* fr();  // RVA: 0x6EF520
        static Il2CppString* fs();  // RVA: 0x6EF5C0
        static Il2CppString* ft();  // RVA: 0x6EF660
        static Il2CppString* fu();  // RVA: 0x6EF700
        static Il2CppString* fv();  // RVA: 0x6EF7A0
        static Il2CppString* fw();  // RVA: 0x6EF840
        static Il2CppString* fx();  // RVA: 0x6EF8E0
        static Il2CppString* fy();  // RVA: 0x6EF980
        static Il2CppString* fz();  // RVA: 0x6EFA20
        static Il2CppString* ga();  // RVA: 0x6EFB60
        static Il2CppString* gb();  // RVA: 0x6EFC00
        static Il2CppString* gc();  // RVA: 0x6EFCA0
        static Il2CppString* gd();  // RVA: 0x6EFD40
        static Il2CppString* ge();  // RVA: 0x6EFDE0
        static Il2CppString* gf();  // RVA: 0x6EFE80
        static Il2CppString* gg();  // RVA: 0x6EFF20
        static Il2CppString* gh();  // RVA: 0x6EFFC0
        static Il2CppString* gi();  // RVA: 0x6F0060
        static Il2CppString* gj();  // RVA: 0x6F0100
        static Il2CppString* gk();  // RVA: 0x6F01A0
        static Il2CppString* gl();  // RVA: 0x6F0240
        static Il2CppString* gm();  // RVA: 0x6F02E0
        static Il2CppString* gn();  // RVA: 0x6F0380
        static Il2CppString* go();  // RVA: 0x6F0420
        static Il2CppString* gp();  // RVA: 0x6F04C0
        static Il2CppString* gq();  // RVA: 0x6F0560
        static Il2CppString* gr();  // RVA: 0x6F0600
        static Il2CppString* gs();  // RVA: 0x6F06A0
        static Il2CppString* gt();  // RVA: 0x6F0740
        static Il2CppString* gu();  // RVA: 0x6F07E0
        static Il2CppString* gv();  // RVA: 0x6F0880
        static Il2CppString* gw();  // RVA: 0x6F0920
        static Il2CppString* gx();  // RVA: 0x6F09C0
        static Il2CppString* gy();  // RVA: 0x6F0A60
        static Il2CppString* gz();  // RVA: 0x6F0B00
        static Il2CppString* ha();  // RVA: 0x6F0C40
        static Il2CppString* hb();  // RVA: 0x6F0CE0
        static Il2CppString* hc();  // RVA: 0x6F0D80
        static Il2CppString* hd();  // RVA: 0x6F0E20
        static Il2CppString* he();  // RVA: 0x6F0EC0
        static Il2CppString* hf();  // RVA: 0x6F0F60
        static Il2CppString* hg();  // RVA: 0x6F1000
        static Il2CppString* hh();  // RVA: 0x6F10A0
        static Il2CppString* hi();  // RVA: 0x6F1140
        static Il2CppString* hj();  // RVA: 0x6F11E0
        static Il2CppString* hk();  // RVA: 0x6F1280
        static Il2CppString* hl();  // RVA: 0x6F1320
        static Il2CppString* hm();  // RVA: 0x6F13C0
        static Il2CppString* hn();  // RVA: 0x6F1460
        static Il2CppString* ho();  // RVA: 0x6F1500
        static Il2CppString* hp();  // RVA: 0x6F15A0
        static Il2CppString* hq();  // RVA: 0x6F1640
        static Il2CppString* hr();  // RVA: 0x6F16E0
        static Il2CppString* hs();  // RVA: 0x6F1780
        static Il2CppString* ht();  // RVA: 0x6F1820
        static Il2CppString* hu();  // RVA: 0x6F18C0
        static Il2CppString* hv();  // RVA: 0x6F1960
        static Il2CppString* hw();  // RVA: 0x6F1A00
        static Il2CppString* hx();  // RVA: 0x6F1AA0
        static Il2CppString* hy();  // RVA: 0x6F1B40
        static Il2CppString* hz();  // RVA: 0x6F1BE0
        static Il2CppString* ia();  // RVA: 0x6F1D20
        static Il2CppString* ib();  // RVA: 0x6F1DC0
        static Il2CppString* ic();  // RVA: 0x6F1E60
        static Il2CppString* id();  // RVA: 0x6F1F00
        static Il2CppString* ie();  // RVA: 0x6F1FA0
        static Il2CppString* if();  // RVA: 0x6F2040
        static Il2CppString* ig();  // RVA: 0x6F20E0
        static Il2CppString* ih();  // RVA: 0x6F2180
        static Il2CppString* ii();  // RVA: 0x6F2220
        static Il2CppString* ij();  // RVA: 0x6F22C0
        static Il2CppString* ik();  // RVA: 0x6F2360
        static Il2CppString* il();  // RVA: 0x6F2400
        static Il2CppString* im();  // RVA: 0x6F24A0
        static Il2CppString* in();  // RVA: 0x6F2540
        static Il2CppString* io();  // RVA: 0x6F25E0
        static Il2CppString* ip();  // RVA: 0x6F2680
        static Il2CppString* iq();  // RVA: 0x6F2720
        static Il2CppString* ir();  // RVA: 0x6F27C0
        static Il2CppString* is();  // RVA: 0x6F2860
        static Il2CppString* it();  // RVA: 0x6F2900
        static Il2CppString* iu();  // RVA: 0x6F29A0
        static Il2CppString* iv();  // RVA: 0x6F2A40
        static Il2CppString* iw();  // RVA: 0x6F2AE0
        static Il2CppString* ix();  // RVA: 0x6F2B80
        static Il2CppString* iy();  // RVA: 0x6F2C20
        static Il2CppString* iz();  // RVA: 0x6F2CC0
        static Il2CppString* ja();  // RVA: 0x6F2E00
        static Il2CppString* jb();  // RVA: 0x6F2EA0
        static Il2CppString* jc();  // RVA: 0x6F2F40
        static Il2CppString* jd();  // RVA: 0x6F2FE0
        static Il2CppString* je();  // RVA: 0x6F3080
        static Il2CppString* jf();  // RVA: 0x6F3120
        static Il2CppString* jg();  // RVA: 0x6F31C0
        static Il2CppString* jh();  // RVA: 0x6F3260
        static Il2CppString* ji();  // RVA: 0x6F3300
        static Il2CppString* jj();  // RVA: 0x6F33A0
        static Il2CppString* jk();  // RVA: 0x6F3440
        static Il2CppString* jl();  // RVA: 0x6F34E0
        static Il2CppString* jm();  // RVA: 0x6F3580
        static Il2CppString* jn();  // RVA: 0x6F3620
        static Il2CppString* jo();  // RVA: 0x6F36C0
        static Il2CppString* jp();  // RVA: 0x6F3760
        static Il2CppString* jq();  // RVA: 0x6F3800
        static Il2CppString* jr();  // RVA: 0x6F38A0
        static Il2CppString* js();  // RVA: 0x6F3940
        static Il2CppString* jt();  // RVA: 0x6F39E0
        static Il2CppString* ju();  // RVA: 0x6F3A80
        static Il2CppString* jv();  // RVA: 0x6F3B20
        static Il2CppString* jw();  // RVA: 0x6F3BC0
        static Il2CppString* jx();  // RVA: 0x6F3C60
        static Il2CppString* jy();  // RVA: 0x6F3D00
        static Il2CppString* jz();  // RVA: 0x6F3DA0
        static Il2CppString* ka();  // RVA: 0x6F3EE0
        static Il2CppString* kb();  // RVA: 0x6F3F80
        static Il2CppString* kc();  // RVA: 0x6F4020
        static Il2CppString* kd();  // RVA: 0x6F40C0
        static Il2CppString* ke();  // RVA: 0x6F4160
        static Il2CppString* kf();  // RVA: 0x6F4200
        static Il2CppString* kg();  // RVA: 0x6F42A0
        static Il2CppString* kh();  // RVA: 0x6F4340
        static Il2CppString* ki();  // RVA: 0x6F43E0
        static Il2CppString* kj();  // RVA: 0x6F4480
        static Il2CppString* kk();  // RVA: 0x6F4520
        static Il2CppString* kl();  // RVA: 0x6F45C0
        static Il2CppString* km();  // RVA: 0x6F4660
        static Il2CppString* kn();  // RVA: 0x6F4700
        static Il2CppString* ko();  // RVA: 0x6F47A0
        static Il2CppString* kp();  // RVA: 0x6F4840
        static Il2CppString* kq();  // RVA: 0x6F48E0
        static Il2CppString* kr();  // RVA: 0x6F4980
        static Il2CppString* ks();  // RVA: 0x6F4A20
        static Il2CppString* kt();  // RVA: 0x6F4AC0
        static Il2CppString* ku();  // RVA: 0x6F4B60
        static Il2CppString* kv();  // RVA: 0x6F4C00
        static Il2CppString* kw();  // RVA: 0x6F4CA0
        static Il2CppString* kx();  // RVA: 0x6F4D40
        static Il2CppString* ky();  // RVA: 0x6F4DE0
        static Il2CppString* kz();  // RVA: 0x6F4E80
        static Il2CppString* la();  // RVA: 0x6F4FC0
        static Il2CppString* lb();  // RVA: 0x6F5060
        static Il2CppString* lc();  // RVA: 0x6F5100
        static Il2CppString* ld();  // RVA: 0x6F51A0
        static Il2CppString* le();  // RVA: 0x6F5240
        static Il2CppString* lf();  // RVA: 0x6F52E0
        static Il2CppString* lg();  // RVA: 0x6F5380
        static Il2CppString* lh();  // RVA: 0x6F5420
        static Il2CppString* li();  // RVA: 0x6F54C0
        static Il2CppString* lj();  // RVA: 0x6F5560
        static Il2CppString* lk();  // RVA: 0x6F5600
        static Il2CppString* ll();  // RVA: 0x6F56A0
        static Il2CppString* lm();  // RVA: 0x6F5740
        static Il2CppString* ln();  // RVA: 0x6F57E0
        static Il2CppString* lo();  // RVA: 0x6F5880
        static Il2CppString* lp();  // RVA: 0x6F5920
        static Il2CppString* lq();  // RVA: 0x6F59C0
        static Il2CppString* lr();  // RVA: 0x6F5A60
        static Il2CppString* ls();  // RVA: 0x6F5B00
        static Il2CppString* lt();  // RVA: 0x6F5BA0
        static Il2CppString* lu();  // RVA: 0x6F5C40
        static Il2CppString* lv();  // RVA: 0x6F5CE0
        static Il2CppString* lw();  // RVA: 0x6F5D80
        static Il2CppString* lx();  // RVA: 0x6F5E20
        static Il2CppString* ly();  // RVA: 0x6F5EC0
        static Il2CppString* lz();  // RVA: 0x6F5F60
        static Il2CppString* ma();  // RVA: 0x6F60A0
        static Il2CppString* mb();  // RVA: 0x6F6140
        static Il2CppString* mc();  // RVA: 0x6F61E0
        static Il2CppString* md();  // RVA: 0x6F6280
        static Il2CppString* me();  // RVA: 0x6F6320
        static Il2CppString* mf();  // RVA: 0x6F63C0
        static Il2CppString* mg();  // RVA: 0x6F6460
        static Il2CppString* mh();  // RVA: 0x6F6500
        static Il2CppString* mi();  // RVA: 0x6F65A0
        static Il2CppString* mj();  // RVA: 0x6F6640
        static Il2CppString* mk();  // RVA: 0x6F66E0
        static Il2CppString* ml();  // RVA: 0x6F6780
        static Il2CppString* mm();  // RVA: 0x6F6820
        static Il2CppString* mn();  // RVA: 0x6F68C0
        static Il2CppString* mo();  // RVA: 0x6F6960
        static Il2CppString* mp();  // RVA: 0x6F6A00
        static Il2CppString* mq();  // RVA: 0x6F6AA0
        static Il2CppString* mr();  // RVA: 0x6F6B40
        static Il2CppString* ms();  // RVA: 0x6F6BE0
        static Il2CppString* mt();  // RVA: 0x6F6C80
        static Il2CppString* mu();  // RVA: 0x6F6D20
        static Il2CppString* mv();  // RVA: 0x6F6DC0
        static Il2CppString* mw();  // RVA: 0x6F6E60
        static Il2CppString* mx();  // RVA: 0x6F6F00
        static Il2CppString* my();  // RVA: 0x6F6FA0
        static Il2CppString* mz();  // RVA: 0x6F7040
        static Il2CppString* na();  // RVA: 0x6F7180
        static Il2CppString* nb();  // RVA: 0x6F7220
        static Il2CppString* nc();  // RVA: 0x6F72C0
        static Il2CppString* nd();  // RVA: 0x6F7360
        static Il2CppString* ne();  // RVA: 0x6F7400
        static Il2CppString* nf();  // RVA: 0x6F74A0
        static Il2CppString* ng();  // RVA: 0x6F7540
        static Il2CppString* nh();  // RVA: 0x6F75E0
        static Il2CppString* ni();  // RVA: 0x6F7680
        static Il2CppString* nj();  // RVA: 0x6F7720
        static Il2CppString* nk();  // RVA: 0x6F77C0
        static Il2CppString* nl();  // RVA: 0x6F7860
        static Il2CppString* nm();  // RVA: 0x6F7900
        static Il2CppString* nn();  // RVA: 0x6F79A0
        static Il2CppString* no();  // RVA: 0x6F7A40
        static Il2CppString* np();  // RVA: 0x6F7AE0
        static Il2CppString* nq();  // RVA: 0x6F7B80
        static Il2CppString* nr();  // RVA: 0x6F7C20
        static Il2CppString* ns();  // RVA: 0x6F7CC0
        static Il2CppString* nt();  // RVA: 0x6F7D60
        static Il2CppString* nu();  // RVA: 0x6F7E00
        static Il2CppString* nv();  // RVA: 0x6F7EA0
        static Il2CppString* nw();  // RVA: 0x6F7F40
        static Il2CppString* nx();  // RVA: 0x6F7FE0
        static Il2CppString* ny();  // RVA: 0x6F8080
        static Il2CppString* nz();  // RVA: 0x6F8120
        static Il2CppString* oa();  // RVA: 0x6F8260
        static Il2CppString* ob();  // RVA: 0x6F8300
        static Il2CppString* oc();  // RVA: 0x6F83A0
        static Il2CppString* od();  // RVA: 0x6F8440
        static Il2CppString* oe();  // RVA: 0x6F84E0
        static Il2CppString* of();  // RVA: 0x6F8580
        static Il2CppString* og();  // RVA: 0x6F8620
        static Il2CppString* oh();  // RVA: 0x6F86C0
        static Il2CppString* oi();  // RVA: 0x6F8760
        static Il2CppString* oj();  // RVA: 0x6F8800
        static Il2CppString* ok();  // RVA: 0x6F88A0
        static Il2CppString* ol();  // RVA: 0x6F8940
        static Il2CppString* om();  // RVA: 0x6F89E0
        static Il2CppString* on();  // RVA: 0x6F8A80
        static Il2CppString* oo();  // RVA: 0x6F8B20
        static Il2CppString* op();  // RVA: 0x6F8BC0
        static Il2CppString* oq();  // RVA: 0x6F8C60
        static Il2CppString* or();  // RVA: 0x6F8D00
        static Il2CppString* os();  // RVA: 0x6F8DA0
        static Il2CppString* ot();  // RVA: 0x6F8E40
        static Il2CppString* ou();  // RVA: 0x6F8EE0
        static Il2CppString* ov();  // RVA: 0x6F8F80
        static Il2CppString* ow();  // RVA: 0x6F9020
        static Il2CppString* ox();  // RVA: 0x6F90C0
        static Il2CppString* oy();  // RVA: 0x6F9160
        static Il2CppString* oz();  // RVA: 0x6F9200
        static Il2CppString* pa();  // RVA: 0x6F9340
        static Il2CppString* pb();  // RVA: 0x6F93E0
        static Il2CppString* pc();  // RVA: 0x6F9480
        static Il2CppString* pd();  // RVA: 0x6F9520
        static Il2CppString* pe();  // RVA: 0x6F95C0
        static Il2CppString* pf();  // RVA: 0x6F9660
        static Il2CppString* pg();  // RVA: 0x6F9700
        static Il2CppString* ph();  // RVA: 0x6F97A0
        static Il2CppString* pi();  // RVA: 0x6F9840
        static Il2CppString* pj();  // RVA: 0x6F98E0
        static Il2CppString* pk();  // RVA: 0x6F9980
        static Il2CppString* pl();  // RVA: 0x6F9A20
        static Il2CppString* pm();  // RVA: 0x6F9AC0
        static Il2CppString* pn();  // RVA: 0x6F9B60
        static Il2CppString* po();  // RVA: 0x6F9C00
        static Il2CppString* pp();  // RVA: 0x6F9CA0
        static Il2CppString* pq();  // RVA: 0x6F9D40
        static Il2CppString* pr();  // RVA: 0x6F9DE0
        static Il2CppString* ps();  // RVA: 0x6F9E80
        static Il2CppString* pt();  // RVA: 0x6F9F20
        static Il2CppString* pu();  // RVA: 0x6F9FC0
        static Il2CppString* pv();  // RVA: 0x6FA060
        static Il2CppString* pw();  // RVA: 0x6FA100
        static Il2CppString* px();  // RVA: 0x6FA1A0
        static Il2CppString* py();  // RVA: 0x6FA240
        static Il2CppString* pz();  // RVA: 0x6FA2E0
        static Il2CppString* qa();  // RVA: 0x6FA420
        static Il2CppString* qb();  // RVA: 0x6FA4C0
        static Il2CppString* qc();  // RVA: 0x6FA560
        static Il2CppString* qd();  // RVA: 0x6FA600
        static Il2CppString* qe();  // RVA: 0x6FA6A0
        static Il2CppString* qf();  // RVA: 0x6FA740
        static Il2CppString* qg();  // RVA: 0x6FA7E0
        static Il2CppString* qh();  // RVA: 0x6FA880
        static Il2CppString* qi();  // RVA: 0x6FA920
        static Il2CppString* qj();  // RVA: 0x6FA9C0
        static Il2CppString* qk();  // RVA: 0x6FAA60
        static Il2CppString* ql();  // RVA: 0x6FAB00
        static Il2CppString* qm();  // RVA: 0x6FABA0
        static Il2CppString* qn();  // RVA: 0x6FAC40
        static Il2CppString* qo();  // RVA: 0x6FACE0
        static Il2CppString* qp();  // RVA: 0x6FAD80
        static Il2CppString* qq();  // RVA: 0x6FAE20
        static Il2CppString* qr();  // RVA: 0x6FAEC0
        static Il2CppString* qs();  // RVA: 0x6FAF60
        static Il2CppString* qt();  // RVA: 0x6FB000
        static Il2CppString* qu();  // RVA: 0x6FB0A0
        static Il2CppString* qv();  // RVA: 0x6FB140
        static Il2CppString* qw();  // RVA: 0x6FB1E0
        static Il2CppString* qx();  // RVA: 0x6FB280
        static Il2CppString* qy();  // RVA: 0x6FB320
        static Il2CppString* qz();  // RVA: 0x6FB3C0
        static Il2CppString* ra();  // RVA: 0x6FB500
        static Il2CppString* rb();  // RVA: 0x6FB5A0
        static Il2CppString* rc();  // RVA: 0x6FB640
        static Il2CppString* rd();  // RVA: 0x6FB6E0
        static Il2CppString* re();  // RVA: 0x6FB780
        static Il2CppString* rf();  // RVA: 0x6FB820
        static Il2CppString* rg();  // RVA: 0x6FB8C0
        static Il2CppString* rh();  // RVA: 0x6FB960
        static Il2CppString* ri();  // RVA: 0x6FBA00
        static Il2CppString* rj();  // RVA: 0x6FBAA0
        static Il2CppString* rk();  // RVA: 0x6FBB40
        static Il2CppString* rl();  // RVA: 0x6FBBE0
        static Il2CppString* rm();  // RVA: 0x6FBC80
        static Il2CppString* rn();  // RVA: 0x6FBD20
        static Il2CppString* ro();  // RVA: 0x6FBDC0
        static Il2CppString* rp();  // RVA: 0x6FBE60
        static Il2CppString* rq();  // RVA: 0x6FBF00
        static Il2CppString* rr();  // RVA: 0x6FBFA0
        static Il2CppString* rs();  // RVA: 0x6FC040
        static Il2CppString* rt();  // RVA: 0x6FC0E0
        static Il2CppString* ru();  // RVA: 0x6FC180
        static Il2CppString* rv();  // RVA: 0x6FC220
        static Il2CppString* rw();  // RVA: 0x6FC2C0
        static Il2CppString* rx();  // RVA: 0x6FC360
        static void .cctor();  // RVA: 0x6EA370
    };

} // namespace <PrivateImplementationDetails>{56A2A9AC-B715-4B5E-87EC-BCB84DE9F5CF}
