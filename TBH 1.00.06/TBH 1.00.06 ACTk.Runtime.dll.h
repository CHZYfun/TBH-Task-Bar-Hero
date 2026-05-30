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
        void .ctor();  // RVA: 0x66FAE0
    };

} // namespace Microsoft.CodeAnalysis

namespace System.Runtime.CompilerServices
{

    // Namespace: System.Runtime.CompilerServices
    class IsUnmanagedAttribute : public Attribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x66FAE0
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
    static MonoScriptData vyh();  // RVA: 0x670790
    void .ctor();  // RVA: 0x629380
};

// Namespace: <global>
class dan
{
public:

    // Methods
    static void vyj();  // RVA: 0x63E350
    static void cfd();  // RVA: 0x63E350
    static void dkg();  // RVA: 0x63E350
    static void vyi();  // RVA: 0x63E350
    static void gie();  // RVA: 0x63E350
    static void hao();  // RVA: 0x63E350
};

// Namespace: <global>
class ApplicationFocusEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x66F9D0
    void Invoke(bool hasFocus);  // RVA: 0x66F9C0
    IAsyncResult* BeginInvoke(bool hasFocus, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x66F950
    void EndInvoke(IAsyncResult* result);  // RVA: 0x66F9B0
};

// Namespace: <global>
class ApplicationPauseEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x66F9D0
    void Invoke(bool pauseStatus);  // RVA: 0x66F9C0
    IAsyncResult* BeginInvoke(bool pauseStatus, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x66F950
    void EndInvoke(IAsyncResult* result);  // RVA: 0x66F9B0
};

// Namespace: <global>
class dao : public MonoBehaviour
{
public:
    // Static fields
    // static dao* bmmk;

    uint8_t pad_0000[0x20]; // 0x0000
    ApplicationFocusEventHandler* bmmi; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ApplicationPauseEventHandler* bmmj; // 0x0028

    // Methods
    void vyn(ApplicationPauseEventHandler* a);  // RVA: 0x670D10
    void Awake();  // RVA: 0x670870
    void vym(ApplicationPauseEventHandler* a);  // RVA: 0x670C70
    void vyl(ApplicationFocusEventHandler* a);  // RVA: 0x670BD0
    void dxq();  // RVA: 0x6709F0
    void hmg(bool pauseStatus);  // RVA: 0x670930
    void OnApplicationPause(bool pauseStatus);  // RVA: 0x670930
    void itp();  // RVA: 0x670A90
    void doo();  // RVA: 0x670950
    void gxp(bool pauseStatus);  // RVA: 0x670930
    void .ctor();  // RVA: 0x629810
    void vyk(ApplicationFocusEventHandler* a);  // RVA: 0x670B30
    static dao* vyo();  // RVA: 0x670DB0
    void dqa(bool pauseStatus);  // RVA: 0x670930
    void OnApplicationFocus(bool hasFocus);  // RVA: 0x670910
    void opk(bool pauseStatus);  // RVA: 0x670930
};

// Namespace: <global>
class dap
{
public:

    // Methods
    static Il2CppString* vys(Char[][] a);  // RVA: 0x671850
    static Char[][] jir(Il2CppString* a);  // RVA: 0x6714B0
    static Char[][] vyq(Il2CppString* a);  // RVA: 0x671690
    static Il2CppString* dkp(Il2CppString* a);  // RVA: 0x670F80
    static Il2CppString* gnj(Il2CppString* a);  // RVA: 0x6712F0
    static Il2CppString* fdx(Il2CppString* a);  // RVA: 0x671130
    static Il2CppString* vyr(Il2CppString* a);  // RVA: 0x671730
    static Il2CppString* vyp(Il2CppString* a);  // RVA: 0x6715F0
    static Char[][] git(Il2CppString* a);  // RVA: 0x671250
    static Il2CppString* jao(Il2CppString* a);  // RVA: 0x671390
    static Il2CppString* jnm(Il2CppString* a);  // RVA: 0x671550
    static Char[][] dib(Il2CppString* a);  // RVA: 0x670EE0
    static Il2CppString* eoc(Char[][] a);  // RVA: 0x671020
};

// Namespace: <global>
class daq
{
public:
    // Static fields
    // static int32_t bmml;
    // static uint8_t bmmm;
    // static uint8_t bmmn;
    // static uint8_t bmmo;
    // static uint8_t bmmp;
    // static uint8_t bmmq;


    // Methods
    static void hey(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x6719D0
    static void vyy(Stream* a, Stream* b, Byte[][] c, uint8_t d, uint8_t e);  // RVA: 0x41A4E0
    static void vyt(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x671C00
    static void vyw(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x671D50
    static void ljg(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x671B20
    static void ohy(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x671B90
    static void vyv(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x671CE0
    static void dzx(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x671960
    static void vyu(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x671C70
    static void jmi(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x671AB0
    static void vyx(Stream* a, Stream* b, Byte[][] c, uint8_t d);  // RVA: 0x5640F0
    static void hqz(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x671A40
};

// Namespace: <global>
class dar
{
public:
    // Static fields
    // static int32_t bmmr;


    // Methods
    static bool nfg(bool a, int32_t b);  // RVA: 0x672610
    static bool vza(bool a, int32_t b);  // RVA: 0x672610
    static bool nmj(DateTimeOffset a, int32_t b);  // RVA: 0x672910
    static bool vzc(int32_t a, int32_t b);  // RVA: 0x672220
    static bool nng(int64_t a, int32_t b);  // RVA: 0x672270
    static bool vze(uint32_t a, int32_t b);  // RVA: 0x672220
    static bool bql(Guid a, int32_t b);  // RVA: 0x671F70
    static int32_t vzz(uint32_t a);  // RVA: 0x672630
    static int32_t lkf(float a);  // RVA: 0x673200
    static bool igg(Guid a, int32_t b);  // RVA: 0x671F70
    static int32_t waj(Il2CppString* a);  // RVA: 0x674CF0
    static bool moj(Vector3Int a, int32_t b);  // RVA: 0x673A50
    static int32_t vzr(BigInteger a);  // RVA: 0x674140
    static int32_t tk(Vector2 a);  // RVA: 0x672120
    static bool ewv(bool a, int32_t b);  // RVA: 0x672610
    static bool vzo(DateTimeOffset a, int32_t b);  // RVA: 0x672910
    static bool vzl(float a, int32_t b);  // RVA: 0x6725B0
    static bool osf(Decimal a, int32_t b);  // RVA: 0x6720F0
    static int32_t gdm(DateTime a);  // RVA: 0x672680
    static bool ger(Vector2 a, int32_t b);  // RVA: 0x672770
    static bool vzp(Guid a, int32_t b);  // RVA: 0x671F70
    static bool bia(double a, int32_t b);  // RVA: 0x671DC0
    static int32_t hvc(bool a);  // RVA: 0x672AE0
    static bool kij(Vector2 a, int32_t b);  // RVA: 0x672770
    static int32_t jqg(int32_t a);  // RVA: 0x672CF0
    static int32_t vzx(Guid a);  // RVA: 0x6747E0
    static bool otd(bool a, int32_t b);  // RVA: 0x672610
    static int32_t isp(Char[][] a);  // RVA: 0x672BC0
    static int32_t kxy(Quaternion a);  // RVA: 0x6729A0
    static int32_t fab(uint32_t a);  // RVA: 0x672630
    static bool vzk(Vector3Int a, int32_t b);  // RVA: 0x673A50
    static bool col(Decimal a, int32_t b);  // RVA: 0x6720F0
    static bool vzf(uint64_t a, int32_t b);  // RVA: 0x672B10
    static int32_t lgi(Quaternion a);  // RVA: 0x6729A0
    static int32_t wac(double a);  // RVA: 0x674B80
    static bool vzb(Decimal a, int32_t b);  // RVA: 0x6720F0
    static int32_t vzu(int32_t a);  // RVA: 0x672630
    static bool vzn(Char[][] a, int32_t b);  // RVA: 0x6740E0
    static bool lmi(BigInteger a, int32_t b);  // RVA: 0x6721C0
    static int32_t waa(uint64_t a);  // RVA: 0x674AE0
    static bool mns(Vector2 a, int32_t b);  // RVA: 0x672770
    static bool vzg(Quaternion a, int32_t b);  // RVA: 0x6721F0
    static bool lqr(Guid a, int32_t b);  // RVA: 0x671F70
    static int32_t npq(int64_t a);  // RVA: 0x673C10
    static bool ekv(float a, int32_t b);  // RVA: 0x6725B0
    static int32_t vzw(DateTimeOffset a);  // RVA: 0x674700
    static int32_t jzo(BigInteger a);  // RVA: 0x672D80
    static int32_t gyw(uint64_t a);  // RVA: 0x672940
    static int32_t mqr(Vector2Int a);  // RVA: 0x673A80
    static int32_t wai(Char[][] a);  // RVA: 0x674CA0
    static bool ckb(Vector3 a, int32_t b);  // RVA: 0x671FE0
    static int32_t lkn(BigInteger a);  // RVA: 0x673250
    static int32_t hwg(double a);  // RVA: 0x672AF0
    static bool oqg(uint64_t a, int32_t b);  // RVA: 0x672B10
    static bool dgk(Quaternion a, int32_t b);  // RVA: 0x6721F0
    static int32_t vzv(DateTime a);  // RVA: 0x674610
    static bool vzj(Vector3 a, int32_t b);  // RVA: 0x671FE0
    static bool npm(Vector2 a, int32_t b);  // RVA: 0x672770
    static bool vzm(double a, int32_t b);  // RVA: 0x671DC0
    static int32_t nbw(float a);  // RVA: 0x673200
    static bool nld(Vector2Int a, int32_t b);  // RVA: 0x672820
    static int32_t yh(uint64_t a);  // RVA: 0x674D70
    static bool vzi(Vector2Int a, int32_t b);  // RVA: 0x672820
    static bool gvz(Decimal a, int32_t b);  // RVA: 0x6720F0
    static bool ieq(double a, int32_t b);  // RVA: 0x671DC0
    static bool kta(Vector3 a, int32_t b);  // RVA: 0x671FE0
    static int32_t nxb(float a);  // RVA: 0x673200
    static bool iwm(DateTimeOffset a, int32_t b);  // RVA: 0x672910
    static bool vzh(Vector2 a, int32_t b);  // RVA: 0x672770
    static bool ntr(float a, int32_t b);  // RVA: 0x6725B0
    static int32_t wah(Vector3Int a);  // RVA: 0x674BA0
    static int32_t vzs(bool a);  // RVA: 0x674430
    static int32_t olg(Vector2Int a);  // RVA: 0x673A80
    static int32_t dwx(Vector2 a);  // RVA: 0x672120
    static int32_t vzq(a a);  // RVA: 0x5640F0
    static bool ian(uint64_t a, int32_t b);  // RVA: 0x672B10
    static int32_t up(DateTime a);  // RVA: 0x673FF0
    static bool hkf(float a, int32_t b);  // RVA: 0x6725B0
    static int32_t lud(Decimal a);  // RVA: 0x673540
    static int32_t nsa(BigInteger a);  // RVA: 0x673CB0
    static bool glr(Vector2Int a, int32_t b);  // RVA: 0x672820
    static bool djy(uint32_t a, int32_t b);  // RVA: 0x672220
    static int32_t lxa(BigInteger a);  // RVA: 0x673670
    static bool imu(Vector2Int a, int32_t b);  // RVA: 0x672820
    static int32_t vzt(Decimal a);  // RVA: 0x674440
    static int32_t waf(Vector2Int a);  // RVA: 0x673A80
    static bool gv(DateTimeOffset a, int32_t b);  // RVA: 0x672910
    static int32_t jfi(DateTimeOffset a);  // RVA: 0x672C10
    static int32_t chr(int32_t a);  // RVA: 0x671FA0
    static int32_t kgc(int32_t a);  // RVA: 0x673070
    static int32_t wag(Vector3 a);  // RVA: 0x673B20
    static bool nss(Vector3 a, int32_t b);  // RVA: 0x671FE0
    static int32_t wad(Quaternion a);  // RVA: 0x6729A0
    static int32_t wab(float a);  // RVA: 0x673200
    static bool nua(int32_t a, int32_t b);  // RVA: 0x672220
    static int32_t kgu(double a);  // RVA: 0x6730B0
    static int32_t jvz(Char[][] a);  // RVA: 0x672D30
    static int32_t goz(int32_t a);  // RVA: 0x6728D0
    static bool vyz(BigInteger a, int32_t b);  // RVA: 0x6721C0
    static int32_t dre(double a);  // RVA: 0x672590
    static bool mds(bool a, int32_t b);  // RVA: 0x672610
    static int32_t wae(Vector2 a);  // RVA: 0x672120
    static bool min(Vector3 a, int32_t b);  // RVA: 0x671FE0
    static int32_t oak(Char[][] a);  // RVA: 0x673FA0
    static int32_t dmr(Vector3Int a);  // RVA: 0x6724A0
    static int32_t hgr(Quaternion a);  // RVA: 0x6729A0
    static int32_t dmm(Decimal a);  // RVA: 0x672320
    static bool ta(Decimal a, int32_t b);  // RVA: 0x6720F0
    static int32_t bnp(Decimal a);  // RVA: 0x671DF0
    static bool jdl(DateTimeOffset a, int32_t b);  // RVA: 0x672910
    static int32_t crv(Vector2 a);  // RVA: 0x672120
    static bool vzd(int64_t a, int32_t b);  // RVA: 0x672270
    static bool dlb(int64_t a, int32_t b);  // RVA: 0x672270
    static int32_t vzy(int64_t a);  // RVA: 0x674A40
    static int32_t khb(DateTimeOffset a);  // RVA: 0x6730D0
    static int32_t myp(Vector3 a);  // RVA: 0x673B20
    static int32_t mih(Vector3Int a);  // RVA: 0x673960
    static int32_t hoc(Vector2 a);  // RVA: 0x672120
    static bool jsq(int32_t a, int32_t b);  // RVA: 0x672220
    static bool dfd(BigInteger a, int32_t b);  // RVA: 0x6721C0
    static int32_t ljd(Char[][] a);  // RVA: 0x6731B0
};

// Namespace: <global>
class das : public CertificateHandler
{
public:

    // Methods
    bool ValidateCertificate(Byte[][] certificateData);  // RVA: 0x674DC0
    void .ctor();  // RVA: 0x674DD0
};

// Namespace: <global>
class dat
{
public:

    // Methods
    static bool wal(double a, double b, double c);  // RVA: 0x674FC0
    static bool nyu(double a, double b, double c);  // RVA: 0x674DE0
    static bool wak(float a, float b, float c);  // RVA: 0x674F10
};

// Namespace: <global>
class dau
{
public:

    // Methods
    static void wam(System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> a, int32_t b, int32_t c, int64_t d, Il2CppString* e);  // RVA: 0x6750F0
};

// Namespace: <global>
class dav
{
public:

    // Methods
    static uint16_t mie();  // RVA: 0x675800
    static int16_t war();  // RVA: 0x675AC0
    static int8_t wap();  // RVA: 0x675A20
    static int32_t bax();  // RVA: 0x675220
    static int32_t las();  // RVA: 0x675760
    static uint16_t was();  // RVA: 0x675B10
    static uint32_t jrx();  // RVA: 0x675710
    static int16_t ibd();  // RVA: 0x675630
    static uint8_t wao();  // RVA: 0x6759D0
    static int64_t fxl();  // RVA: 0x675530
    static int8_t efa();  // RVA: 0x675310
    static uint8_t epf();  // RVA: 0x675400
    static void wax(Char[][] a);  // RVA: 0x675B60
    static void ilo(Char[][] a);  // RVA: 0x675680
    static uint8_t lpw();  // RVA: 0x6757B0
    static int8_t egi();  // RVA: 0x675360
    static uint64_t hsk();  // RVA: 0x6755D0
    static uint16_t cdw();  // RVA: 0x675270
    static int8_t hdt();  // RVA: 0x675580
    static uint16_t elr();  // RVA: 0x6753B0
    static uint16_t dgx();  // RVA: 0x6752C0
    static Il2CppString* wan(int32_t a);  // RVA: 0x6758F0
    static int32_t mzj();  // RVA: 0x6758A0
    static uint64_t waw();  // RVA: 0x6755D0
    static wchar_t waq();  // RVA: 0x675A70
    static Il2CppString* fxk(int32_t a);  // RVA: 0x675450
    static int64_t mnc();  // RVA: 0x675850
    static int64_t wav();  // RVA: 0x6755D0
    static int32_t wat();  // RVA: 0x675710
    static uint32_t wau();  // RVA: 0x675710
};

// Namespace: <global>
class daw
{
public:
    // Static fields
    // static Char[][] bmms;


    // Methods
    static Il2CppString* wbd(Byte[][] a);  // RVA: 0x675F70
    static Il2CppString* wbb(Byte[][] a);  // RVA: 0x675D70
    static Char[][] wba(Byte[][] a);  // RVA: 0x675CD0
    static Byte[][] waz(Il2CppString* a);  // RVA: 0x675C80
    static Char[][] bqp(Byte[][] a);  // RVA: 0x675CD0
    static Byte[][] hsp(Char[][] a);  // RVA: 0x675DB0
    static void .cctor();  // RVA: 0x675BF0
    static Il2CppString* hwk(Byte[][] a);  // RVA: 0x675DF0
    static Il2CppString* wbc(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x675D10
    static Byte[][] beo(Il2CppString* a);  // RVA: 0x675C80
    static Byte[][] fnf(Il2CppString* a);  // RVA: 0x675C80
    static Il2CppString* gmb(Byte[][] a);  // RVA: 0x675D70
    static Il2CppString* igr(Byte[][] a);  // RVA: 0x675D70
    static Il2CppString* emz(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x675D10
    static Il2CppString* ltr(Byte[][] a);  // RVA: 0x675D70
    static Il2CppString* mkf(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x675D10
    static Byte[][] way(Char[][] a);  // RVA: 0x675DB0
};

// Namespace: <global>
class dax`1
{
public:
    System.Collections.Concurrent.ConcurrentBag<a> bmmt; // 0x0000
    System.Func<a> bmmu; // 0x0000

    // Methods
    void wbf(a a);  // RVA: 0x5640F0
    void wbg();  // RVA: 0x430790
    a wbe();  // RVA: 0x5640F0
    void .ctor(System.Func<a> a);  // RVA: 0x41A6C0
    void kni();  // RVA: 0x430790
    void fzl();  // RVA: 0x430790
    void hmc();  // RVA: 0x430790
};

// Namespace: <global>
class day
{
public:
    // Static fields
    // static Random* bmmv;
    // static Random* bmmw;


    // Methods
    static void lyd(Char[][] a);  // RVA: 0x677D00
    static int64_t icl(int64_t a, int64_t b);  // RVA: 0x6773F0
    static int32_t gii(int32_t a, int32_t b);  // RVA: 0x676D20
    static void de(Char[][] a);  // RVA: 0x676390
    static void dmr(Random* a, Char[][] b);  // RVA: 0x6766A0
    static int32_t fgf(int32_t a, int32_t b);  // RVA: 0x676A70
    static void efg(Random* a, Char[][] b);  // RVA: 0x6769D0
    static int64_t wbl(Random* a, int64_t b, int64_t c);  // RVA: 0x678D20
    static int32_t wbh(int32_t a, int32_t b);  // RVA: 0x6782F0
    static void kby(Random* a, Char[][] b);  // RVA: 0x677B80
    static int32_t gxd(int32_t a, int32_t b);  // RVA: 0x676F40
    static void htp(Byte[][] a);  // RVA: 0x677160
    static int64_t nto(int64_t a, int64_t b);  // RVA: 0x678080
    static void fze(Random* a, Char[][] b);  // RVA: 0x676C90
    static int64_t kij(Random* a, int64_t b, int64_t c);  // RVA: 0x677C20
    static void wbj(Byte[][] a);  // RVA: 0x678780
    static void kbj(Byte[][] a);  // RVA: 0x6778F0
    static int64_t wbi(int64_t a, int64_t b);  // RVA: 0x678510
    static void wbk(Char[][] a);  // RVA: 0x678A10
    static void wbm(Random* a, Char[][] b);  // RVA: 0x678DA0
    static int64_t mtd(Random* a, int64_t b, int64_t c);  // RVA: 0x678010
    static int32_t bvi(int32_t a, int32_t b);  // RVA: 0x676170
    static int64_t ktc(Random* a, int64_t b, int64_t c);  // RVA: 0x677C90
    static void iub(Byte[][] a);  // RVA: 0x677660
    static void dxp(Byte[][] a);  // RVA: 0x676740
    static void .cctor();  // RVA: 0x6760F0
};

// Namespace: <global>
class daz
{
public:
    // Static fields
    // static int64_t bmmx;


    // Methods
    static int64_t wbn();  // RVA: 0x6791A0
    static double nvl();  // RVA: 0x679130
    static int64_t ill();  // RVA: 0x678FB0
    static int64_t wbq();  // RVA: 0x679290
    static int64_t jeg();  // RVA: 0x678FD0
    static int64_t ehl();  // RVA: 0x678E70
    static int64_t lvk();  // RVA: 0x679050
    static int64_t bsn();  // RVA: 0x678E30
    static double iar();  // RVA: 0x678F40
    static int64_t wbr();  // RVA: 0x6792B0
    static double wbo();  // RVA: 0x679200
    static int64_t nrk();  // RVA: 0x679110
    static int64_t juo();  // RVA: 0x679030
    static double fei();  // RVA: 0x678ED0
    static int64_t csj();  // RVA: 0x678E50
    static double xl();  // RVA: 0x6792D0
    static int64_t wbp();  // RVA: 0x679270
    static int64_t nbv();  // RVA: 0x6790B0
};

// Namespace: <global>
class dba
{
public:
    // Static fields
    // static uint32_t bmmy;
    // static uint32_t bmmz;
    // static uint32_t bmna;
    // static uint32_t bmnb;
    // static uint32_t bmnc;


    // Methods
    static uint32_t esr(Stream* a, int64_t b, uint32_t c);  // RVA: 0x679340
    static uint32_t jpg(Stream* a, int64_t b, uint32_t c);  // RVA: 0x679AF0
    static uint32_t wbt(Stream* a, int64_t b, uint32_t c);  // RVA: 0x67A260
    static uint32_t iil(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x679940
    static uint32_t wbs(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x679E30
    static uint32_t gnh(Stream* a, int64_t b, uint32_t c);  // RVA: 0x679660
};

// Namespace: <global>
class dbb : public dcx`1
{
public:
    // Static fields
    // static bool bmnd;
    // static bool bmne;
    // static float bmnf;
    // static float bmng;
    // static float bmnh;
    // static float bmni;
    // static float bmnj;
    // static float bmnk;
    // static bool bmnl;

    uint8_t pad_0000[0x30]; // 0x0000
    int64_t bmnm; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int64_t bmnn; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int64_t bmno; // 0x0040

    // Methods
    static void wcd(float a);  // RVA: 0x67C4C0
    bool kag();  // RVA: 0x67B5F0
    static void wbu();  // RVA: 0x67BD90
    static void mhh();  // RVA: 0x67BAF0
    bool grf();  // RVA: 0x67B0E0
    void Update();  // RVA: 0x67A6C0
    static float wbz();  // RVA: 0x67C270
    void wcg();  // RVA: 0x67C7B0
    static float wca();  // RVA: 0x67C330
    static float wby();  // RVA: 0x67C1B0
    void .ctor();  // RVA: 0x67A920
    static float wcc();  // RVA: 0x67C4B0
    void cwj();  // RVA: 0x67AB90
    void wcf();  // RVA: 0x67C6E0
    static float wbw();  // RVA: 0x67C030
    void wci(Scene a, LoadSceneMode b);  // RVA: 0x67C960
    static void kcw();  // RVA: 0x67B800
    static void lpn();  // RVA: 0x67BA80
    void wch();  // RVA: 0x67C8C0
    static void nrp();  // RVA: 0x67BB60
    static void fcm();  // RVA: 0x67ACA0
    static void bqi();  // RVA: 0x67A960
    static float wcb();  // RVA: 0x67C3F0
    void hfg();  // RVA: 0x67B520
    bool lko();  // RVA: 0x67B870
    bool gad();  // RVA: 0x67AED0
    bool wce();  // RVA: 0x67C4D0
    static void wbv();  // RVA: 0x67BE00
    static void gtl();  // RVA: 0x67B2F0
    static float wbx();  // RVA: 0x67C0F0
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
        void .ctor(StorageDataType type, Byte[][] data);  // RVA: 0x670670
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbc
{
public:

    // Methods
    static Byte[][] wcq(T a);  // RVA: 0x5640F0
    static Byte[][] wco(StorageDataType a, e b);  // RVA: 0x5640F0
    static f wcp(StorageDataType a, Byte[][] b);  // RVA: 0x5640F0
    static T wcr(Byte[][] a);  // RVA: 0x5640F0
    static c wcm(Byte[][] a);  // RVA: 0x5640F0
    static d wcn(StorageDataType a, Byte[][] b);  // RVA: 0x5640F0
    static Color32 wcj(Byte[][] a);  // RVA: 0x67C9E0
    static b wcl(ObscuredPrefsData a);  // RVA: 0x5640F0
    static ObscuredPrefsData wck(a a);  // RVA: 0x5640F0
};

// Namespace: <global>
class dbd
{
public:
    // Static fields
    // static Type* bmnp;
    // static Type* bmnq;
    // static Type* bmnr;
    // static Type* bmns;
    // static Type* bmnt;
    // static Type* bmnu;
    // static Type* bmnv;
    // static Type* bmnw;
    // static Type* bmnx;
    // static Type* bmny;
    // static Type* bmnz;
    // static Type* bmoa;
    // static Type* bmob;
    // static Type* bmoc;
    // static Type* bmod;
    // static Type* bmoe;
    // static Type* bmof;
    // static Type* bmog;
    // static Type* bmoh;
    // static Type* bmoi;
    // static Type* bmoj;
    // static Type* bmok;
    // static Type* bmol;
    // static Type* bmom;
    // static Type* bmon;
    // static Type* bmoo;
    // static Type* bmop;
    // static Type* bmoq;
    // static Type* bmor;
    // static Type* bmos;
    // static Type* bmot;


    // Methods
    static StorageDataType wcs();  // RVA: 0x423920
    static void .cctor();  // RVA: 0x67CA20
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    class UnsupportedDataTypeException : public Exception
    {
    public:
    
        // Methods
        void .ctor(Type* type);  // RVA: 0x6706F0
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class HashCheckSumModifierDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x66FB20
    Byte[][] Invoke(Il2CppString* input);  // RVA: 0x66F9C0
    IAsyncResult* BeginInvoke(Il2CppString* input, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x66FAF0
    Byte[][] EndInvoke(IAsyncResult* result);  // RVA: 0x66F9B0
};

// Namespace: <global>
class dbe
{
public:
    // Static fields
    // static Il2CppString* bmou;

    uint8_t pad_0000[0x10]; // 0x0000
    uint32_t bmov; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    uint32_t bmow; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    HashCheckSumModifierDelegate* bmox; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool <bmoy>k__BackingField; // 0x0020

    // Methods
    void izy(HashCheckSumModifierDelegate* a);  // RVA: 0x67D320
    void hof();  // RVA: 0x67D310
    void wdc();  // RVA: 0x67D310
    static Il2CppString* ezg();  // RVA: 0x67D330
    static Il2CppString* wcw();  // RVA: 0x67D330
    uint32_t wdd(Il2CppString* a);  // RVA: 0x67D6E0
    void wcy(bool a);  // RVA: 0x67D580
    void hks();  // RVA: 0x67D310
    static Il2CppString* off();  // RVA: 0x67D330
    void wdb(bool a);  // RVA: 0x67D300
    void hzl(bool a);  // RVA: 0x67D300
    static void wcu(Il2CppString* a);  // RVA: 0x67D420
    void .ctor(uint32_t a);  // RVA: 0x67D2D0
    void wda(HashCheckSumModifierDelegate* a);  // RVA: 0x67D320
    static void wcv();  // RVA: 0x67D480
    bool wcx();  // RVA: 0x6702C0
    static Il2CppString* wct();  // RVA: 0x67D370
    void esh(HashCheckSumModifierDelegate* a);  // RVA: 0x67D320
    void kfa(bool a);  // RVA: 0x67D300
    static Il2CppString* lgx();  // RVA: 0x67D330
    void cqe(bool a);  // RVA: 0x67D300
    uint32_t wcz();  // RVA: 0x67D590
    void kbm(bool a);  // RVA: 0x67D300
    void dmy(HashCheckSumModifierDelegate* a);  // RVA: 0x67D320
    void nvl();  // RVA: 0x67D310
    void cuw();  // RVA: 0x67D310
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
    DeviceLockLevel <bmoz>k__BackingField; // 0x0010
    DeviceLockTamperingSensitivity <bmpa>k__BackingField; // 0x0011

    // Methods
    DeviceLockLevel wde();  // RVA: 0x6705A0
    void wdf(DeviceLockLevel a);  // RVA: 0x67D850
    DeviceLockTamperingSensitivity wdg();  // RVA: 0x67D860
    void wdh(DeviceLockTamperingSensitivity a);  // RVA: 0x67D870
    void .ctor(DeviceLockLevel a, DeviceLockTamperingSensitivity b);  // RVA: 0x67D810
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
        void .ctor();  // RVA: 0x66FA80
    };

    // Namespace: CodeStage.AntiCheat.Storage
    class PersistentDataPathException : public BackgroundThreadAccessException
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x670690
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbg
{
public:
    // Static fields
    // static Il2CppString* bmpb;
    // static Il2CppString* bmpc;
    // static dbe* bmpd;

    uint8_t pad_0000[0x10]; // 0x0000
    Action* bmpe; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Action* bmpf; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbq* <bmpg>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* <bmph>k__BackingField; // 0x0028

    // Methods
    void gfs();  // RVA: 0x67ED70
    ObscuredFileWriteResult uh(Byte[][] a);  // RVA: 0x680940
    void est(Stream* a, DeviceLockLevel b);  // RVA: 0x67ECE0
    Il2CppString* luh(Il2CppString* a);  // RVA: 0x67FBC0
    void wdi(Action* a);  // RVA: 0x680E40
    bool wdn();  // RVA: 0x6810C0
    Il2CppString* wdo();  // RVA: 0x6810D0
    void .ctor(Il2CppString* a, dbq* b);  // RVA: 0x67D900
    void .ctor();  // RVA: 0x67DAA0
    void .ctor(dbr* a);  // RVA: 0x67D960
    void ora();  // RVA: 0x67ED70
    void mgi(Stream* a, DeviceLockLevel b);  // RVA: 0x67FE40
    void hbv(Stream* a);  // RVA: 0x67EDD0
    ObscuredFileWriteResult wdr(Byte[][] a);  // RVA: 0x67EDA0
    ObscuredFileReadResult iqh();  // RVA: 0x67EE40
    void wdk(Action* a);  // RVA: 0x680F80
    static void wdp(Il2CppString* a);  // RVA: 0x6810E0
    void wdj(Action* a);  // RVA: 0x680EE0
    Il2CppString* cng(Il2CppString* a);  // RVA: 0x67DB60
    Il2CppString* wdy(Il2CppString* a);  // RVA: 0x6823E0
    dbq* wdm();  // RVA: 0x63B450
    ObscuredFileWriteResult wdv(Byte[][] a);  // RVA: 0x681DE0
    void kqk();  // RVA: 0x67ED70
    void icl();  // RVA: 0x67ED70
    void wdl(Action* a);  // RVA: 0x681020
    ObscuredFileHeader wdu(Stream* a);  // RVA: 0x67EEF0
    ObscuredFileWriteResult gfz(Byte[][] a);  // RVA: 0x67EDA0
    ObscuredFileReadResult efa();  // RVA: 0x67E070
    void knq(Stream* a);  // RVA: 0x67EE80
    void nxq(Stream* a);  // RVA: 0x6808D0
    ObscuredFileHeader ngz(Stream* a);  // RVA: 0x67EEF0
    void wdw(Stream* a);  // RVA: 0x6822E0
    void .ctor(Il2CppString* a);  // RVA: 0x67DA00
    void wdx(Stream* a, DeviceLockLevel b);  // RVA: 0x682350
    ObscuredFileWriteResult mrp(Byte[][] a);  // RVA: 0x6803D0
    ObscuredFileReadResult wdt();  // RVA: 0x681170
    ObscuredFileHeader kso(Stream* a);  // RVA: 0x67EEF0
    static void .cctor();  // RVA: 0x67D880
    void wdq();  // RVA: 0x67ED70
    ObscuredFileReadResult wds();  // RVA: 0x67EE40
    ObscuredFileWriteResult mgq(Byte[][] a);  // RVA: 0x67FED0
    ObscuredFileReadResult kxd();  // RVA: 0x67EF50
    void daf(Stream* a);  // RVA: 0x67E000
    Il2CppString* cq(Il2CppString* a);  // RVA: 0x67DDB0
};

// Namespace: <global>
class dbh
{
public:
    // Static fields
    // static int32_t bmpi;
    // static int32_t bmpj;
    // static Byte[][] bmpk;


    // Methods
    static void wef(Stream* a, Stream* b, dbp* c);  // RVA: 0x682A20
    static void weh(Stream* a, Stream* b, dbp* c);  // RVA: 0x682E30
    static uint32_t cip(Stream* a);  // RVA: 0x682950
    static void isb(Stream* a, Stream* b, dbp* c);  // RVA: 0x682A20
    static uint32_t wec(Stream* a);  // RVA: 0x682CA0
    static uint32_t bmp(Stream* a);  // RVA: 0x682810
    static uint32_t web(Stream* a);  // RVA: 0x6829E0
    static uint32_t weg(Byte[][] a);  // RVA: 0x682E10
    static uint32_t gvj(Stream* a);  // RVA: 0x6829E0
    static void bzc(Stream* a, Stream* b, dbp* c);  // RVA: 0x682850
    static uint32_t wee(Stream* a);  // RVA: 0x6829E0
    static void wea(Stream* a, Stream* b, dbp* c);  // RVA: 0x682C90
    static void kja(Stream* a, uint32_t b);  // RVA: 0x682AD0
    static void odr(Stream* a, uint32_t b);  // RVA: 0x682BB0
    static void wed(Stream* a, uint32_t b);  // RVA: 0x682D30
    static void be(Stream* a, Stream* b, dbp* c);  // RVA: 0x682660
    static void bkj(Stream* a, Stream* b, dbp* c);  // RVA: 0x682710
    static void wdz(Stream* a, Stream* b, dbp* c);  // RVA: 0x682A20
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
        uint8_t get_Byte1();  // RVA: 0x66FCF0
        void set_Byte1(uint8_t value);  // RVA: 0x66FD90
        uint8_t get_Byte2();  // RVA: 0x66FD40
        void set_Byte2(uint8_t value);  // RVA: 0x66FDA0
        uint8_t get_Byte3();  // RVA: 0x66FD50
        void set_Byte3(uint8_t value);  // RVA: 0x66FDB0
        uint8_t get_Byte4();  // RVA: 0x66FD60
        void set_Byte4(uint8_t value);  // RVA: 0x66FDC0
        uint8_t get_Version();  // RVA: 0x66FD80
        void set_Version(uint8_t value);  // RVA: 0x66FDE0
        ObscurationMode get_ObscurationMode();  // RVA: 0x66FD70
        void set_ObscurationMode(ObscurationMode value);  // RVA: 0x66FDD0
        bool IsValid();  // RVA: 0x66FD10
        void wei(Stream* a);  // RVA: 0x66FDF0
        static void wej(Stream* a, ObscurationMode b);  // RVA: 0x66FEB0
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
        ObscuredFileErrorCode get_ErrorCode();  // RVA: 0x66FCF0
        Exception* get_Exception();  // RVA: 0x66FD00
        void .ctor(ObscuredFileErrorCode code);  // RVA: 0x66FCD0
        void .ctor(Exception* exception);  // RVA: 0x66FCC0
        Il2CppString* ToString();  // RVA: 0x66FBE0
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
        bool wek();  // RVA: 0x6702D0
        Byte[][] get_Data();  // RVA: 0x6702A0
        bool wel();  // RVA: 0x670300
        bool get_DataIsNotGenuine();  // RVA: 0x670290
        bool get_DataFromAnotherDevice();  // RVA: 0x670280
        ObscuredFileError get_Error();  // RVA: 0x6702B0
        bool get_IsValid();  // RVA: 0x6702C0
        void .ctor(Byte[][] data, bool dataIsNotGenuine, bool dataFromAnotherDevice);  // RVA: 0x670230
        void .ctor(ObscuredFileError error);  // RVA: 0x6701E0
        static ObscuredFileReadResult wem(Exception* a);  // RVA: 0x670310
        static ObscuredFileReadResult wen(ObscuredFileErrorCode a);  // RVA: 0x670390
        Il2CppString* ToString();  // RVA: 0x66FF70
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
        bool weo();  // RVA: 0x6705B0
        ObscuredFileError get_Error();  // RVA: 0x670590
        bool get_IsValid();  // RVA: 0x6705A0
        void .ctor(ObscuredFileErrorCode result);  // RVA: 0x670540
        void .ctor(ObscuredFileError error);  // RVA: 0x670510
        static ObscuredFileWriteResult wep(Exception* a);  // RVA: 0x6705C0
        static ObscuredFileWriteResult weq(ObscuredFileErrorCode a);  // RVA: 0x670610
        Il2CppString* ToString();  // RVA: 0x670410
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbi
{
public:
    // Static fields
    // static Il2CppString* bmpl;
    // static Il2CppString* bmpm;
    // static Action* bmpn;
    // static Action* bmpo;
    // static dbg* bmpp;
    // static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> bmpq;
    // static Il2CppObject* bmpr;
    // static bool <bmps>k__BackingField;
    // static bool <bmpt>k__BackingField;
    // static bool <bmpu>k__BackingField;
    // static ObscuredFileReadResult <bmpv>k__BackingField;
    // static ObscuredFileWriteResult <bmpw>k__BackingField;
    // static dbl* <bmpx>k__BackingField;


    // Methods
    static void wgt(Il2CppString* a, ObscuredLong b);  // RVA: 0x68E190
    static dbg* ido(Il2CppString* a, dbq* b);  // RVA: 0x687DF0
    static ObscuredDecimal diz(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6842F0
    static dbq* wev();  // RVA: 0x68B9F0
    static void njd(Il2CppString* a, ObscuredShort b);  // RVA: 0x68A310
    static void wgq(Il2CppString* a, ObscuredFloat b);  // RVA: 0x68DFC0
    static ObscuredChar tq(Il2CppString* a, ObscuredChar b);  // RVA: 0x68B470
    static ObscuredFloat whn(Il2CppString* a, ObscuredFloat b);  // RVA: 0x68EF20
    static void wgu(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x68E220
    static void wgx(Il2CppString* a, ObscuredString* b);  // RVA: 0x68E3E0
    static void wgl(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x68DC80
    static void .cctor();  // RVA: 0x6832D0
    static ObscuredVector3Int wib(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x68F9D0
    static void qi(Il2CppString* a, ObscuredLong b);  // RVA: 0x68B2E0
    static void wes(Action* a);  // RVA: 0x68B700
    static System.Collections.Generic.ICollection<System.String> nhd();  // RVA: 0x68A290
    static ObscuredUInt whv(Il2CppString* a, ObscuredUInt b);  // RVA: 0x68F510
    static void wfi(ObscuredFileWriteResult a);  // RVA: 0x68BED0
    static ObscuredChar whh(Il2CppString* a, ObscuredChar b);  // RVA: 0x68E9D0
    static void wgb();  // RVA: 0x68D090
    static ObscuredQuaternion fak(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x685AB0
    static void mvs(Il2CppString* a, ObscuredBool b);  // RVA: 0x689E40
    static void blr(Il2CppString* a, ObscuredDouble b);  // RVA: 0x683850
    static void wfo(dbq* a, bool b);  // RVA: 0x68C270
    static ObscuredChar ntm(Il2CppString* a, ObscuredChar b);  // RVA: 0x68A740
    static void wfq();  // RVA: 0x68C550
    static ObscuredChar deq(Il2CppString* a, ObscuredChar b);  // RVA: 0x684170
    static void wfs(bool a);  // RVA: 0x68CA40
    static ObscuredQuaternion fmm(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6861E0
    static ObscuredVector2Int whz(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x68F810
    static b wfy(Il2CppString* a, b b);  // RVA: 0x5640F0
    static bool fzi(Il2CppString* a);  // RVA: 0x686DB0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> dvi();  // RVA: 0x684820
    static ObscuredSByte jij(Il2CppString* a, ObscuredSByte b);  // RVA: 0x688740
    static void ofz();  // RVA: 0x68ABE0
    static ObscuredSByte whs(Il2CppString* a, ObscuredSByte b);  // RVA: 0x68F350
    static void wfx(Il2CppString* a, a b);  // RVA: 0x5640F0
    static void igk(dbq* a, bool b);  // RVA: 0x687FA0
    static System.Collections.Generic.ICollection<System.String> wfu();  // RVA: 0x68CBA0
    static ObscuredBigInteger gbh(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x686EE0
    static ObscuredBigInteger whl(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x68ED40
    static void wfn(Il2CppString* a, bool b);  // RVA: 0x68C1E0
    static void flr();  // RVA: 0x685EB0
    static void nxi(Il2CppString* a);  // RVA: 0x68A8B0
    static ObscuredFileWriteResult wgd();  // RVA: 0x68D500
    static void wgp(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68DF20
    static void fuf(Il2CppString* a, ObscuredLong b);  // RVA: 0x686790
    static bool wft(Il2CppString* a);  // RVA: 0x68CB20
    static ObscuredGuid who(Il2CppString* a, ObscuredGuid b);  // RVA: 0x68EFE0
    static ObscuredShort jn(Il2CppString* a, ObscuredShort b);  // RVA: 0x6887C0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> eys();  // RVA: 0x6856B0
    static void wfr();  // RVA: 0x68C710
    static ObscuredQuaternion whr(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x68F250
    static void wgz(Il2CppString* a, ObscuredULong b);  // RVA: 0x68E4E0
    static ObscuredLong lyw(Il2CppString* a, ObscuredLong b);  // RVA: 0x6899F0
    static void nec(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68A170
    static ObscuredDateTimeOffset whj(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x68EB50
    static void hnk(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6874B0
    static void nu(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x68A800
    static ObscuredULong fil(Il2CppString* a, ObscuredULong b);  // RVA: 0x685C50
    static ObscuredChar iis(Il2CppString* a, ObscuredChar b);  // RVA: 0x688100
    static void wet(Action* a);  // RVA: 0x68B7F0
    static void wgm(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x68DD10
    static ObscuredDateTimeOffset hxx(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x687C10
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> fxj();  // RVA: 0x6869B0
    static void whd(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x68E730
    static ObscuredDouble cxq(Il2CppString* a, ObscuredDouble b);  // RVA: 0x683EE0
    static ObscuredDateTime gvt(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x687340
    static void dkd(Il2CppString* a, ObscuredBool b);  // RVA: 0x6843F0
    static void weu(Action* a);  // RVA: 0x68B8F0
    static void oia(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x68AF10
    static void knr(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x688CA0
    static void gcy(Il2CppString* a, bool b);  // RVA: 0x686FE0
    static ObscuredVector2 obu(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68AB10
    static ObscuredDouble whm(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68EE40
    static void wgs(Il2CppString* a, ObscuredInt b);  // RVA: 0x68E110
    static ObscuredVector3 ikq(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x688290
    static dbg* wfz(Il2CppString* a, dbq* b);  // RVA: 0x68CF00
    static void ccr(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x683C20
    static void hfk(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x687400
    static void ddo(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6840C0
    static ObscuredShort wht(Il2CppString* a, ObscuredShort b);  // RVA: 0x68F3D0
    static void wgf(Il2CppString* a, d b);  // RVA: 0x5640F0
    static void lih(Il2CppString* a, ObscuredUInt b);  // RVA: 0x688ED0
    static ObscuredULong whw(Il2CppString* a, ObscuredULong b);  // RVA: 0x68F5C0
    static ObscuredInt whp(Il2CppString* a, ObscuredInt b);  // RVA: 0x68F0E0
    static ObscuredVector2 why(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68F740
    static void wgn(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x68DDC0
    static ObscuredDateTimeOffset fvc(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x686820
    static void wgv(Il2CppString* a, ObscuredSByte b);  // RVA: 0x68E2D0
    static ObscuredUInt oad(Il2CppString* a, ObscuredUInt b);  // RVA: 0x68AA60
    static void mxh(Il2CppString* a, ObscuredUInt b);  // RVA: 0x689ED0
    static void dwo(Il2CppString* a, bool b);  // RVA: 0x684C20
    static void ksw(Il2CppString* a, ObscuredString* b);  // RVA: 0x688DC0
    static void nog(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x68A4A0
    static void nor(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68A550
    static ObscuredUShort whx(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68F680
    static ObscuredBool whf(Il2CppString* a, ObscuredBool b);  // RVA: 0x68E890
    static void cbw();  // RVA: 0x683A60
    static void hxd(bool a);  // RVA: 0x687A50
    static ObscuredDateTime fnj(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6864C0
    static ObscuredByte whg(Il2CppString* a, ObscuredByte b);  // RVA: 0x68E950
    static ObscuredFileWriteResult lky(Byte[][] a);  // RVA: 0x6890B0
    static ObscuredUInt kaq(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6889D0
    static void hxm(bool a);  // RVA: 0x687B30
    static bool kjb(Il2CppString* a);  // RVA: 0x688A80
    static bool bab(Il2CppString* a);  // RVA: 0x683350
    static void lkp(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x689020
    static bool wfc();  // RVA: 0x68BC60
    static System.Collections.Generic.ICollection<System.String> ghn();  // RVA: 0x687070
    static ObscuredFileWriteResult lv();  // RVA: 0x6896D0
    static void wgj(Il2CppString* a, ObscuredByte b);  // RVA: 0x68DB70
    static ObscuredUShort nyr(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68A9A0
    static void cgl(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x683D90
    static bool drj();  // RVA: 0x684480
    static bool hom();  // RVA: 0x687560
    static void be(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6833D0
    static ObscuredString* bjn(Il2CppString* a, ObscuredString* b);  // RVA: 0x683500
    static ObscuredDouble nqd(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68A5E0
    static ObscuredFileWriteResult wgh(Byte[][] a);  // RVA: 0x68D8C0
    static ObscuredFileWriteResult ndf(Byte[][] a);  // RVA: 0x689F50
    static ObscuredDateTime whi(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x68EA90
    static void dbn(Il2CppString* a, ObscuredSByte b);  // RVA: 0x683FC0
    static ObscuredFileReadResult fms();  // RVA: 0x6862E0
    static ObscuredFileWriteResult bkd(Byte[][] a);  // RVA: 0x683580
    static ObscuredBigInteger nlx(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x68A3A0
    static ObscuredFileWriteResult wfh();  // RVA: 0x68BE60
    static ObscuredVector2Int fta(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6866D0
    static void wfm(bool a);  // RVA: 0x68C120
    static void wha(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68E570
    static void ivb(Il2CppString* a);  // RVA: 0x688550
    static void wfw();  // RVA: 0x68CD10
    static ObscuredString* whu(Il2CppString* a, ObscuredString* b);  // RVA: 0x68F490
    static void wer(Action* a);  // RVA: 0x68B610
    static dbl* wfj();  // RVA: 0x68BF50
    static bool wey();  // RVA: 0x68BAF0
    static void enw(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6854B0
    static ObscuredFileReadResult wgg();  // RVA: 0x68D6E0
    static void cpe(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x683E30
    static void hsy(Il2CppString* a, ObscuredULong b);  // RVA: 0x6879C0
    static void wgr(Il2CppString* a, ObscuredGuid b);  // RVA: 0x68E060
    static void cak(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6839B0
    static void wgi(Il2CppString* a, ObscuredBool b);  // RVA: 0x68DAE0
    static void fkh(Il2CppString* a, ObscuredDouble b);  // RVA: 0x685D10
    static void fwm(Il2CppString* a, ObscuredDouble b);  // RVA: 0x686910
    static void ben(Il2CppString* a, ObscuredShort b);  // RVA: 0x683470
    static void wgo(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x68DE70
    static ObscuredVector2Int cfo(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x683CD0
    static void wex(bool a);  // RVA: 0x68BA90
    static void gmm(Il2CppString* a, ObscuredDouble b);  // RVA: 0x687180
    static ObscuredLong xw(Il2CppString* a, ObscuredLong b);  // RVA: 0x68FC00
    static ObscuredSByte mpa(Il2CppString* a, ObscuredSByte b);  // RVA: 0x689BA0
    static void msr(Il2CppString* a, ObscuredSByte b);  // RVA: 0x689DC0
    static void whe(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x68E7E0
    static void fcm(dbq* a, bool b);  // RVA: 0x685BB0
    static void wfv(Il2CppString* a);  // RVA: 0x68CC20
    static void egq(Il2CppString* a, dbq* b, bool c);  // RVA: 0x685070
    static void frn(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x686640
    static void wfp(Il2CppString* a, dbq* b, bool c);  // RVA: 0x68C310
    static void wgw(Il2CppString* a, ObscuredShort b);  // RVA: 0x68E350
    static void kkm(bool a);  // RVA: 0x688BC0
    static ObscuredVector3 wia(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x68F8D0
    static void wfd(bool a);  // RVA: 0x68BCB0
    static void iez(Il2CppString* a, ObscuredULong b);  // RVA: 0x687F10
    static Il2CppString* wfe();  // RVA: 0x68BD10
    static ObscuredLong iqs(Il2CppString* a, ObscuredLong b);  // RVA: 0x688390
    static void jwq(Il2CppString* a, ObscuredBool b);  // RVA: 0x688940
    static bool wfa();  // RVA: 0x68BBB0
    static void dyx();  // RVA: 0x684CB0
    static bool wez();  // RVA: 0x68BB50
    static ObscuredQuaternion iub(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x688450
    static ObscuredLong oig(Il2CppString* a, ObscuredLong b);  // RVA: 0x68AFA0
    static void ww(Il2CppString* a, ObscuredString* b);  // RVA: 0x68FAD0
    static void lx(Il2CppString* a, bool b);  // RVA: 0x6898B0
    static void gmq(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x687220
    static ObscuredUShort kk(Il2CppString* a, ObscuredUShort b);  // RVA: 0x688B00
    static ObscuredSByte gub(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6872C0
    static ObscuredDateTime bwv(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6838F0
    static bool Save();  // RVA: 0x682F30
    static void emk(Il2CppString* a, ObscuredUShort b);  // RVA: 0x685420
    static ObscuredDateTime oua(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x68B220
    static void idd(Il2CppString* a);  // RVA: 0x687D00
    static void whb(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68E600
    static void gjc(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6870F0
    static void lbx(Il2CppString* a, ObscuredLong b);  // RVA: 0x688E40
    static ObscuredDateTimeOffset eib(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6852B0
    static ObscuredVector2 ey(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6855E0
    static ObscuredDecimal ois(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x68B060
    static void wfb(bool a);  // RVA: 0x68BC00
    static ObscuredLong whq(Il2CppString* a, ObscuredLong b);  // RVA: 0x68F190
    static ObscuredFloat hrq(Il2CppString* a, ObscuredFloat b);  // RVA: 0x687900
    static ObscuredDouble mqt(Il2CppString* a, ObscuredDouble b);  // RVA: 0x689CE0
    static ObscuredDouble vc(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68B530
    static void dzs(Il2CppString* a, ObscuredShort b);  // RVA: 0x684FE0
    static ObscuredUInt xn(Il2CppString* a, ObscuredUInt b);  // RVA: 0x68FB50
    static void nrh(Il2CppString* a, ObscuredSByte b);  // RVA: 0x68A6C0
    static c wge(Il2CppString* a, c b);  // RVA: 0x5640F0
    static dbg* wfl();  // RVA: 0x68C010
    static void ewa(Il2CppString* a, ObscuredByte b);  // RVA: 0x685560
    static void det(bool a);  // RVA: 0x684230
    static ObscuredVector2 iiu(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6881C0
    static ObscuredULong fph(Il2CppString* a, ObscuredULong b);  // RVA: 0x686580
    static void wga();  // RVA: 0x68D020
    static void wgk(Il2CppString* a, ObscuredChar b);  // RVA: 0x68DBF0
    static void lyp(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x689940
    static void wfk(dbl* a);  // RVA: 0x68BFA0
    static ObscuredSByte ner(Il2CppString* a, ObscuredSByte b);  // RVA: 0x68A210
    static void eiu(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6853A0
    static ObscuredQuaternion rp(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x68B370
    static void wgy(Il2CppString* a, ObscuredUInt b);  // RVA: 0x68E460
    static ObscuredFileReadResult wff();  // RVA: 0x68BD60
    static void gaq(Il2CppString* a, ObscuredGuid b);  // RVA: 0x686E30
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> lnv();  // RVA: 0x6892D0
    static ObscuredULong opl(Il2CppString* a, ObscuredULong b);  // RVA: 0x68B160
    static void wfg(ObscuredFileReadResult a);  // RVA: 0x68BDD0
    static ObscuredULong jnd(Il2CppString* a, ObscuredULong b);  // RVA: 0x688880
    static ObscuredUShort mqo(Il2CppString* a, ObscuredUShort b);  // RVA: 0x689C20
    static ObscuredUShort iir(Il2CppString* a, ObscuredUShort b);  // RVA: 0x688040
    static ObscuredVector2 ljj(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x688F50
    static void blj(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6837A0
    static System.Collections.Generic.ICollection<System.String> dcw();  // RVA: 0x684040
    static void whc(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x68E6A0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wgc();  // RVA: 0x68D100
    static void koy();  // RVA: 0x688D50
    static bool wew();  // RVA: 0x68BA40
    static ObscuredDecimal whk(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x68EC40
    static ObscuredVector3 iwg(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x688640
    static ObscuredVector3 flo(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x685DB0
    static ObscuredDateTimeOffset mhe(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x689AB0
};

// Namespace: <global>
class dbj
{
public:
    // Static fields
    // static bool bmpy;


    // Methods
    static bool cer();  // RVA: 0x68FCD0
    static void u();  // RVA: 0x68FDF0
    static void cup(bool a);  // RVA: 0x68FCF0
    static void wif(bool a);  // RVA: 0x68FDE0
    static bool oqn();  // RVA: 0x68FCD0
    static void wie(bool a);  // RVA: 0x68FCC0
    static void wih();  // RVA: 0x6903C0
    static void wig(bool a);  // RVA: 0x6902D0
    static bool wid();  // RVA: 0x68FCD0
    static void wic();  // RVA: 0x690060
    static void dpm(bool a);  // RVA: 0x68FDE0
    static void bdc(bool a);  // RVA: 0x68FCC0
};

// Namespace: <global>
class dbk
{
public:

    // Methods
    static Byte[][] bqy(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x690520
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wil(Byte[][] a, dbl* b);  // RVA: 0x690750
    static Byte[][] frm(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x690600
    static Byte[][] wik(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x6906E0
    static Byte[][] ney(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x690670
    static dbn* wim(dbl* a);  // RVA: 0x690820
    static ObscuredPrefsData wii(a a, dbl* b);  // RVA: 0x5640F0
    static Byte[][] dil(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x690590
    static b wij(ObscuredPrefsData a, dbl* b);  // RVA: 0x5640F0
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
    ACTkSerializationKind <bmpz>k__BackingField; // 0x0010

    // Methods
    ACTkSerializationKind win();  // RVA: 0x66F7C0
    void .ctor(ACTkSerializationKind a);  // RVA: 0x67D2D0
};

// Namespace: <global>
class dbm
{
public:
    // Static fields
    // static uint8_t bmqa;
    // static dbm* bmqb;


    // Methods
    void wit(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x690930
    void fje(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x690930
    b wiq(ObscuredPrefsData a);  // RVA: 0x5640F0
    void fts(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x690930
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wis(Byte[][] a);  // RVA: 0x691070
    ObscuredPrefsData wip(a a);  // RVA: 0x5640F0
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> iok(BinaryReader* a);  // RVA: 0x6909D0
    Byte[][] wir(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x690C80
    void .ctor();  // RVA: 0x629380
    static dbn* wio();  // RVA: 0x690BF0
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wiu(BinaryReader* a);  // RVA: 0x691480
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> kfe(BinaryReader* a);  // RVA: 0x690AE0
};

// Namespace: <global>
class dbn
{
public:

    // Methods
    ObscuredPrefsData wip(a a);  // RVA: 0x5640F0
    b wiq(ObscuredPrefsData a);  // RVA: 0x5640F0
    Byte[][] wir(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x41BD90
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wis(Byte[][] a);  // RVA: 0x41BD90
};

// Namespace: <global>
class dbo
{
public:
    // Static fields
    // static dbo* bmqc;


    // Methods
    ObscuredPrefsData wip(a a);  // RVA: 0x5640F0
    static dbn* wiv();  // RVA: 0x6917C0
    b wiq(ObscuredPrefsData a);  // RVA: 0x5640F0
    void .ctor();  // RVA: 0x629380
    static dbn* mzb();  // RVA: 0x691620
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wis(Byte[][] a);  // RVA: 0x691780
    static dbn* nfo();  // RVA: 0x6916B0
    static dbn* hvu();  // RVA: 0x691590
    Byte[][] wir(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x691740
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
    ObscurationMode <bmqd>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Byte[][] <bmqe>k__BackingField; // 0x0018

    // Methods
    ObscurationMode wiw();  // RVA: 0x6705A0
    Byte[][] wix();  // RVA: 0x691970
    void .ctor(Il2CppString* a);  // RVA: 0x691850
    void .ctor(Byte[][] a);  // RVA: 0x691920
};

// Namespace: <global>
class dbq
{
public:

    // Methods
    ObscuredFileLocation wiy();  // RVA: 0x4238F0
    dbp* wiz();  // RVA: 0x41EDB0
    dbf* wja();  // RVA: 0x41EDB0
    bool wjb();  // RVA: 0x4238F0
    bool wjc();  // RVA: 0x4238F0
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
    ObscuredFileLocation <bmqf>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    dbp* <bmqg>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbf* <bmqh>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool <bmqi>k__BackingField; // 0x0028
    bool <bmqj>k__BackingField; // 0x0029

    // Methods
    ObscuredFileLocation wiy();  // RVA: 0x6705A0
    void wjd(ObscuredFileLocation a);  // RVA: 0x67D850
    dbp* wiz();  // RVA: 0x691970
    void wje(dbp* a);  // RVA: 0x67D320
    dbf* wja();  // RVA: 0x63B450
    void wjf(dbf* a);  // RVA: 0x63B460
    bool wjb();  // RVA: 0x63B470
    void wjg(bool a);  // RVA: 0x63B480
    bool wjc();  // RVA: 0x691C60
    void wjh(bool a);  // RVA: 0x691C70
    void .ctor();  // RVA: 0x691A30
    void .ctor(ObscuredFileLocation a);  // RVA: 0x691B00
    void .ctor(dbf* a);  // RVA: 0x691980
    void .ctor(dbp* a, dbf* b, ObscuredFileLocation c, bool d, bool e);  // RVA: 0x691BE0
};

// Namespace: <global>
class dbs
{
public:
    // Static fields
    // static Il2CppString* bmqk;
    // static Il2CppString* bmql;
    // static Il2CppString* bmqm;
    // static uint8_t bmqn;
    // static bool bmqo;
    // static bool bmqp;
    // static Il2CppString* bmqq;
    // static Il2CppString* bmqr;
    // static dbe* bmqs;
    // static Action* bmqt;
    // static Action* bmqu;
    // static Action* bmqv;
    // static Action* bmqw;
    // static bool bmqx;
    // static dbf* <bmqy>k__BackingField;
    // static Char[][] bmqz;


    // Methods
    static void jz(Il2CppString* a, float b);  // RVA: 0x696B20
    static Vector3 wlr(Il2CppString* a, Vector3 b);  // RVA: 0x69B600
    static Byte[][] iqr(Il2CppString* a, Il2CppString* b);  // RVA: 0x695940
    static void ila(Il2CppString* a, ObscuredDouble b);  // RVA: 0x695810
    static Il2CppString* wjk();  // RVA: 0x699270
    static void wkb(bool a);  // RVA: 0x69A010
    static void wjn(Action* a);  // RVA: 0x6994D0
    static void wly(Il2CppString* a, Rect b);  // RVA: 0x69BA40
    static void i(Il2CppString* a, float b);  // RVA: 0x6954E0
    static void wjr(Action* a);  // RVA: 0x6998D0
    static ObscuredShort ls(Il2CppString* a, ObscuredShort b);  // RVA: 0x697550
    static void gxs(Il2CppString* a, ObscuredDouble b);  // RVA: 0x694770
    static void jqi();  // RVA: 0x696A90
    static void wjz(bool a);  // RVA: 0x699EE0
    static void nid(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6980D0
    static void wjq(Action* a);  // RVA: 0x6997D0
    static Byte[][] woh(Il2CppString* a);  // RVA: 0x69FBF0
    static void wmw(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x69C870
    static ObscuredDecimal ith(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x695E70
    static void hoh(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x695440
    static Byte[][] wlk(Il2CppString* a, uint8_t b, int32_t c);  // RVA: 0x69AFE0
    static void wlv(Il2CppString* a, Color32 b);  // RVA: 0x69B8C0
    static void wmr(Il2CppString* a, ObscuredUInt b);  // RVA: 0x69C5A0
    static void wlb(Il2CppString* a, Decimal b);  // RVA: 0x69ABB0
    static void wkg(Il2CppString* a);  // RVA: 0x69A290
    static void lxu(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6978D0
    static void bqp(Il2CppString* a, ObscuredUInt b);  // RVA: 0x692460
    static void wmo(Il2CppString* a, ObscuredSByte b);  // RVA: 0x69C410
    static dbf* wjv();  // RVA: 0x699CD0
    static void ojm(Il2CppString* a, ObscuredUShort b);  // RVA: 0x698600
    static void nhr();  // RVA: 0x697FB0
    static void wmx(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x69C920
    static ObscuredDateTimeOffset wnc(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x69CC90
    static Il2CppString* wko(Il2CppString* a, Il2CppString* b);  // RVA: 0x692D70
    static void ern(Il2CppString* a, ObscuredBool b);  // RVA: 0x693ED0
    static void wmu(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x69C740
    static void wju(Action* a);  // RVA: 0x699BD0
    static void iya(Il2CppString* a, ObscuredString* b);  // RVA: 0x6960E0
    static void wkt(Il2CppString* a, Il2CppString* b);  // RVA: 0x69A830
    static Il2CppString* ekz(Il2CppString* a, Il2CppString* b);  // RVA: 0x693E60
    static float oav(Il2CppString* a, float b);  // RVA: 0x6983B0
    static Il2CppString* csg(Il2CppString* a);  // RVA: 0x692E10
    static void wkx(Il2CppString* a, uint32_t b);  // RVA: 0x69A9F0
    static ObscuredInt wni(Il2CppString* a, ObscuredInt b);  // RVA: 0x69D220
    static void wls(Il2CppString* a, Quaternion b);  // RVA: 0x69B6B0
    static ObscuredBigInteger izk(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x696160
    static void mpz(Il2CppString* a, ObscuredSByte b);  // RVA: 0x697A70
    static ObscuredUShort wnq(Il2CppString* a, ObscuredUShort b);  // RVA: 0x69D7C0
    static void wmj(Il2CppString* a, ObscuredFloat b);  // RVA: 0x69C100
    static ObscuredVector2Int wns(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x69D950
    static ObscuredBool iun(Il2CppString* a, ObscuredBool b);  // RVA: 0x696020
    static void iex(Il2CppString* a, ObscuredGuid b);  // RVA: 0x695600
    static ObscuredVector2 wnr(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x69D880
    static void wkq();  // RVA: 0x69A630
    static ObscuredLong ocs(Il2CppString* a, ObscuredLong b);  // RVA: 0x698420
    static Vector2 wlo(Il2CppString* a, Vector2 b);  // RVA: 0x69B400
    static void pa(Il2CppString* a, Il2CppString* b);  // RVA: 0x698EF0
    static void ifr(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6956B0
    static bool gms(Il2CppString* a, Il2CppString* b);  // RVA: 0x694690
    static void iil(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x695760
    static ObscuredBigInteger wne(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x69CE80
    static Il2CppString* ouh(Il2CppString* a, Il2CppString* b);  // RVA: 0x698C70
    static DeviceLockLevel wjw();  // RVA: 0x699D20
    static void hho(Il2CppString* a, ObscuredULong b);  // RVA: 0x694FF0
    static ObscuredString* khs(Il2CppString* a, ObscuredString* b);  // RVA: 0x696B90
    static Quaternion wlu(Il2CppString* a, Quaternion b);  // RVA: 0x69B820
    static void wmm(Il2CppString* a, ObscuredLong b);  // RVA: 0x69C2D0
    static ObscuredDateTime wnb(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x69CBD0
    static void wld(Il2CppString* a, int64_t b);  // RVA: 0x69ACD0
    static void hfq(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x694F40
    static int64_t wle(Il2CppString* a, int64_t b);  // RVA: 0x69AD40
    static Byte[][] hmr(uint8_t a, int32_t b);  // RVA: 0x6953C0
    static double wla(Il2CppString* a, double b);  // RVA: 0x69AB40
    static Il2CppString* kid(Il2CppString* a, Il2CppString* b);  // RVA: 0x696C10
    static void wmn(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x69C360
    static Vector3 wlq(Il2CppString* a);  // RVA: 0x69B4F0
    static Rect wlz(Il2CppString* a);  // RVA: 0x69BAC0
    static ObscuredLong wnj(Il2CppString* a, ObscuredLong b);  // RVA: 0x69D2D0
    static ObscuredString* baj(Il2CppString* a, ObscuredString* b);  // RVA: 0x691EA0
    static void wmq(Il2CppString* a, ObscuredString* b);  // RVA: 0x69C520
    static void wkp();  // RVA: 0x69A510
    static void ldu(Il2CppString* a, ObscuredUShort b);  // RVA: 0x697020
    static void bze();  // RVA: 0x6928B0
    static void oov(Il2CppString* a, ObscuredInt b);  // RVA: 0x698980
    static ObscuredDateTimeOffset nzv(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6982C0
    static bool qc(Il2CppString* a, Il2CppString* b);  // RVA: 0x698F60
    static void wmk(Il2CppString* a, ObscuredGuid b);  // RVA: 0x69C1A0
    static Il2CppString* wjj();  // RVA: 0x699220
    static void bqo();  // RVA: 0x692340
    static bool fgw(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x694120
    static ObscuredByte zk(Il2CppString* a, ObscuredByte b);  // RVA: 0x69FF00
    static ObscuredBool wmy(Il2CppString* a, ObscuredBool b);  // RVA: 0x69C9D0
    static void wmv(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x69C7E0
    static void dpk();  // RVA: 0x693250
    static void ohf(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x698560
    static void lt(Il2CppString* a, ObscuredSByte b);  // RVA: 0x697610
    static void ktx(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x696E20
    static void okm(Il2CppString* a, ObscuredBool b);  // RVA: 0x698690
    static void wjo(Action* a);  // RVA: 0x6995D0
    static void wmg(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69BF00
    static void wmf(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x69BE50
    static ObscuredLong ekr(Il2CppString* a, ObscuredLong b);  // RVA: 0x693DA0
    static ObscuredBool ngg(Il2CppString* a, ObscuredBool b);  // RVA: 0x697EF0
    static ObscuredDecimal omx(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x698880
    static ObscuredGuid wnh(Il2CppString* a, ObscuredGuid b);  // RVA: 0x69D120
    static Byte[][] wod(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x69EA90
    static bool bsi(Il2CppString* a);  // RVA: 0x692590
    static ObscuredDateTime myh(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x697C70
    static ObscuredVector3 oum(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x698DF0
    static ObscuredDateTime mtn(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x697AF0
    static ObscuredUInt hkn(Il2CppString* a, ObscuredUInt b);  // RVA: 0x695310
    static ObscuredUInt wno(Il2CppString* a, ObscuredUInt b);  // RVA: 0x69D650
    static ObscuredQuaternion wnk(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x69D390
    static Color32 wlw(Il2CppString* a);  // RVA: 0x69B930
    static bool wke(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x69A110
    static ObscuredByte cif(Il2CppString* a, ObscuredByte b);  // RVA: 0x692BB0
    static ObscuredDouble jpt(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6969B0
    static ObscuredVector3Int wnu(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x69DB10
    static void wmt(Il2CppString* a, ObscuredUShort b);  // RVA: 0x69C6B0
    static Il2CppString* wnw(Il2CppString* a);  // RVA: 0x69DEA0
    static Il2CppString* woe(Il2CppString* a, Il2CppString* b);  // RVA: 0x69EB60
    static Char[][] wnv(Il2CppString* a, Il2CppString* b);  // RVA: 0x69DC10
    static c wkl(Il2CppString* a, c b);  // RVA: 0x5640F0
    static void wkc();  // RVA: 0x67D480
    static Il2CppString* wob(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x69E0A0
    static void mfr(Il2CppString* a, ObscuredSByte b);  // RVA: 0x697960
    static uint64_t wlg(Il2CppString* a, uint64_t b);  // RVA: 0x69AE20
    static void wms(Il2CppString* a, ObscuredULong b);  // RVA: 0x69C620
    static void gyx(Il2CppString* a, ObscuredShort b);  // RVA: 0x694810
    static void wmc(Il2CppString* a, ObscuredByte b);  // RVA: 0x69BCB0
    static void cok(Il2CppString* a);  // RVA: 0x692CF0
    static void fvc(Il2CppString* a, ObscuredBool b);  // RVA: 0x6941E0
    static int32_t wks(Il2CppString* a, int32_t b);  // RVA: 0x69A7C0
    static Byte[][] exj(uint8_t a, int32_t b);  // RVA: 0x693F60
    static void ejt();  // RVA: 0x693D00
    static bool dx(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x693B90
    static void baa(Il2CppString* a, ObscuredBool b);  // RVA: 0x691E10
    static Il2CppString* xw(Il2CppString* a, Il2CppString* b);  // RVA: 0x69FD80
    static ObscuredDouble bvu(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6927D0
    static ObscuredVector3 ti(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6990B0
    static void ltq(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x697690
    static void bgb(Il2CppString* a, ObscuredInt b);  // RVA: 0x6920B0
    static bool no(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x698170
    static void iuh(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x695F70
    static bool gfo(Il2CppString* a, Il2CppString* b);  // RVA: 0x694490
    static void fwt(Il2CppString* a, ObscuredString* b);  // RVA: 0x694270
    static void wlm(Il2CppString* a, Vector2 b);  // RVA: 0x69B2B0
    static ObscuredByte wmz(Il2CppString* a, ObscuredByte b);  // RVA: 0x69CA90
    static void wlp(Il2CppString* a, Vector3 b);  // RVA: 0x69B470
    static ObscuredDouble cgx(Il2CppString* a, ObscuredDouble b);  // RVA: 0x692A50
    static void jgg(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6963E0
    static void gil();  // RVA: 0x6944F0
    static bool wof(Il2CppString* a, Il2CppString* b);  // RVA: 0x69ECE0
    static Byte[][] lbb(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x696F80
    static void wki();  // RVA: 0x69A3D0
    static void olt(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6987D0
    static uint32_t wky(Il2CppString* a, uint32_t b);  // RVA: 0x69AA60
    static ObscuredSByte wnl(Il2CppString* a, ObscuredSByte b);  // RVA: 0x69D490
    static void wjx(DeviceLockLevel a);  // RVA: 0x699DB0
    static void ima(Il2CppString* a, ObscuredShort b);  // RVA: 0x6958B0
    static void feh(Il2CppString* a, ObscuredULong b);  // RVA: 0x694090
    static void Save();  // RVA: 0x691C80
    static Il2CppString* gdj(Il2CppString* a, Il2CppString* b);  // RVA: 0x692D70
    static void wkh();  // RVA: 0x69A310
    static Byte[][] sx(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x698FC0
    static Byte[][] woc(Il2CppString* a, Il2CppString* b);  // RVA: 0x69E4C0
    static void wjt(Action* a);  // RVA: 0x699AD0
    static ObscuredVector2Int otk(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x698BB0
    static ObscuredDecimal dgb(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x693090
    static Char[][] hip(Il2CppString* a, Il2CppString* b);  // RVA: 0x695080
    static void wkr(Il2CppString* a, int32_t b);  // RVA: 0x69A750
    static void eht(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x693C50
    static Rect wma(Il2CppString* a, Rect b);  // RVA: 0x69BB80
    static ObscuredVector3 wnt(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x69DA10
    static void ole(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x698720
    static bool lmu(Il2CppString* a, Il2CppString* b);  // RVA: 0x697390
    static void wjs(Action* a);  // RVA: 0x6999D0
    static bool wka();  // RVA: 0x699F80
    static void wml(Il2CppString* a, ObscuredInt b);  // RVA: 0x69C250
    static bool wli(Il2CppString* a, bool b);  // RVA: 0x69AF00
    static ObscuredString* wnn(Il2CppString* a, ObscuredString* b);  // RVA: 0x69D5D0
    static Byte[][] ltt(Il2CppString* a);  // RVA: 0x697740
    static void wmh(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x69BFB0
    static ObscuredBigInteger cwz(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x692F90
    static ObscuredChar hcp(Il2CppString* a, ObscuredChar b);  // RVA: 0x6948A0
    static void odu(Il2CppString* a, ObscuredInt b);  // RVA: 0x6984E0
    static Decimal wlc(Il2CppString* a, Decimal defaultValue);  // RVA: 0x69AC30
    static Quaternion wlt(Il2CppString* a);  // RVA: 0x69B730
    static Vector2 wln(Il2CppString* a);  // RVA: 0x69B320
    static void mzm(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x697D30
    static ObscuredDecimal os(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x698AB0
    static b wkk(Il2CppString* a, b b);  // RVA: 0x5640F0
    static Byte[][] woa(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x69E000
    static Byte[][] bb(Il2CppString* a);  // RVA: 0x691F20
    static StorageDataType wnx(Il2CppString* a);  // RVA: 0x69DF60
    static Il2CppString* cpe(Il2CppString* a, Il2CppString* b);  // RVA: 0x692D70
    static void knd(Il2CppString* a, ObscuredShort b);  // RVA: 0x696D90
    static void f(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x693FE0
    static void chb(Il2CppString* a, ObscuredString* b);  // RVA: 0x692B30
    static void glz(Il2CppString* a, ObscuredString* b);  // RVA: 0x694610
    static void fyi(Il2CppString* a, ObscuredUShort b);  // RVA: 0x694400
    static void ieg(Il2CppString* a, ObscuredGuid b);  // RVA: 0x695550
    static ObscuredByte fxf(Il2CppString* a, ObscuredByte b);  // RVA: 0x6942F0
    static void wkz(Il2CppString* a, double b);  // RVA: 0x69AAD0
    static void wlj(Il2CppString* a, Byte[][] b);  // RVA: 0x69AF70
    static void wkd(Il2CppString* a, Il2CppString* b);  // RVA: 0x69A0B0
    static ObscuredDouble lnw(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6973F0
    static ObscuredDecimal wnd(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69CD80
    static void bqs(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6924E0
    static void wlf(Il2CppString* a, uint64_t b);  // RVA: 0x69ADB0
    static Il2CppString* wny(Il2CppString* a, d b);  // RVA: 0x5640F0
    static void ntv(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x698230
    static void wmd(Il2CppString* a, ObscuredChar b);  // RVA: 0x69BD30
    static void wjl(Il2CppString* a);  // RVA: 0x699280
    static void hfb(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x694EA0
    static void cqh(Il2CppString* a, ObscuredByte b);  // RVA: 0x692D90
    static void lmn(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6972F0
    static float wkw(Il2CppString* a, float b);  // RVA: 0x69A980
    static ObscuredBool cwx(Il2CppString* a, ObscuredBool b);  // RVA: 0x692ED0
    static void grd(Il2CppString* a);  // RVA: 0x6946F0
    static bool wkn(Il2CppString* a, Il2CppString* b);  // RVA: 0x69A4B0
    static Byte[][] wll(uint8_t a, int32_t b);  // RVA: 0x69B230
    static void loz(Il2CppString* a);  // RVA: 0x6974D0
    static dbe* wjm();  // RVA: 0x6992E0
    static void lfg(Il2CppString* a, ObscuredLong b);  // RVA: 0x697170
    static void wjp(Action* a);  // RVA: 0x6996D0
    static Color32 wlx(Il2CppString* a, Color32 b);  // RVA: 0x69B9D0
    static ObscuredDateTimeOffset drc(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6935C0
    static bool dsi(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x693AD0
    static Byte[][] dra(Il2CppString* a);  // RVA: 0x693430
    static void orp(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x698A00
    static ObscuredFloat wng(Il2CppString* a, ObscuredFloat b);  // RVA: 0x69D060
    static void fxs(Il2CppString* a, ObscuredChar b);  // RVA: 0x694370
    static ObscuredChar wna(Il2CppString* a, ObscuredChar b);  // RVA: 0x69CB10
    static void wmb(Il2CppString* a, ObscuredBool b);  // RVA: 0x69BC20
    static Il2CppString* buc(Il2CppString* a, Il2CppString* b);  // RVA: 0x692650
    static ObscuredDouble wnf(Il2CppString* a, ObscuredDouble b);  // RVA: 0x69CF80
    static void wmi(Il2CppString* a, ObscuredDouble b);  // RVA: 0x69C060
    static ObscuredLong lei(Il2CppString* a, ObscuredLong b);  // RVA: 0x6970B0
    static void wkv(Il2CppString* a, float b);  // RVA: 0x69A910
    static void wkm(Il2CppString* a, Il2CppString* b);  // RVA: 0x69A460
    static void .cctor();  // RVA: 0x691D20
    static Byte[][] llu(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x697200
    static ObscuredULong wnp(Il2CppString* a, ObscuredULong b);  // RVA: 0x69D700
    static ObscuredShort dmu(Il2CppString* a, ObscuredShort b);  // RVA: 0x693190
    static Il2CppString* drp(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x6936B0
    static Il2CppString* dqj(Il2CppString* a);  // RVA: 0x693370
    static e wnz(Il2CppString* a, Il2CppString* b, e c, Il2CppString* d);  // RVA: 0x5640F0
    static ObscuredFloat mvr(Il2CppString* a, ObscuredFloat b);  // RVA: 0x697BB0
    static bool wjy();  // RVA: 0x699E50
    static void mnj(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6979E0
    static void wkj(Il2CppString* a, a b);  // RVA: 0x5640F0
    static ObscuredShort wnm(Il2CppString* a, ObscuredShort b);  // RVA: 0x69D510
    static ObscuredVector3Int jg(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6962E0
    static Il2CppString* wku(Il2CppString* a, Il2CppString* b);  // RVA: 0x69A8A0
    static void wmp(Il2CppString* a, ObscuredShort b);  // RVA: 0x69C490
    static void blt(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6921F0
    static StorageDataType bpo(Il2CppString* a);  // RVA: 0x6922A0
    static void kwx(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x696ED0
    static ObscuredSByte bzm(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6929D0
    static Byte[][] jjj(Il2CppString* a, Il2CppString* b);  // RVA: 0x696480
    static Byte[][] wog(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x69FB00
    static Byte[][] hev(Il2CppString* a, Il2CppString* b);  // RVA: 0x694960
    static ObscuredShort cjy(Il2CppString* a, ObscuredShort b);  // RVA: 0x692C30
    static float ncj(Il2CppString* a, float b);  // RVA: 0x697E80
    static void mzn();  // RVA: 0x697DE0
    static bool wkf(Il2CppString* a);  // RVA: 0x69A1D0
    static bool blo(Il2CppString* a);  // RVA: 0x692130
    static void wme(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x69BDC0
    static ObscuredByte jei(Il2CppString* a, ObscuredByte b);  // RVA: 0x696260
    static void wlh(Il2CppString* a, bool b);  // RVA: 0x69AE90
    static void wji(Il2CppString* a);  // RVA: 0x6991B0
};

// Namespace: <global>
class dbt
{
public:

    // Methods
    int32_t woi();  // RVA: 0x422D20
    void woj();  // RVA: 0x430790
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
        static ObscuredBigInteger op_Implicit(BigInteger value);  // RVA: 0x6A1CC0
        static ObscuredBigInteger op_Implicit(uint8_t value);  // RVA: 0x6A2090
        static ObscuredBigInteger op_Implicit(int8_t value);  // RVA: 0x6A1EB0
        static ObscuredBigInteger op_Implicit(int16_t value);  // RVA: 0x6A1C30
        static ObscuredBigInteger op_Implicit(uint16_t value);  // RVA: 0x6A2120
        static ObscuredBigInteger op_Implicit(int32_t value);  // RVA: 0x6A1B10
        static ObscuredBigInteger op_Implicit(uint32_t value);  // RVA: 0x6A1BA0
        static ObscuredBigInteger op_Implicit(int64_t value);  // RVA: 0x6A1F70
        static ObscuredBigInteger op_Implicit(uint64_t value);  // RVA: 0x6A1E20
        static ObscuredBigInteger op_Implicit(float value);  // RVA: 0x6A1D00
        static ObscuredBigInteger op_Implicit(double value);  // RVA: 0x6A1D90
        static ObscuredBigInteger op_Implicit(Decimal value);  // RVA: 0x6A2000
        static BigInteger op_Implicit(ObscuredBigInteger value);  // RVA: 0x6A1F40
        static uint8_t wok(ObscuredBigInteger a);  // RVA: 0x6A2210
        static int8_t wol(ObscuredBigInteger a);  // RVA: 0x6A2280
        static int16_t wom(ObscuredBigInteger a);  // RVA: 0x6A22F0
        static uint16_t won(ObscuredBigInteger a);  // RVA: 0x6A2360
        static int32_t woo(ObscuredBigInteger a);  // RVA: 0x6A23D0
        static uint32_t wop(ObscuredBigInteger a);  // RVA: 0x6A2440
        static int64_t woq(ObscuredBigInteger a);  // RVA: 0x6A24B0
        static uint64_t wor(ObscuredBigInteger a);  // RVA: 0x6A2520
        static float wos(ObscuredBigInteger a);  // RVA: 0x6A2590
        static double wot(ObscuredBigInteger a);  // RVA: 0x6A2600
        static Decimal wou(ObscuredBigInteger a);  // RVA: 0x6A2670
        static ObscuredBigInteger wov(ObscuredBigInteger a, int32_t b);  // RVA: 0x6A2700
        static ObscuredBigInteger wow(ObscuredBigInteger a, int32_t b);  // RVA: 0x6A2800
        static ObscuredBigInteger wox(ObscuredBigInteger a);  // RVA: 0x6A2900
        static ObscuredBigInteger woy(ObscuredBigInteger a);  // RVA: 0x6A29F0
        static ObscuredBigInteger woz(ObscuredBigInteger a);  // RVA: 0x6A2AE0
        static ObscuredBigInteger wpa(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A2BD0
        static ObscuredBigInteger wpb(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A2D00
        static ObscuredBigInteger wpc(ObscuredBigInteger a);  // RVA: 0x6A2E40
        static ObscuredBigInteger wpd(ObscuredBigInteger a);  // RVA: 0x6A2FE0
        static bool wpe(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A3180
        static bool wpf(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A3240
        static bool wpg(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A3300
        static bool wph(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A33A0
        static bool wpi(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A3440
        static bool wpj(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A34E0
        static bool wpk(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6A3580
        static bool wpl(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6A3640
        static bool wpm(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6A3700
        static bool wpn(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6A37A0
        static bool wpo(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6A3840
        static bool wpp(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6A38E0
        static bool wpq(int64_t a, ObscuredBigInteger b);  // RVA: 0x6A3980
        static bool wpr(int64_t a, ObscuredBigInteger b);  // RVA: 0x6A3A20
        static bool wps(int64_t a, ObscuredBigInteger b);  // RVA: 0x6A3AC0
        static bool wpt(int64_t a, ObscuredBigInteger b);  // RVA: 0x6A3B60
        static bool wpu(int64_t a, ObscuredBigInteger b);  // RVA: 0x6A3C00
        static bool wpv(int64_t a, ObscuredBigInteger b);  // RVA: 0x6A3CA0
        static bool wpw(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6A3D40
        static bool wpx(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6A3DE0
        static bool wpy(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6A3E80
        static bool wpz(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6A3F20
        static bool wqa(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6A3FC0
        static bool wqb(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6A4060
        static ObscuredBigInteger wqc(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A4100
        static ObscuredBigInteger wqd(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A4240
        static ObscuredBigInteger wqe(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A4380
        static ObscuredBigInteger wqf(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A44C0
        static ObscuredBigInteger wqg(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A4600
        static ObscuredBigInteger wqh(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A4740
        static ObscuredBigInteger wqi(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A4880
        static ObscuredBigInteger wqj(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A49C0
        static ObscuredBigInteger wqk(ObscuredBigInteger a, int32_t b);  // RVA: 0x6A4B00
        int32_t GetHashCode();  // RVA: 0x6A1790
        Il2CppString* ToString();  // RVA: 0x6A1860
        Il2CppString* wql(Il2CppString* a);  // RVA: 0x6A4BF0
        Il2CppString* wqm(IFormatProvider* a);  // RVA: 0x6A4C70
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A18D0
        bool Equals(Il2CppObject* other);  // RVA: 0x6A14D0
        bool Equals(BigInteger other);  // RVA: 0x6A1440
        bool Equals(ObscuredBigInteger obj);  // RVA: 0x6A1660
        int32_t CompareTo(ObscuredBigInteger other);  // RVA: 0x6A1300
        int32_t CompareTo(BigInteger other);  // RVA: 0x6A13B0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A1280
        int32_t wqn(int64_t a);  // RVA: 0x6A4CF0
        int32_t wqo(uint64_t a);  // RVA: 0x6A4D70
        Byte[][] wqp();  // RVA: 0x6A4DF0
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(BigInteger value);  // RVA: 0x6A1980
        static BigInteger wqq(BigInteger a, uint32_t b);  // RVA: 0x6A4E60
        static BigInteger wqr(BigInteger a, uint32_t b);  // RVA: 0x6A4FC0
        static ObscuredBigInteger wqs(BigInteger a, uint32_t b);  // RVA: 0x6A5020
        static uint32_t wqt();  // RVA: 0x6A50F0
        BigInteger wqu(uint32_t a);  // RVA: 0x6A5100
        void wqv(BigInteger a, uint32_t b);  // RVA: 0x6A51E0
        BigInteger wqw();  // RVA: 0x6A1F40
        void woj();  // RVA: 0x6A21C0
        static bool wqx(BigInteger a, int32_t b);  // RVA: 0x6A52A0
        void wqy(BigInteger a);  // RVA: 0x6A52C0
        BigInteger wqz();  // RVA: 0x6A53A0
        bool wra();  // RVA: 0x6A55C0
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6A1800
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
    bool Equals(BigIntegerContents other);  // RVA: 0x6A0E70
    bool Equals(Il2CppObject* obj);  // RVA: 0x6A0EF0
    int32_t GetHashCode();  // RVA: 0x6A0FD0
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
        SerializableBigInteger wrb(uint32_t a);  // RVA: 0x6BFE10
        BigInteger wrc(uint32_t a);  // RVA: 0x6BFEB0
        SerializableBigInteger wrd(uint32_t a);  // RVA: 0x6BFE10
        static BigInteger op_Implicit(SerializableBigInteger value);  // RVA: 0x6BFDC0
        bool Equals(SerializableBigInteger other);  // RVA: 0x6BFC20
        bool Equals(Il2CppObject* obj);  // RVA: 0x6BFC90
        int32_t GetHashCode();  // RVA: 0x6BFD70
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
        static ObscuredBool op_Implicit(bool value);  // RVA: 0x6A5AE0
        static bool op_Implicit(ObscuredBool value);  // RVA: 0x6A5B60
        int32_t GetHashCode();  // RVA: 0x6A59A0
        Il2CppString* ToString();  // RVA: 0x6A5A30
        bool Equals(Il2CppObject* other);  // RVA: 0x6A5740
        bool Equals(ObscuredBool obj);  // RVA: 0x6A5930
        bool Equals(bool other);  // RVA: 0x6A58E0
        int32_t CompareTo(ObscuredBool other);  // RVA: 0x6A5640
        int32_t CompareTo(bool other);  // RVA: 0x6A56A0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A56F0
        int32_t woi();  // RVA: 0x6A21B0
        void wre(bool a);  // RVA: 0x6A5BD0
        bool wrf();  // RVA: 0x670280
        void .ctor(bool value);  // RVA: 0x6A5A70
        static int32_t wrg(bool a, uint8_t b);  // RVA: 0x6A5BE0
        static bool wrh(int32_t a, uint8_t b);  // RVA: 0x6A5C00
        static ObscuredBool wri(int32_t a, uint8_t b);  // RVA: 0x6A5C20
        static uint8_t wrj();  // RVA: 0x6A5C90
        int32_t wrk(uint8_t a);  // RVA: 0x6A5CA0
        void wrl(int32_t a, uint8_t b);  // RVA: 0x6A5D40
        bool wrm();  // RVA: 0x6A5DA0
        void woj();  // RVA: 0x6A5B70
        static bool wrn(bool a, int32_t b);  // RVA: 0x6A5DB0
        void wro(bool a);  // RVA: 0x6A5DC0
        bool wrp();  // RVA: 0x6A5E00
        bool wrq();  // RVA: 0x6A5F40
        static void wrr(uint8_t a);  // RVA: 0x63E350
        void wrs();  // RVA: 0x63E350
        static bool wrt(int32_t a, uint8_t b);  // RVA: 0x6A5F60
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6A59E0
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
        static ObscuredByte op_Implicit(uint8_t value);  // RVA: 0x6A6340
        static uint8_t op_Implicit(ObscuredByte value);  // RVA: 0x6A63A0
        static ObscuredByte wru(ObscuredByte a);  // RVA: 0x6A6400
        static ObscuredByte wrv(ObscuredByte a);  // RVA: 0x6A6460
        static ObscuredByte wrw(ObscuredByte a, int32_t b);  // RVA: 0x6A64C0
        int32_t GetHashCode();  // RVA: 0x6A61F0
        Il2CppString* ToString();  // RVA: 0x6A6270
        Il2CppString* wrx(Il2CppString* a);  // RVA: 0x6A6520
        Il2CppString* wry(IFormatProvider* a);  // RVA: 0x6A6550
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A62A0
        bool Equals(Il2CppObject* other);  // RVA: 0x6A6040
        bool Equals(ObscuredByte obj);  // RVA: 0x6A6190
        bool Equals(uint8_t other);  // RVA: 0x6A6010
        int32_t CompareTo(ObscuredByte other);  // RVA: 0x6A5F70
        int32_t CompareTo(uint8_t other);  // RVA: 0x6A5FE0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A5FB0
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(uint8_t value);  // RVA: 0x6A62E0
        static uint8_t wrz(uint8_t a, uint8_t b);  // RVA: 0x6A6580
        static void wsa(Byte[][] a, uint8_t b);  // RVA: 0x6A6590
        static uint8_t wsb(uint8_t a, uint8_t b);  // RVA: 0x6A65F0
        static void wsc(Byte[][] a, uint8_t b);  // RVA: 0x6A6600
        static ObscuredByte wsd(uint8_t a, uint8_t b);  // RVA: 0x6A6660
        static uint8_t wse();  // RVA: 0x6A5C90
        uint8_t wsf(uint8_t a);  // RVA: 0x6A66B0
        void wsg(uint8_t a, uint8_t b);  // RVA: 0x6A6730
        uint8_t wsh();  // RVA: 0x6A6780
        void woj();  // RVA: 0x6A63C0
        static bool wsi(uint8_t a, int32_t b);  // RVA: 0x6A6790
        void wsj(uint8_t a);  // RVA: 0x6A67A0
        uint8_t wsk();  // RVA: 0x6A67D0
        bool wsl();  // RVA: 0x6A68D0
        static void wsm(uint8_t a);  // RVA: 0x63E350
        void wsn();  // RVA: 0x63E350
        static uint8_t wso(uint8_t a, uint8_t b);  // RVA: 0x6A68F0
        static void wsp(Byte[][] a, uint8_t b);  // RVA: 0x6A6930
        static uint8_t wsq(uint8_t a, uint8_t b);  // RVA: 0x6A6970
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6A6220
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
        static ObscuredChar op_Implicit(wchar_t value);  // RVA: 0x6A6E10
        static wchar_t op_Implicit(ObscuredChar value);  // RVA: 0x6A6E00
        static ObscuredChar wsr(ObscuredChar a);  // RVA: 0x6A6EC0
        static ObscuredChar wss(ObscuredChar a);  // RVA: 0x6A6F50
        static ObscuredChar wst(ObscuredChar a, int32_t b);  // RVA: 0x6A6FE0
        int32_t GetHashCode();  // RVA: 0x6A6D20
        Il2CppString* ToString();  // RVA: 0x6A6D60
        Il2CppString* wsu(IFormatProvider* a);  // RVA: 0x6A7060
        bool Equals(Il2CppObject* other);  // RVA: 0x6A6AD0
        bool Equals(ObscuredChar other);  // RVA: 0x6A6C90
        bool Equals(wchar_t other);  // RVA: 0x6A6A80
        int32_t CompareTo(ObscuredChar other);  // RVA: 0x6A6980
        int32_t CompareTo(wchar_t other);  // RVA: 0x6A69E0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A6A30
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(wchar_t value);  // RVA: 0x6A6DA0
        static wchar_t wsv(wchar_t a, wchar_t b);  // RVA: 0x6A70B0
        static wchar_t wsw(wchar_t a, wchar_t b);  // RVA: 0x6A70C0
        static ObscuredChar wsx(wchar_t a, wchar_t b);  // RVA: 0x6A70D0
        static wchar_t wsy();  // RVA: 0x6A7130
        wchar_t wsz(wchar_t a);  // RVA: 0x6A7140
        void wta(wchar_t a, wchar_t b);  // RVA: 0x6A71F0
        wchar_t wtb();  // RVA: 0x6A7240
        void woj();  // RVA: 0x6A6E70
        static bool wtc(wchar_t a, int32_t b);  // RVA: 0x6A7250
        void wtd(wchar_t a);  // RVA: 0x6A7260
        wchar_t wte();  // RVA: 0x6A7290
        bool wtf();  // RVA: 0x6A73D0
        static void wtg(wchar_t a);  // RVA: 0x63E350
        void wth();  // RVA: 0x63E350
        static wchar_t wti(wchar_t a, wchar_t b);  // RVA: 0x6A7420
        static wchar_t wtj(wchar_t a, wchar_t b);  // RVA: 0x6A7420
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
        int64_t wtk();  // RVA: 0x6AB8E0
        static ObscuredDateTime op_Implicit(DateTime value);  // RVA: 0x6AB800
        static DateTime op_Implicit(ObscuredDateTime value);  // RVA: 0x6AB830
        int32_t GetHashCode();  // RVA: 0x6AB3D0
        Il2CppString* ToString();  // RVA: 0x6AB6B0
        Il2CppString* wtl(Il2CppString* a);  // RVA: 0x6AB990
        TypeCode GetTypeCode();  // RVA: 0x6AB480
        bool wtm(IFormatProvider* a);  // RVA: 0x6ABA50
        wchar_t wtn(IFormatProvider* a);  // RVA: 0x6ABA90
        int8_t wto(IFormatProvider* a);  // RVA: 0x6ABAD0
        uint8_t wtp(IFormatProvider* a);  // RVA: 0x6ABB10
        int16_t wtq(IFormatProvider* a);  // RVA: 0x6ABB50
        uint16_t wtr(IFormatProvider* a);  // RVA: 0x6ABB90
        int32_t wts(IFormatProvider* a);  // RVA: 0x6ABBD0
        uint32_t wtt(IFormatProvider* a);  // RVA: 0x6ABC10
        int64_t wtu(IFormatProvider* a);  // RVA: 0x6ABC50
        uint64_t wtv(IFormatProvider* a);  // RVA: 0x6ABC90
        float wtw(IFormatProvider* a);  // RVA: 0x6ABCD0
        double wtx(IFormatProvider* a);  // RVA: 0x6ABD10
        Decimal wty(IFormatProvider* a);  // RVA: 0x6ABD50
        DateTime wtz(IFormatProvider* a);  // RVA: 0x6ABD90
        Il2CppObject* wua(Type* a, IFormatProvider* b);  // RVA: 0x6ABE00
        Il2CppString* ToString(IFormatProvider* provider);  // RVA: 0x6AB520
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AB5E0
        bool Equals(Il2CppObject* other);  // RVA: 0x6AB1B0
        bool Equals(ObscuredDateTime other);  // RVA: 0x6AB150
        bool Equals(DateTime other);  // RVA: 0x6AB310
        int32_t CompareTo(ObscuredDateTime other);  // RVA: 0x6AAF90
        int32_t CompareTo(DateTime other);  // RVA: 0x6AAED0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AB090
        static DateTime wub(ObscuredDateTime a, TimeSpan b);  // RVA: 0x6AC000
        static DateTime wuc(ObscuredDateTime a, TimeSpan b);  // RVA: 0x6AC0C0
        static TimeSpan wud(ObscuredDateTime a, DateTime b);  // RVA: 0x6AC180
        static TimeSpan wue(DateTime a, ObscuredDateTime b);  // RVA: 0x6AC240
        static bool wuf(ObscuredDateTime a, DateTime b);  // RVA: 0x6AC300
        static bool wug(DateTime a, ObscuredDateTime b);  // RVA: 0x6AC3C0
        static bool wuh(ObscuredDateTime a, DateTime b);  // RVA: 0x6AC480
        static bool wui(DateTime a, ObscuredDateTime b);  // RVA: 0x6AC540
        static bool wuj(ObscuredDateTime a, DateTime b);  // RVA: 0x6AC600
        static bool wuk(DateTime a, ObscuredDateTime b);  // RVA: 0x6AC6C0
        static bool wul(ObscuredDateTime a, DateTime b);  // RVA: 0x6AC780
        static bool wum(DateTime a, ObscuredDateTime b);  // RVA: 0x6AC840
        static bool wun(ObscuredDateTime a, DateTime b);  // RVA: 0x6AC900
        static bool wuo(DateTime a, ObscuredDateTime b);  // RVA: 0x6AC9C0
        static bool wup(ObscuredDateTime a, DateTime b);  // RVA: 0x6ACA80
        static bool wuq(DateTime a, ObscuredDateTime b);  // RVA: 0x6ACB40
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(DateTime value);  // RVA: 0x6AB760
        static int64_t wur(DateTime a, int64_t b);  // RVA: 0x6ACC00
        static DateTime wus(int64_t a, int64_t b);  // RVA: 0x6ACC60
        static ObscuredDateTime wut(int64_t a, int64_t b);  // RVA: 0x6ACD50
        static int64_t wuu();  // RVA: 0x6AA930
        int64_t wuv(int64_t a);  // RVA: 0x6ACD80
        void wuw(int64_t a, int64_t b);  // RVA: 0x6ACE80
        DateTime wux();  // RVA: 0x6ACF30
        void woj();  // RVA: 0x6AB890
        static bool wuy(DateTime a, int32_t b);  // RVA: 0x6ACF90
        static bool wuz(int64_t a, int32_t b);  // RVA: 0x6AAC20
        void wva(int64_t a);  // RVA: 0x6AAC30
        static int64_t wvb(int64_t a, int64_t b);  // RVA: 0x6AAC60
        static int64_t wvc(int64_t a, int64_t b);  // RVA: 0x6AAC70
        DateTime wvd();  // RVA: 0x6AB830
        int64_t wve();  // RVA: 0x6ACFF0
        bool wvf();  // RVA: 0x6AAEB0
        static DateTime wvg(int64_t a, int64_t b);  // RVA: 0x6AD180
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6AB490
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
        int64_t wvh();  // RVA: 0x6A7FD0
        DateTime wvi();  // RVA: 0x6A80A0
        DateTime wvj();  // RVA: 0x6A8170
        int32_t wvk();  // RVA: 0x6A8240
        DayOfWeek wvl();  // RVA: 0x6A8310
        int32_t wvm();  // RVA: 0x6A83E0
        int32_t wvn();  // RVA: 0x6A84B0
        int32_t wvo();  // RVA: 0x6A8580
        int32_t wvp();  // RVA: 0x6A8650
        int32_t wvq();  // RVA: 0x6A8720
        TimeSpan wvr();  // RVA: 0x6A87F0
        int32_t wvs();  // RVA: 0x6A88C0
        TimeSpan wvt();  // RVA: 0x6A8990
        DateTime wvu();  // RVA: 0x6A8A60
        int32_t wvv();  // RVA: 0x6A8B30
        static ObscuredDateTimeOffset op_Implicit(DateTimeOffset value);  // RVA: 0x6A7E30
        static DateTimeOffset op_Implicit(ObscuredDateTimeOffset value);  // RVA: 0x6A7EE0
        int32_t GetHashCode();  // RVA: 0x6A7A50
        Il2CppString* ToString();  // RVA: 0x6A7CC0
        Il2CppString* wvw(Il2CppString* a);  // RVA: 0x6A8C00
        Il2CppString* wvx(IFormatProvider* a);  // RVA: 0x6A8CE0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A7BD0
        bool Equals(Il2CppObject* other);  // RVA: 0x6A7890
        bool Equals(ObscuredDateTimeOffset other);  // RVA: 0x6A79F0
        bool Equals(DateTimeOffset other);  // RVA: 0x6A77A0
        int32_t CompareTo(ObscuredDateTimeOffset other);  // RVA: 0x6A7520
        int32_t CompareTo(DateTimeOffset other);  // RVA: 0x6A7430
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A7680
        static DateTimeOffset wvy(ObscuredDateTimeOffset a, TimeSpan b);  // RVA: 0x6A8DC0
        static DateTimeOffset wvz(ObscuredDateTimeOffset a, TimeSpan b);  // RVA: 0x6A8EC0
        static TimeSpan wwa(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6A8FC0
        static TimeSpan wwb(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A90B0
        static TimeSpan wwc(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A91A0
        static bool wwd(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6A9320
        static bool wwe(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A9410
        static bool wwf(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A9500
        static bool wwg(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6A9680
        static bool wwh(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A9770
        static bool wwi(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A9860
        static bool wwj(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6A99E0
        static bool wwk(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A9AD0
        static bool wwl(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A9BC0
        static bool wwm(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6A9D40
        static bool wwn(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A9E30
        static bool wwo(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A9F20
        static bool wwp(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6AA0A0
        static bool wwq(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AA190
        static bool wwr(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AA280
        static bool wws(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6AA400
        static bool wwt(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AA4F0
        static bool wwu(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AA5E0
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(DateTimeOffset value);  // RVA: 0x6A7D90
        static int64_t wwv(DateTimeOffset a, int64_t b);  // RVA: 0x6AA760
        static DateTimeOffset www(int64_t a, int64_t b);  // RVA: 0x6AA7C0
        static ObscuredDateTimeOffset wwx(int64_t a, int64_t b);  // RVA: 0x6AA900
        static int64_t wwy();  // RVA: 0x6AA930
        int64_t wwz(int64_t a);  // RVA: 0x6AA940
        void wxa(int64_t a, int64_t b);  // RVA: 0x6AAA50
        DateTimeOffset wxb();  // RVA: 0x6AAB20
        void woj();  // RVA: 0x6A7F80
        static bool wxc(DateTimeOffset a, int32_t b);  // RVA: 0x6AABB0
        static bool wxd(int64_t a, int32_t b);  // RVA: 0x6AAC20
        void wxe(int64_t a);  // RVA: 0x6AAC30
        static int64_t wxf(int64_t a, int64_t b);  // RVA: 0x6AAC60
        static int64_t wxg(int64_t a, int64_t b);  // RVA: 0x6AAC70
        DateTimeOffset wxh();  // RVA: 0x6AAC80
        int64_t wxi();  // RVA: 0x6AAD10
        bool wxj();  // RVA: 0x6AAEB0
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6A7B20
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
        static ObscuredDecimal op_Implicit(Decimal value);  // RVA: 0x6AD9B0
        static Decimal op_Implicit(ObscuredDecimal value);  // RVA: 0x6AD9F0
        static ObscuredDecimal wxk(ObscuredFloat a);  // RVA: 0x6ADA90
        static ObscuredDecimal wxl(ObscuredDecimal a);  // RVA: 0x6ADBE0
        static ObscuredDecimal wxm(ObscuredDecimal a);  // RVA: 0x6ADD50
        static ObscuredDecimal wxn(ObscuredDecimal a, Decimal b);  // RVA: 0x6ADEC0
        int32_t GetHashCode();  // RVA: 0x6AD6F0
        Il2CppString* ToString();  // RVA: 0x6AD7E0
        Il2CppString* wxo(Il2CppString* a);  // RVA: 0x6ADFC0
        Il2CppString* wxp(IFormatProvider* a);  // RVA: 0x6AE040
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AD850
        bool Equals(Il2CppObject* other);  // RVA: 0x6AD3D0
        bool Equals(ObscuredDecimal other);  // RVA: 0x6AD560
        bool Equals(Decimal other);  // RVA: 0x6AD660
        int32_t CompareTo(ObscuredDecimal other);  // RVA: 0x6AD210
        int32_t CompareTo(Decimal other);  // RVA: 0x6AD340
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AD2C0
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(Decimal value);  // RVA: 0x6AD8E0
        static Decimal wxq(Decimal a, int64_t b);  // RVA: 0x6A1020
        static Decimal wxr(Decimal a, int64_t b);  // RVA: 0x6A1020
        static ObscuredDecimal wxs(Decimal a, int64_t b);  // RVA: 0x6AE0C0
        static int64_t wxt();  // RVA: 0x6AA930
        Decimal wxu(int64_t a);  // RVA: 0x6AE140
        void wxv(Decimal a, int64_t b);  // RVA: 0x6AE2C0
        Decimal wxw();  // RVA: 0x6AD9F0
        void woj();  // RVA: 0x6ADA20
        static bool wxx(Decimal a, int32_t b);  // RVA: 0x6AE330
        void wxy(Decimal a);  // RVA: 0x6AE350
        static ACTkByte16 wxz(Decimal a, int64_t b);  // RVA: 0x6A1020
        Decimal wya();  // RVA: 0x6AE3A0
        bool wyb();  // RVA: 0x6AE6A0
        static void wyc(int64_t a);  // RVA: 0x63E350
        void wyd();  // RVA: 0x63E350
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6AD760
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
        static Decimal wye(Decimal a, int64_t b);  // RVA: 0x6A1020
        static ACTkByte16 wyf(Decimal a, int64_t b);  // RVA: 0x6A1020
        static Decimal wyg(ACTkByte16 a, int64_t b);  // RVA: 0x6A1020
        static Decimal wyh(ACTkByte16 a);  // RVA: 0x670590
        static ACTkByte16 wyi(Decimal a);  // RVA: 0x670590
        static DecimalLongBytesUnion wyj(Decimal a);  // RVA: 0x670590
        static DecimalLongBytesUnion wyk(ACTkByte16 a);  // RVA: 0x670590
        DecimalLongBytesUnion wyl(int64_t a);  // RVA: 0x6A1050
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
    static int64_t wym(int64_t a, uint8_t b, uint8_t c);  // RVA: 0x6A1070
    static int64_t wyn(double a, int64_t b);  // RVA: 0x6A10B0
    static double wyo(int64_t a, int64_t b);  // RVA: 0x6A10E0
    static DoubleLongBytesUnion wyp(double a);  // RVA: 0x6A1110
    static DoubleLongBytesUnion wyq(int64_t a);  // RVA: 0x6A1120
    DoubleLongBytesUnion wyr(int64_t a);  // RVA: 0x6A1130
    DoubleLongBytesUnion wys(int64_t a);  // RVA: 0x6A1150
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
        static ObscuredDouble op_Implicit(double value);  // RVA: 0x6AEBD0
        static double op_Implicit(ObscuredDouble value);  // RVA: 0x6AEBC0
        static ObscuredDouble wyt(ObscuredFloat a);  // RVA: 0x6AEC60
        static ObscuredDouble wyu(ObscuredDouble a);  // RVA: 0x6AED20
        static ObscuredDouble wyv(ObscuredDouble a);  // RVA: 0x6AEDE0
        static ObscuredDouble wyw(ObscuredDouble a, double b);  // RVA: 0x6AEEA0
        int32_t GetHashCode();  // RVA: 0x6AEA00
        Il2CppString* ToString();  // RVA: 0x6AEB10
        Il2CppString* wyx(Il2CppString* a);  // RVA: 0x6AEF50
        Il2CppString* wyy(IFormatProvider* a);  // RVA: 0x6AEF90
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AEAC0
        bool Equals(Il2CppObject* other);  // RVA: 0x6AE7B0
        bool Equals(ObscuredDouble other);  // RVA: 0x6AE960
        bool Equals(double other);  // RVA: 0x6AE9C0
        int32_t CompareTo(ObscuredDouble other);  // RVA: 0x6AE770
        int32_t CompareTo(double other);  // RVA: 0x6AE6F0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AE730
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(double value);  // RVA: 0x6AEB40
        static int64_t wyz(double a, int64_t b);  // RVA: 0x6A10B0
        static double wza(int64_t a, int64_t b);  // RVA: 0x6A10E0
        static int64_t wzb(int64_t a, uint8_t b, uint8_t c);  // RVA: 0x6A1070
        static ObscuredDouble wzc(int64_t a, int64_t b);  // RVA: 0x6AEFD0
        static int64_t wzd();  // RVA: 0x6AA930
        int64_t wze(int64_t a);  // RVA: 0x6AF060
        void wzf(int64_t a, int64_t b);  // RVA: 0x6AF120
        double wzg();  // RVA: 0x6AF1A0
        void woj();  // RVA: 0x6AEC00
        static bool wzh(double a, int32_t b);  // RVA: 0x6AF1B0
        void wzi(double a);  // RVA: 0x6AF1C0
        static bool wzj(double a, double b);  // RVA: 0x6AF220
        double wzk();  // RVA: 0x6AF2E0
        bool wzl();  // RVA: 0x6AAEB0
        static void wzm(int64_t a);  // RVA: 0x63E350
        void wzn();  // RVA: 0x63E350
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6AEA50
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
    static int32_t wzo(int32_t a, uint8_t b, uint8_t c);  // RVA: 0x6A1180
    static int32_t wzp(float a, int32_t b);  // RVA: 0x6A11B0
    static float wzq(int32_t a, int32_t b);  // RVA: 0x6A11E0
    static FloatIntBytesUnion wzr(float a);  // RVA: 0x6A1210
    static FloatIntBytesUnion wzs(int32_t a);  // RVA: 0x6A1220
    FloatIntBytesUnion wzt(int32_t a);  // RVA: 0x6A1230
    FloatIntBytesUnion wzu(int32_t a);  // RVA: 0x6A1250
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
        static ObscuredFloat op_Implicit(float value);  // RVA: 0x6AF9A0
        static float op_Implicit(ObscuredFloat value);  // RVA: 0x6AF990
        static ObscuredFloat wzv(ObscuredFloat a);  // RVA: 0x6AFA30
        static ObscuredFloat wzw(ObscuredFloat a);  // RVA: 0x6AFAD0
        static ObscuredFloat wzx(ObscuredFloat a, int32_t b);  // RVA: 0x6AFB70
        int32_t GetHashCode();  // RVA: 0x6AF800
        Il2CppString* ToString();  // RVA: 0x6AF8E0
        Il2CppString* wzy(Il2CppString* a);  // RVA: 0x6AFC10
        Il2CppString* wzz(IFormatProvider* a);  // RVA: 0x6AFC50
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AF890
        bool Equals(Il2CppObject* other);  // RVA: 0x6AF5F0
        bool Equals(ObscuredFloat other);  // RVA: 0x6AF7A0
        bool Equals(float other);  // RVA: 0x6AF760
        int32_t CompareTo(ObscuredFloat other);  // RVA: 0x6AF5B0
        int32_t CompareTo(float other);  // RVA: 0x6AF570
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AF530
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(float value);  // RVA: 0x6AF910
        static int32_t xaa(float a, int32_t b);  // RVA: 0x6A11B0
        static float xab(int32_t a, int32_t b);  // RVA: 0x6A11E0
        static ObscuredFloat xac(int32_t a, int32_t b);  // RVA: 0x6AFC90
        static int32_t xad();  // RVA: 0x6A50F0
        int32_t xae(int32_t a);  // RVA: 0x6AFD10
        void xaf(int32_t a, int32_t b);  // RVA: 0x6AFDB0
        float xag();  // RVA: 0x6AFE20
        void woj();  // RVA: 0x6AF9D0
        static bool xah(float a, int32_t b);  // RVA: 0x6AFE30
        void xai(float a);  // RVA: 0x6AFE40
        static bool xaj(float a, float b);  // RVA: 0x6AFE90
        float xak();  // RVA: 0x6AFF50
        bool xal();  // RVA: 0x6B0150
        static void xam(int32_t a);  // RVA: 0x63E350
        void xan();  // RVA: 0x63E350
        static int32_t xao(int32_t a, uint8_t b, uint8_t c);  // RVA: 0x6A1180
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6AF830
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
        static ObscuredGuid op_Implicit(Guid value);  // RVA: 0x6B06F0
        static Guid op_Implicit(ObscuredGuid value);  // RVA: 0x6B06C0
        int32_t GetHashCode();  // RVA: 0x6B04B0
        Il2CppString* ToString();  // RVA: 0x6B05B0
        Il2CppString* xap(Il2CppString* a);  // RVA: 0x6B0800
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B0560
        bool Equals(Il2CppObject* other);  // RVA: 0x6B0360
        bool Equals(ObscuredGuid other);  // RVA: 0x6B02B0
        bool Equals(Guid other);  // RVA: 0x6B0260
        int32_t CompareTo(ObscuredGuid other);  // RVA: 0x6B0200
        int32_t CompareTo(Guid other);  // RVA: 0x6B0170
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B01C0
        static bool xaq(ObscuredGuid a, Guid b);  // RVA: 0x6B0840
        static bool xar(Guid a, ObscuredGuid b);  // RVA: 0x6B08A0
        static bool xas(ObscuredGuid a, ObscuredGuid b);  // RVA: 0x6B0900
        static bool xat(ObscuredGuid a, Guid b);  // RVA: 0x6B09A0
        static bool xau(Guid a, ObscuredGuid b);  // RVA: 0x6B0A00
        static bool xav(ObscuredGuid a, ObscuredGuid b);  // RVA: 0x6B0A60
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(Guid value);  // RVA: 0x6B05F0
        static void xaw(Guid a, int64_t b, int64_t c, int64_t d);  // RVA: 0x6B0B00
        static Guid xax(int64_t a, int64_t b, int64_t c);  // RVA: 0x6B0B80
        static ObscuredGuid xay(int64_t a, int64_t b, int64_t c);  // RVA: 0x6B0D70
        static int64_t xaz();  // RVA: 0x6AA930
        static int32_t xba(int64_t a, int64_t b);  // RVA: 0x6B0DA0
        void xbb(int64_t a, int64_t b, int64_t c);  // RVA: 0x6B0DE0
        void xbc(int64_t a, int64_t b, int64_t c);  // RVA: 0x6B0F40
        Guid xbd();  // RVA: 0x6B06C0
        void woj();  // RVA: 0x6B0730
        static bool xbe(Guid a, int32_t b);  // RVA: 0x6B1000
        static bool xbf(System.ReadOnlySpan<System.Byte> a, int32_t b);  // RVA: 0x6B10C0
        void xbg(Guid a);  // RVA: 0x6B11B0
        static int64_t xbh(int64_t a, int64_t b);  // RVA: 0x6AAC60
        static int64_t xbi(int64_t a, int64_t b);  // RVA: 0x6AAC70
        Guid xbj();  // RVA: 0x6B1250
        static bool xbk(Byte[][] a, Byte[][] b);  // RVA: 0x6B15E0
        bool xbl();  // RVA: 0x6B1650
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6B04F0
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
        static ObscuredInt op_Implicit(int32_t value);  // RVA: 0x6B1B50
        static int32_t op_Implicit(ObscuredInt value);  // RVA: 0x6B1C60
        static ObscuredFloat op_Implicit(ObscuredInt value);  // RVA: 0x6B1AB0
        static ObscuredDouble op_Implicit(ObscuredInt value);  // RVA: 0x6B1BB0
        static ObscuredUInt op_Explicit(ObscuredInt value);  // RVA: 0x6B1A40
        static ObscuredInt xbm(ObscuredInt a);  // RVA: 0x6B1CB0
        static ObscuredInt xbn(ObscuredInt a);  // RVA: 0x6B1D20
        static ObscuredInt xbo(ObscuredInt a, int32_t b);  // RVA: 0x6B1D90
        int32_t GetHashCode();  // RVA: 0x6B18F0
        Il2CppString* ToString();  // RVA: 0x6B19C0
        Il2CppString* xbp(Il2CppString* a);  // RVA: 0x6B1E00
        Il2CppString* xbq(IFormatProvider* a);  // RVA: 0x6B1E40
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B1970
        bool Equals(Il2CppObject* other);  // RVA: 0x6B1750
        bool Equals(ObscuredInt other);  // RVA: 0x6B1890
        bool Equals(int32_t other);  // RVA: 0x6B1720
        int32_t CompareTo(ObscuredInt other);  // RVA: 0x6B16E0
        int32_t CompareTo(int32_t other);  // RVA: 0x6B1670
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B16A0
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(int32_t value);  // RVA: 0x6B19F0
        static int32_t xbr(int32_t a, int32_t b);  // RVA: 0x6B1E80
        static int32_t xbs(int32_t a, int32_t b);  // RVA: 0x6B1E90
        static ObscuredInt xbt(int32_t a, int32_t b);  // RVA: 0x6B1EA0
        static int32_t xbu();  // RVA: 0x6A50F0
        int32_t xbv(int32_t a);  // RVA: 0x6B1EF0
        void xbw(int32_t a, int32_t b);  // RVA: 0x6B1F60
        int32_t xbx();  // RVA: 0x6B1FA0
        void woj();  // RVA: 0x6B1C70
        static bool xby(int32_t a, int32_t b);  // RVA: 0x6B1FB0
        void xbz(int32_t a);  // RVA: 0x6B1FC0
        int32_t xca();  // RVA: 0x6B1FF0
        bool xcb();  // RVA: 0x6B0150
        static void xcc(int32_t a);  // RVA: 0x63E350
        void xcd();  // RVA: 0x63E350
        static int32_t xce(int32_t a, int32_t b);  // RVA: 0x6B20E0
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6B1920
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
        static ObscuredLong op_Implicit(int64_t value);  // RVA: 0x6B2500
        static int64_t op_Implicit(ObscuredLong value);  // RVA: 0x6B2560
        static ObscuredLong xcf(ObscuredLong a);  // RVA: 0x6B25B0
        static ObscuredLong xcg(ObscuredLong a);  // RVA: 0x6B2640
        static ObscuredLong xch(ObscuredLong a, int32_t b);  // RVA: 0x6B26D0
        int32_t GetHashCode();  // RVA: 0x6B23A0
        Il2CppString* ToString();  // RVA: 0x6B2420
        Il2CppString* xci(Il2CppString* a);  // RVA: 0x6B2740
        Il2CppString* xcj(IFormatProvider* a);  // RVA: 0x6B2780
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B2450
        bool Equals(Il2CppObject* other);  // RVA: 0x6B2250
        bool Equals(ObscuredLong other);  // RVA: 0x6B21B0
        bool Equals(int64_t other);  // RVA: 0x6B2210
        int32_t CompareTo(ObscuredLong other);  // RVA: 0x6B2130
        int32_t CompareTo(int64_t other);  // RVA: 0x6B2170
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B20F0
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(int64_t value);  // RVA: 0x6B24A0
        static int64_t xck(int64_t a, int64_t b);  // RVA: 0x6AAC60
        static int64_t xcl(int64_t a, int64_t b);  // RVA: 0x6AAC70
        static ObscuredLong xcm(int64_t a, int64_t b);  // RVA: 0x6B27C0
        static int64_t xcn();  // RVA: 0x6AA930
        int64_t xco(int64_t a);  // RVA: 0x6B2810
        void xcp(int64_t a, int64_t b);  // RVA: 0x6B28A0
        int64_t xcq();  // RVA: 0x6B28F0
        void woj();  // RVA: 0x6B2570
        static bool xcr(int64_t a, int32_t b);  // RVA: 0x6AAC20
        void xcs(int64_t a);  // RVA: 0x6AAC30
        int64_t xct();  // RVA: 0x6B2900
        bool xcu();  // RVA: 0x6AAEB0
        static void xcv(int64_t a);  // RVA: 0x63E350
        void xcw();  // RVA: 0x63E350
        static int64_t xcx(int64_t a, int64_t b);  // RVA: 0x6B2A20
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6B23D0
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
    bool Equals(RawEncryptedQuaternion other);  // RVA: 0x6BF8E0
    bool Equals(Il2CppObject* obj);  // RVA: 0x6BF910
    int32_t GetHashCode();  // RVA: 0x6BF9C0
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
        static ObscuredQuaternion op_Implicit(Quaternion value);  // RVA: 0x6B3230
        static Quaternion op_Implicit(ObscuredQuaternion value);  // RVA: 0x6B3200
        static ObscuredQuaternion xcy(ObscuredQuaternion a, ObscuredQuaternion b);  // RVA: 0x6B3390
        static ObscuredQuaternion xcz(ObscuredQuaternion a, Quaternion b);  // RVA: 0x6B3590
        bool Equals(Il2CppObject* other);  // RVA: 0x6B2B70
        bool Equals(ObscuredQuaternion other);  // RVA: 0x6B2A30
        bool Equals(Quaternion other);  // RVA: 0x6B2D10
        int32_t GetHashCode();  // RVA: 0x6B2DC0
        Il2CppString* ToString();  // RVA: 0x6B2F90
        Il2CppString* xda(Il2CppString* a);  // RVA: 0x6B3770
        void xdb();  // RVA: 0x6B37C0
        Quaternion xdc();  // RVA: 0x6B38E0
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(Quaternion value);  // RVA: 0x6B2FD0
        void .ctor(float x, float y, float z, float w);  // RVA: 0x6B30D0
        float xdd();  // RVA: 0x6B3920
        void xde(float a);  // RVA: 0x6B3940
        float xdf();  // RVA: 0x6B39E0
        void xdg(float a);  // RVA: 0x6B3A00
        float xdh();  // RVA: 0x6B3AA0
        void xdi(float a);  // RVA: 0x6B3AC0
        float xdj();  // RVA: 0x6B3B60
        void xdk(float a);  // RVA: 0x6B3B80
        float get_Item(int32_t index);  // RVA: 0x6B3110
        void set_Item(int32_t index, float value);  // RVA: 0x6B3270
        static RawEncryptedQuaternion xdl(Quaternion a, int32_t b);  // RVA: 0x6B3C20
        static RawEncryptedQuaternion xdm(float a, float b, float c, float d, int32_t e);  // RVA: 0x6B3CE0
        static Quaternion xdn(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x6B3DA0
        static ObscuredQuaternion xdo(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x6B3E40
        static int32_t xdp();  // RVA: 0x6A50F0
        static bool xdq(Quaternion a, Quaternion b);  // RVA: 0x6B3E80
        RawEncryptedQuaternion xdr(int32_t a);  // RVA: 0x6B3FA0
        void xds(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x6B4050
        Quaternion xdt();  // RVA: 0x6B3200
        void woj();  // RVA: 0x6B3340
        static bool xdu(Quaternion a, int32_t b);  // RVA: 0x6B4170
        void xdv(Quaternion a);  // RVA: 0x6B4190
        Quaternion xdw();  // RVA: 0x6B4270
        bool xdx();  // RVA: 0x6B45D0
        static void xdy(int32_t a);  // RVA: 0x63E350
        void xdz();  // RVA: 0x63E350
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6B2E50
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
        static ObscuredSByte op_Implicit(int8_t value);  // RVA: 0x6B4980
        static int8_t op_Implicit(ObscuredSByte value);  // RVA: 0x6B49E0
        static ObscuredSByte xea(ObscuredSByte a);  // RVA: 0x6B4A40
        static ObscuredSByte xeb(ObscuredSByte a);  // RVA: 0x6B4AA0
        static ObscuredSByte xec(ObscuredSByte a, int32_t b);  // RVA: 0x6B4B00
        int32_t GetHashCode();  // RVA: 0x6B4880
        Il2CppString* ToString();  // RVA: 0x6B48B0
        Il2CppString* xed(Il2CppString* a);  // RVA: 0x6B4B60
        Il2CppString* xee(IFormatProvider* a);  // RVA: 0x6B4B90
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B48E0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B4730
        bool Equals(ObscuredSByte obj);  // RVA: 0x6B46D0
        bool Equals(int8_t other);  // RVA: 0x6B46A0
        int32_t CompareTo(ObscuredSByte other);  // RVA: 0x6B4660
        int32_t CompareTo(int8_t other);  // RVA: 0x6B4630
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B4600
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(int8_t value);  // RVA: 0x6B4920
        static int8_t xef(int8_t a, int8_t b);  // RVA: 0x6A6580
        static int8_t xeg(int8_t a, int8_t b);  // RVA: 0x6A65F0
        static ObscuredSByte xeh(int8_t a, int8_t b);  // RVA: 0x6B4BC0
        static int8_t xei();  // RVA: 0x6B4C10
        int8_t xej(int8_t a);  // RVA: 0x6B4C20
        void xek(int8_t a, int8_t b);  // RVA: 0x6B4CA0
        int8_t xel();  // RVA: 0x6B4CF0
        void woj();  // RVA: 0x6B4A00
        static bool xem(int8_t a, int32_t b);  // RVA: 0x6B4D00
        void xen(int8_t a);  // RVA: 0x6B4D10
        int8_t xeo();  // RVA: 0x6B4D40
        bool xep();  // RVA: 0x6A68D0
        static void xeq(int8_t a);  // RVA: 0x63E350
        void xer();  // RVA: 0x63E350
        static int8_t xes(int8_t a, int8_t b);  // RVA: 0x6A6970
        static int8_t xet(int8_t a, int8_t b);  // RVA: 0x6A6970
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6A6220
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
        static ObscuredShort op_Implicit(int16_t value);  // RVA: 0x6B5280
        static int16_t op_Implicit(ObscuredShort value);  // RVA: 0x6B5270
        static ObscuredShort xeu(ObscuredShort a);  // RVA: 0x6B5330
        static ObscuredShort xev(ObscuredShort a);  // RVA: 0x6B53C0
        static ObscuredShort xew(ObscuredShort a, int32_t b);  // RVA: 0x6B5450
        int32_t GetHashCode();  // RVA: 0x6B5110
        Il2CppString* ToString();  // RVA: 0x6B5190
        Il2CppString* xex(Il2CppString* a);  // RVA: 0x6B54D0
        Il2CppString* xey(IFormatProvider* a);  // RVA: 0x6B5510
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B51C0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B4FA0
        bool Equals(ObscuredShort obj);  // RVA: 0x6B4F00
        bool Equals(int16_t other);  // RVA: 0x6B4F60
        int32_t CompareTo(ObscuredShort other);  // RVA: 0x6B4EC0
        int32_t CompareTo(int16_t other);  // RVA: 0x6B4E80
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B4E40
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(int16_t value);  // RVA: 0x6B5210
        static int16_t xez(int16_t a, int16_t b);  // RVA: 0x6A70B0
        static int16_t xfa(int16_t a, int16_t b);  // RVA: 0x6A70C0
        static ObscuredShort xfb(int16_t a, int16_t b);  // RVA: 0x6B5550
        static int16_t xfc();  // RVA: 0x6B55B0
        int16_t xfd(int16_t a);  // RVA: 0x6B55C0
        void xfe(int16_t a, int16_t b);  // RVA: 0x6B5650
        int16_t xff();  // RVA: 0x6B56A0
        void woj();  // RVA: 0x6B52E0
        static bool xfg(int16_t a, int32_t b);  // RVA: 0x6B56B0
        void xfh(int16_t a);  // RVA: 0x6B56C0
        int16_t xfi();  // RVA: 0x6B56F0
        bool xfj();  // RVA: 0x6B5810
        static void xfk(int16_t a);  // RVA: 0x63E350
        void xfl();  // RVA: 0x63E350
        static int16_t xfm(int16_t a, int16_t b);  // RVA: 0x6A7420
        static int16_t xfn(int16_t a, int16_t b);  // RVA: 0x6A7420
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6B5140
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
        Il2CppString* bmra; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Il2CppString* currentCryptoKey; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Byte[][] hiddenValue; // 0x0038
    
        // Methods
        int32_t xfo();  // RVA: 0x6B5FC0
        wchar_t get_Item(int32_t index);  // RVA: 0x6B5E40
        static ObscuredString* op_Implicit(Il2CppString* value);  // RVA: 0x6B5EC0
        static Il2CppString* op_Implicit(ObscuredString* value);  // RVA: 0x6B5F30
        static bool xfp(ObscuredString* a, ObscuredString* b);  // RVA: 0x6B5FE0
        static bool xfq(ObscuredString* a, ObscuredString* b);  // RVA: 0x6B6120
        Il2CppString* xfr(int32_t a);  // RVA: 0x6B6140
        Il2CppString* xfs(int32_t a, int32_t b);  // RVA: 0x6B61A0
        bool xft(Il2CppString* a, StringComparison b);  // RVA: 0x6B61F0
        bool xfu(Il2CppString* a, StringComparison b);  // RVA: 0x6B6240
        int32_t GetHashCode();  // RVA: 0x6B5B50
        Il2CppString* ToString();  // RVA: 0x6B5CD0
        static bool xfv(ObscuredString* a);  // RVA: 0x6B6290
        static bool xfw(ObscuredString* a);  // RVA: 0x6B62E0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B5A70
        bool Equals(ObscuredString* obj);  // RVA: 0x6B5960
        bool xfx(ObscuredString* a, StringComparison b);  // RVA: 0x6B63E0
        bool Equals(Il2CppString* other);  // RVA: 0x6B5920
        int32_t CompareTo(ObscuredString* other);  // RVA: 0x6B5830
        int32_t CompareTo(Il2CppString* other);  // RVA: 0x6B58E0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B58A0
        int32_t woi();  // RVA: 0x66F7C0
        void .ctor();  // RVA: 0x6B5CF0
        void .ctor(Il2CppString* value);  // RVA: 0x6B5D30
        static Char[][] xfy();  // RVA: 0x6B6460
        static Char[][] xfz(Il2CppString* a, Il2CppString* b);  // RVA: 0x6B64C0
        static Char[][] xga(Il2CppString* a, Char[][] b);  // RVA: 0x6B6520
        static Char[][] xgb(Char[][] a, Char[][] b);  // RVA: 0x6B6550
        static Il2CppString* xgc(Char[][] a, Il2CppString* b);  // RVA: 0x6B6560
        static Il2CppString* xgd(Char[][] a, Char[][] b);  // RVA: 0x6B65B0
        static ObscuredString* xge(Char[][] a, Char[][] b);  // RVA: 0x6B65E0
        static Char[][] xgf();  // RVA: 0x6B6670
        static void xgg(Char[][] a);  // RVA: 0x6B66D0
        Char[][] xgh(Char[][] a);  // RVA: 0x6B66E0
        void xgi(Char[][] a, Char[][] b);  // RVA: 0x6B67C0
        Il2CppString* xgj();  // RVA: 0x6B5CD0
        Char[][] xgk();  // RVA: 0x6B6850
        void woj();  // RVA: 0x6B5F60
        static bool xgl(Char[][] a, int32_t b);  // RVA: 0x6B6860
        void xgm(Char[][] a);  // RVA: 0x6B6870
        static Char[][] xgn(Char[][] a, Char[][] b);  // RVA: 0x6B68C0
        static wchar_t xgo(Char[][] a, Char[][] b, int32_t c);  // RVA: 0x6B6A30
        static bool xgp(ObscuredString* a);  // RVA: 0x6B62E0
        Il2CppString* xgq();  // RVA: 0x6B5CD0
        Char[][] xgr();  // RVA: 0x6B6A80
        bool xgs();  // RVA: 0x6B6DA0
        bool xgt(Char[][] a, Il2CppString* b);  // RVA: 0x6B6DD0
        static void xgu(Il2CppString* a);  // RVA: 0x63E350
        void xgv();  // RVA: 0x63E350
        static Il2CppString* xgw(Il2CppString* a);  // RVA: 0x6B6F30
        static Il2CppString* xgx(Il2CppString* a, Il2CppString* b);  // RVA: 0x6B6F70
        Il2CppString* xgy();  // RVA: 0x6B6F80
        void xgz(Il2CppString* a);  // RVA: 0x63E350
        static ObscuredString* xha(Il2CppString* a, Il2CppString* b);  // RVA: 0x6B6FC0
        void xhb(Il2CppString* a, Il2CppString* b);  // RVA: 0x6B7120
        static Char[][] xhc(Char[][] a);  // RVA: 0x6B7230
        static Il2CppString* xhd(Il2CppString* a, Il2CppString* b);  // RVA: 0x6B7250
        static Il2CppString* xhe(Byte[][] a);  // RVA: 0x6B7420
        static Byte[][] xhf(Il2CppString* a);  // RVA: 0x6B74B0
        static bool xhg(Char[][] a, Char[][] b);  // RVA: 0x6B7540
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6B5B90
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
        static ObscuredUInt op_Implicit(uint32_t value);  // RVA: 0x6B1B50
        static uint32_t op_Implicit(ObscuredUInt value);  // RVA: 0x6B78F0
        static ObscuredInt xhh(ObscuredUInt a);  // RVA: 0x6B7940
        static ObscuredUInt xhi(ObscuredUInt a);  // RVA: 0x6B79B0
        static ObscuredUInt xhj(ObscuredUInt a);  // RVA: 0x6B7A20
        static ObscuredUInt xhk(ObscuredUInt a, int32_t b);  // RVA: 0x6B7A90
        int32_t GetHashCode();  // RVA: 0x6B7840
        Il2CppString* ToString();  // RVA: 0x6B7870
        Il2CppString* xhl(Il2CppString* a);  // RVA: 0x6B7B00
        Il2CppString* xhm(IFormatProvider* a);  // RVA: 0x6B7B40
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B78A0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B76A0
        bool Equals(ObscuredUInt obj);  // RVA: 0x6B77E0
        bool Equals(uint32_t other);  // RVA: 0x6B7670
        int32_t CompareTo(ObscuredUInt other);  // RVA: 0x6B7600
        int32_t CompareTo(uint32_t other);  // RVA: 0x6B7640
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B75C0
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(uint32_t value);  // RVA: 0x6B19F0
        static uint32_t xhn(uint32_t a, uint32_t b);  // RVA: 0x6B1E80
        static uint32_t xho(uint32_t a, uint32_t b);  // RVA: 0x6B1E90
        static ObscuredUInt xhp(uint32_t a, uint32_t b);  // RVA: 0x6B1EA0
        static uint32_t xhq();  // RVA: 0x6A50F0
        uint32_t xhr(uint32_t a);  // RVA: 0x6B1EF0
        void xhs(uint32_t a, uint32_t b);  // RVA: 0x6B1F60
        uint32_t xht();  // RVA: 0x6B7B80
        void woj();  // RVA: 0x6B7900
        static bool xhu(uint32_t a, int32_t b);  // RVA: 0x6B1FB0
        void xhv(uint32_t a);  // RVA: 0x6B1FC0
        uint32_t xhw();  // RVA: 0x6B7B90
        bool xhx();  // RVA: 0x6B0150
        static void xhy(uint32_t a);  // RVA: 0x63E350
        void xhz();  // RVA: 0x63E350
        static uint32_t xia(uint32_t a, uint32_t b);  // RVA: 0x6B20E0
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6B1920
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
        static ObscuredULong op_Implicit(uint64_t value);  // RVA: 0x6B8050
        static uint64_t op_Implicit(ObscuredULong value);  // RVA: 0x6B8040
        static ObscuredULong xib(ObscuredULong a);  // RVA: 0x6B80F0
        static ObscuredULong xic(ObscuredULong a);  // RVA: 0x6B8180
        static ObscuredULong xid(ObscuredULong a, bool b);  // RVA: 0x6B8210
        int32_t GetHashCode();  // RVA: 0x6B7F30
        Il2CppString* ToString();  // RVA: 0x6B7FB0
        Il2CppString* xie(Il2CppString* a);  // RVA: 0x6B8290
        Il2CppString* xif(IFormatProvider* a);  // RVA: 0x6B82D0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B7F60
        bool Equals(Il2CppObject* other);  // RVA: 0x6B7D40
        bool Equals(ObscuredULong obj);  // RVA: 0x6B7ED0
        bool Equals(uint64_t other);  // RVA: 0x6B7E90
        int32_t CompareTo(ObscuredULong other);  // RVA: 0x6B7D00
        int32_t CompareTo(uint64_t other);  // RVA: 0x6B7C80
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B7CC0
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(uint64_t value);  // RVA: 0x6B7FE0
        static uint64_t xig(uint64_t a, uint64_t b);  // RVA: 0x6AAC60
        static uint64_t xih(uint64_t a, uint64_t b);  // RVA: 0x6AAC70
        static ObscuredULong xii(uint64_t a, uint64_t b);  // RVA: 0x6B8310
        static uint64_t xij();  // RVA: 0x6AA930
        uint64_t xik(uint64_t a);  // RVA: 0x6B8360
        void xil(uint64_t a, uint64_t b);  // RVA: 0x6B83F0
        uint64_t xim();  // RVA: 0x6B8440
        void woj();  // RVA: 0x6B80B0
        static bool xin(uint64_t a, int32_t b);  // RVA: 0x6B8450
        void xio(uint64_t a);  // RVA: 0x6B8460
        uint64_t xip();  // RVA: 0x6B8490
        bool xiq();  // RVA: 0x6AAEB0
        static void xir(uint64_t a);  // RVA: 0x63E350
        void xis();  // RVA: 0x63E350
        static uint64_t xit(uint64_t a, uint64_t b);  // RVA: 0x6B2A20
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6B23D0
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
        static ObscuredUShort op_Implicit(uint16_t value);  // RVA: 0x6B89A0
        static uint16_t op_Implicit(ObscuredUShort value);  // RVA: 0x6B8990
        static ObscuredUShort xiu(ObscuredUShort a);  // RVA: 0x6B8A50
        static ObscuredUShort xiv(ObscuredUShort a);  // RVA: 0x6B8AE0
        static ObscuredUShort xiw(ObscuredUShort a, int32_t b);  // RVA: 0x6B8B70
        int32_t GetHashCode();  // RVA: 0x6B8880
        Il2CppString* ToString();  // RVA: 0x6B88B0
        Il2CppString* xix(Il2CppString* a);  // RVA: 0x6B8BF0
        Il2CppString* xiy(IFormatProvider* a);  // RVA: 0x6B8C30
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B88E0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B8710
        bool Equals(ObscuredUShort obj);  // RVA: 0x6B8670
        bool Equals(uint16_t other);  // RVA: 0x6B86D0
        int32_t CompareTo(ObscuredUShort other);  // RVA: 0x6B8630
        int32_t CompareTo(uint16_t other);  // RVA: 0x6B85B0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B85F0
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(uint16_t value);  // RVA: 0x6B8930
        static uint16_t xiz(uint16_t a, uint16_t b);  // RVA: 0x6A70B0
        static uint16_t xja(uint16_t a, uint16_t b);  // RVA: 0x6A70C0
        static ObscuredUShort xjb(uint16_t a, uint16_t b);  // RVA: 0x6A70D0
        static uint16_t xjc();  // RVA: 0x6B8C70
        uint16_t xjd(uint16_t a);  // RVA: 0x6B8C80
        void xje(uint16_t a, uint16_t b);  // RVA: 0x6A71F0
        uint16_t xjf();  // RVA: 0x6B8D00
        void woj();  // RVA: 0x6B8A00
        static bool xjg(uint16_t a, int32_t b);  // RVA: 0x6A7250
        void xjh(uint16_t a);  // RVA: 0x6A7260
        uint16_t xji();  // RVA: 0x6B8D10
        bool xjj();  // RVA: 0x6B5810
        static void xjk(uint16_t a);  // RVA: 0x63E350
        void xjl();  // RVA: 0x63E350
        static uint16_t xjm(uint16_t a, uint16_t b);  // RVA: 0x6A7420
        static uint16_t xjn(uint16_t a, uint16_t b);  // RVA: 0x6A7420
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6B5140
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
    bool Equals(RawEncryptedVector2 other);  // RVA: 0x6BFA70
    bool Equals(Il2CppObject* obj);  // RVA: 0x6BFAA0
    int32_t GetHashCode();  // RVA: 0x6BFA90
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
        static ObscuredVector2 op_Implicit(Vector2 value);  // RVA: 0x6BA8E0
        static Vector2 op_Implicit(ObscuredVector2 value);  // RVA: 0x6BA8D0
        static Vector3 op_Implicit(ObscuredVector2 value);  // RVA: 0x6BA910
        static ObscuredVector2 xjo(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6BAA80
        static ObscuredVector2 xjp(Vector2 a, ObscuredVector2 b);  // RVA: 0x6BAB10
        static ObscuredVector2 xjq(ObscuredVector2 a, Vector2 b);  // RVA: 0x6BAB90
        static ObscuredVector2 xjr(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6BAC10
        static ObscuredVector2 xjs(Vector2 a, ObscuredVector2 b);  // RVA: 0x6BACA0
        static ObscuredVector2 xjt(ObscuredVector2 a, Vector2 b);  // RVA: 0x6BAD20
        static ObscuredVector2 xju(ObscuredVector2 a);  // RVA: 0x6BADA0
        static ObscuredVector2 xjv(ObscuredVector2 a, float b);  // RVA: 0x6BAE20
        static ObscuredVector2 xjw(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6BAEA0
        static ObscuredVector2 xjx(float a, ObscuredVector2 b);  // RVA: 0x6BAF30
        static ObscuredVector2 xjy(ObscuredVector2 a, float b);  // RVA: 0x6BAFB0
        static bool xjz(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6BB030
        static bool xka(Vector2 a, ObscuredVector2 b);  // RVA: 0x6BB090
        static bool xkb(ObscuredVector2 a, Vector2 b);  // RVA: 0x6BB0F0
        static bool xkc(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6BB140
        static bool xkd(Vector2 a, ObscuredVector2 b);  // RVA: 0x6BB1A0
        static bool xke(ObscuredVector2 a, Vector2 b);  // RVA: 0x6BB200
        bool Equals(Il2CppObject* other);  // RVA: 0x6BA480
        bool Equals(ObscuredVector2 other);  // RVA: 0x6BA3A0
        bool Equals(Vector2 other);  // RVA: 0x6BA430
        int32_t GetHashCode();  // RVA: 0x6BA660
        Il2CppString* ToString();  // RVA: 0x6BA710
        Il2CppString* xkf(Il2CppString* a);  // RVA: 0x6BB250
        void xkg();  // RVA: 0x6BB290
        Vector2 xkh();  // RVA: 0x6BB360
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(Vector2 value);  // RVA: 0x6BA750
        void .ctor(float x, float y);  // RVA: 0x6BA740
        float xki();  // RVA: 0x6BB3A0
        void xkj(float a);  // RVA: 0x6BB3C0
        float xkk();  // RVA: 0x6BB430
        void xkl(float a);  // RVA: 0x6BB450
        float get_Item(int32_t index);  // RVA: 0x6BA820
        void set_Item(int32_t index, float value);  // RVA: 0x6BA950
        static RawEncryptedVector2 xkm(Vector2 a, int32_t b);  // RVA: 0x6BB4C0
        static RawEncryptedVector2 xkn(float a, float b, int32_t c);  // RVA: 0x6BB520
        static Vector2 xko(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6BB580
        static ObscuredVector2 xkp(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6BB5E0
        static int32_t xkq();  // RVA: 0x6A50F0
        static bool xkr(Vector2 a, Vector2 b);  // RVA: 0x6BB610
        static bool xks(float a, float b);  // RVA: 0x6BB660
        RawEncryptedVector2 xkt(int32_t a);  // RVA: 0x6BB720
        void xku(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6BB7A0
        Vector2 xkv();  // RVA: 0x6BB850
        void woj();  // RVA: 0x6BAA40
        static bool xkw(Vector2 a, int32_t b);  // RVA: 0x6BB860
        void xkx(Vector2 a);  // RVA: 0x6BB870
        Vector2 xky();  // RVA: 0x6BB900
        bool xkz();  // RVA: 0x6BA360
        static void xla(int32_t a);  // RVA: 0x63E350
        void xlb();  // RVA: 0x63E350
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6BA6A0
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
    bool Equals(RawEncryptedVector2Int other);  // RVA: 0x6BFA70
    bool Equals(Il2CppObject* obj);  // RVA: 0x6BF9E0
    int32_t GetHashCode();  // RVA: 0x6BFA90
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
        static ObscuredVector2Int op_Implicit(Vector2Int value);  // RVA: 0x6B94E0
        static Vector2Int op_Implicit(ObscuredVector2Int value);  // RVA: 0x6B9560
        static Vector3Int op_Explicit(ObscuredVector2Int v);  // RVA: 0x6B9460
        static Vector2 op_Implicit(ObscuredVector2Int value);  // RVA: 0x6B94B0
        static ObscuredVector2Int xlc(ObscuredVector2Int a);  // RVA: 0x6B9670
        static ObscuredVector2Int xld(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B96E0
        static ObscuredVector2Int xle(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6B9770
        static ObscuredVector2Int xlf(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B97F0
        static ObscuredVector2Int xlg(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6B9880
        static ObscuredVector2Int xlh(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6B9900
        static ObscuredVector2Int xli(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6B9980
        static ObscuredVector2Int xlj(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B9A00
        static ObscuredVector2Int xlk(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6B9A90
        static ObscuredVector2Int xll(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6B9B10
        static ObscuredVector2Int xlm(int32_t a, ObscuredVector2Int b);  // RVA: 0x6B9B90
        static ObscuredVector2Int xln(ObscuredVector2Int a, int32_t b);  // RVA: 0x6B9C10
        static ObscuredVector2Int xlo(ObscuredVector2Int a, int32_t b);  // RVA: 0x6B9C90
        static bool xlp(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B9D10
        static bool xlq(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B9D90
        bool Equals(Il2CppObject* other);  // RVA: 0x6B8E60
        bool Equals(ObscuredVector2Int other);  // RVA: 0x6B8FE0
        bool Equals(Vector2Int other);  // RVA: 0x6B8E20
        int32_t GetHashCode();  // RVA: 0x6B9070
        Il2CppString* ToString();  // RVA: 0x6B9110
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(Vector2Int value);  // RVA: 0x6B9350
        void .ctor(int32_t x, int32_t y);  // RVA: 0x6B92C0
        int32_t xlr();  // RVA: 0x6B9E20
        void xls(int32_t a);  // RVA: 0x6B9E30
        int32_t xlt();  // RVA: 0x6B9ED0
        void xlu(int32_t a);  // RVA: 0x6B9EF0
        int32_t get_Item(int32_t index);  // RVA: 0x6B93C0
        void set_Item(int32_t index, int32_t value);  // RVA: 0x6B9570
        static RawEncryptedVector2Int xlv(Vector2Int a, int32_t b);  // RVA: 0x6B9F90
        static RawEncryptedVector2Int xlw(int32_t a, int32_t b, int32_t c);  // RVA: 0x6B9FB0
        static Vector2Int xlx(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6B9FD0
        static ObscuredVector2Int xly(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6B9FF0
        static int32_t xlz();  // RVA: 0x6A50F0
        RawEncryptedVector2Int xma(int32_t a);  // RVA: 0x6BA060
        void xmb(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6BA100
        Vector2Int xmc();  // RVA: 0x6BA160
        void woj();  // RVA: 0x6B9610
        static bool xmd(Vector2Int a, int32_t b);  // RVA: 0x6BA170
        void xme(Vector2Int a);  // RVA: 0x6BA180
        Vector2Int xmf();  // RVA: 0x6BA1D0
        bool xmg();  // RVA: 0x6BA360
        static void xmh(int32_t a);  // RVA: 0x63E350
        void xmi();  // RVA: 0x63E350
        static Vector2Int xmj(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6BA380
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6B90A0
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
    bool Equals(RawEncryptedVector3 other);  // RVA: 0x6BFB30
    bool Equals(Il2CppObject* obj);  // RVA: 0x6BFB50
    int32_t GetHashCode();  // RVA: 0x6BFC00
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
        static ObscuredVector3 op_Implicit(Vector3 value);  // RVA: 0x6BE090
        static Vector3 op_Implicit(ObscuredVector3 value);  // RVA: 0x6BE0D0
        static ObscuredVector3 xmk(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6BE210
        static ObscuredVector3 xml(Vector3 a, ObscuredVector3 b);  // RVA: 0x6BE2D0
        static ObscuredVector3 xmm(ObscuredVector3 a, Vector3 b);  // RVA: 0x6BE370
        static ObscuredVector3 xmn(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6BE420
        static ObscuredVector3 xmo(Vector3 a, ObscuredVector3 b);  // RVA: 0x6BE4E0
        static ObscuredVector3 xmp(ObscuredVector3 a, Vector3 b);  // RVA: 0x6BE580
        static ObscuredVector3 xmq(ObscuredVector3 a);  // RVA: 0x6BE630
        static ObscuredVector3 xmr(ObscuredVector3 a, float b);  // RVA: 0x6BE6B0
        static ObscuredVector3 xms(float a, ObscuredVector3 b);  // RVA: 0x6BE740
        static ObscuredVector3 xmt(ObscuredVector3 a, float b);  // RVA: 0x6BE7D0
        static bool xmu(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6BE860
        static bool xmv(Vector3 a, ObscuredVector3 b);  // RVA: 0x6BE900
        static bool xmw(ObscuredVector3 a, Vector3 b);  // RVA: 0x6BE970
        static bool xmx(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6BE9F0
        static bool xmy(Vector3 a, ObscuredVector3 b);  // RVA: 0x6BEA90
        static bool xmz(ObscuredVector3 a, Vector3 b);  // RVA: 0x6BEB00
        bool Equals(Il2CppObject* other);  // RVA: 0x6BDB20
        bool Equals(ObscuredVector3 other);  // RVA: 0x6BDA30
        bool Equals(Vector3 other);  // RVA: 0x6BDC80
        int32_t GetHashCode();  // RVA: 0x6BDCE0
        Il2CppString* ToString();  // RVA: 0x6BDE40
        Il2CppString* xna(Il2CppString* a);  // RVA: 0x6BEB70
        void xnb();  // RVA: 0x6BEBC0
        Vector3 xnc();  // RVA: 0x6BED40
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(Vector3 value);  // RVA: 0x6BDEC0
        void .ctor(float x, float y, float z);  // RVA: 0x6BDE90
        float xnd();  // RVA: 0x6BEE70
        void xne(float a);  // RVA: 0x6BEE90
        float xnf();  // RVA: 0x6BEF10
        void xng(float a);  // RVA: 0x6BEF30
        float xnh();  // RVA: 0x6BEFB0
        void xni(float a);  // RVA: 0x6BEFD0
        float get_Item(int32_t index);  // RVA: 0x6BDFC0
        void set_Item(int32_t index, float value);  // RVA: 0x6BE100
        static RawEncryptedVector3 xnj(Vector3 a, int32_t b);  // RVA: 0x6BF060
        static RawEncryptedVector3 xnk(float a, float b, float c, int32_t d);  // RVA: 0x6BF100
        static Vector3 xnl(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6BF1A0
        static ObscuredVector3 xnm(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6BF230
        static int32_t xnn();  // RVA: 0x6A50F0
        static bool xno(Vector3 a, Vector3 b);  // RVA: 0x6BF270
        static bool xnp(float a, float b);  // RVA: 0x6BF2E0
        RawEncryptedVector3 xnq(int32_t a);  // RVA: 0x6BF3A0
        void xnr(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6BF450
        Vector3 xns();  // RVA: 0x6BE0D0
        void woj();  // RVA: 0x6BE1B0
        static bool xnt(Vector3 a, int32_t b);  // RVA: 0x6BF550
        void xnu(Vector3 a);  // RVA: 0x6BF580
        Vector3 xnv();  // RVA: 0x6BF650
        bool xnw();  // RVA: 0x6BD9E0
        static void xnx(int32_t a);  // RVA: 0x63E350
        void xny();  // RVA: 0x63E350
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6BDD60
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
    bool Equals(RawEncryptedVector3Int other);  // RVA: 0x6BFB30
    bool Equals(Il2CppObject* obj);  // RVA: 0x6C6BF0
    int32_t GetHashCode();  // RVA: 0x6BFC00
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
        static ObscuredVector3Int op_Implicit(Vector3Int value);  // RVA: 0x6BC180
        static Vector3Int op_Implicit(ObscuredVector3Int value);  // RVA: 0x6BC1C0
        static Vector2Int xnz(ObscuredVector3Int a);  // RVA: 0x6BC340
        static Vector3 op_Implicit(ObscuredVector3Int value);  // RVA: 0x6BC120
        static ObscuredVector3Int xoa(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6BC380
        static ObscuredVector3Int xob(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6BC490
        static ObscuredVector3Int xoc(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6BC5A0
        static ObscuredVector3Int xod(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6BC6A0
        static ObscuredVector3Int xoe(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6BC7B0
        static ObscuredVector3Int xof(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6BC8C0
        static ObscuredVector3Int xog(ObscuredVector3Int a, int32_t b);  // RVA: 0x6BC9C0
        static ObscuredVector3Int xoh(int32_t a, ObscuredVector3Int b);  // RVA: 0x6BCAD0
        static ObscuredVector3Int xoi(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6BCBE0
        static ObscuredVector3Int xoj(ObscuredVector3Int a, int32_t b);  // RVA: 0x6BCC90
        static bool xok(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6BCD20
        static bool xol(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6BCDB0
        static bool xom(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6BCE20
        static bool xon(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6BCE80
        static bool xoo(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6BCF10
        static bool xop(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6BCF80
        bool Equals(Il2CppObject* other);  // RVA: 0x6BBC00
        bool Equals(ObscuredVector3Int other);  // RVA: 0x6BBB20
        bool Equals(Vector3Int other);  // RVA: 0x6BBD50
        int32_t GetHashCode();  // RVA: 0x6BBDC0
        Il2CppString* ToString();  // RVA: 0x6BBEF0
        Il2CppString* xoq(Il2CppString* a);  // RVA: 0x6BCFF0
        int32_t woi();  // RVA: 0x6A21B0
        void .ctor(Vector3Int value);  // RVA: 0x6BBF30
        void .ctor(int32_t x, int32_t y, int32_t z);  // RVA: 0x6BC000
        int32_t xor();  // RVA: 0x6BD040
        void xos(int32_t a);  // RVA: 0x6BD070
        int32_t xot();  // RVA: 0x6BD160
        void xou(int32_t a);  // RVA: 0x6BD190
        int32_t xov();  // RVA: 0x6BD280
        void xow(int32_t a);  // RVA: 0x6BD2A0
        int32_t get_Item(int32_t index);  // RVA: 0x6BC030
        void set_Item(int32_t index, int32_t value);  // RVA: 0x6BC1F0
        static RawEncryptedVector3Int xox(Vector3Int a, int32_t b);  // RVA: 0x6BD390
        static RawEncryptedVector3Int xoy(int32_t a, int32_t b, int32_t c, int32_t d);  // RVA: 0x6BD3D0
        static Vector3Int xoz(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6BD400
        static ObscuredVector3Int xpa(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6BD430
        static int32_t xpb();  // RVA: 0x6A50F0
        RawEncryptedVector3Int xpc(int32_t a);  // RVA: 0x6BD4F0
        void xpd(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6BD600
        Vector3Int xpe();  // RVA: 0x6BC1C0
        void woj();  // RVA: 0x6BC2A0
        static bool xpf(Vector3Int a, int32_t b);  // RVA: 0x6BD6B0
        void xpg(Vector3Int a);  // RVA: 0x6BD6E0
        Vector3Int xph();  // RVA: 0x6BD760
        bool xpi();  // RVA: 0x6BD9E0
        static void xpj(int32_t a);  // RVA: 0x63E350
        void xpk();  // RVA: 0x63E350
        static Vector3Int xpl(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6BDA10
        void OnBeforeSerialize();  // RVA: 0x63E350
        void OnAfterDeserialize();  // RVA: 0x6BBE60
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
    static void .cctor();  // RVA: 0x6CCE10
    void .ctor();  // RVA: 0x629380
    void xpm(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CCF60
    void xpn(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD050
    void xpo(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD0F0
    void xpp(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD180
    void xpq(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD220
    void xpr(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD2C0
    void xps(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD380
    void xpt(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD440
    void xpu(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD4F0
    void xpv(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD590
    void xpw(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD650
    void xpx(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD6F0
    void xpy(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD790
    void xpz(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CD9E0
    void xqa(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CDA70
    void xqb(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CDB10
    void xqc(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CDBA0
    void xqd(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CDC40
    void xqe(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CDCE0
    void xqf(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CDD80
    void xqg(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CDF30
    void xqh(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CE0D0
    void xqi(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6CE2D0
};

namespace CodeStage.AntiCheat.ObscuredTypes.Converters
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes.Converters
    class ObscuredTypesNewtonsoftConverter : public JsonConverter
    {
    public:
        // Static fields
        // static Il2CppString* bmrb;
        // static Il2CppString* bmrc;
        // static Il2CppString* bmrd;
        // static Il2CppString* bmre;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.HashSet<System.Type> bmrf; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.Dictionary<System.Type,System.Action<Newtonsoft.Json.JsonWriter,System.Object>> bmrg; // 0x0018
    
        // Methods
        void WriteJson(JsonWriter* writer, Il2CppObject* value, JsonSerializer* serializer);  // RVA: 0x6C44B0
        static void xqj(JsonWriter* a, Quaternion b);  // RVA: 0x6C6200
        static void xqk(JsonWriter* a, Vector2 b);  // RVA: 0x6C63A0
        static void xql(JsonWriter* a, Vector2Int b);  // RVA: 0x6C64B0
        static void xqm(JsonWriter* a, Vector3 b);  // RVA: 0x6C65C0
        static void xqn(JsonWriter* a, Vector3Int b);  // RVA: 0x6C6720
        Il2CppObject* ReadJson(JsonReader* reader, Type* objectType, Il2CppObject* existingValue, JsonSerializer* serializer);  // RVA: 0x6C23E0
        bool CanConvert(Type* objectType);  // RVA: 0x6C2380
        void .ctor();  // RVA: 0x6C4790
        static void .cctor();  // RVA: 0x6C4650
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
    static void .cctor();  // RVA: 0x6CCDA0
    void .ctor();  // RVA: 0x629380
    int32_t xqo(dby* a, dby* b);  // RVA: 0x6CE4C0
};

// Namespace: <global>
class dbv
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmrh>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.IReadOnlyList<dby> <bmri>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* <bmrj>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    double <bmrk>k__BackingField; // 0x0028

    // Methods
    void xqt(double a);  // RVA: 0x6D5210
    System.Collections.Generic.IReadOnlyList<dby> xqq();  // RVA: 0x691970
    bool xqu(Il2CppString* a);  // RVA: 0x6D5220
    Il2CppString* jdo(dby[][] a);  // RVA: 0x6D40C0
    void baz();  // RVA: 0x6D2B00
    Il2CppString* hwt(dby[][] a);  // RVA: 0x6D3D50
    void .ctor(Il2CppString* a, dby[][] b, Il2CppString* c);  // RVA: 0x6D2A90
    void jjc();  // RVA: 0x6D4430
    void omj();  // RVA: 0x6D4CD0
    void xqv();  // RVA: 0x6D53A0
    bool hff(Il2CppString* a);  // RVA: 0x6D3BD0
    Il2CppString* xqr();  // RVA: 0x63B450
    void efd();  // RVA: 0x6D3520
    Il2CppString* xqp();  // RVA: 0x6C6AE0
    bool ers(Il2CppString* a);  // RVA: 0x6D3A50
    Il2CppString* xqw(dby[][] a);  // RVA: 0x6D58D0
    void .ctor(Il2CppString* a, dby[][] b);  // RVA: 0x6D2910
    bool clm(Il2CppString* a);  // RVA: 0x6D33A0
    Il2CppString* ckx(dby[][] a);  // RVA: 0x6D3030
    double xqs();  // RVA: 0x6D5200
    Il2CppString* lkg(dby[][] a);  // RVA: 0x6D4960
};

// Namespace: <global>
class dbw
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmrl; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmrm; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbx* bmrn; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x67D2D0
    void xqx();  // RVA: 0x63E350
    bool MoveNext();  // RVA: 0x6D5C40
    Il2CppObject* xqy();  // RVA: 0x691970
    void xqz();  // RVA: 0x6D5D40
    Il2CppObject* xra();  // RVA: 0x691970
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
    void MoveNext();  // RVA: 0x6CB710
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6CB9B0
};

// Namespace: <global>
class dbx : public dcx`1
{
public:
    // Static fields
    // static int32_t bmro;
    // static HashGeneratorResultHandler* bmrp;

    uint8_t pad_0000[0x30]; // 0x0000
    dcc* <bmrq>k__BackingField; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    WaitForSeconds* bmrr; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    dcf* bmrs; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    SemaphoreSlim* bmrt; // 0x0048

    // Methods
    void xre(dcc* a);  // RVA: 0x6D6880
    static System.Threading.Tasks.Task<dcc> nyr(int32_t a);  // RVA: 0x6D64E0
    IEnumerator* xro();  // RVA: 0x6D6CF0
    void OnDestroy();  // RVA: 0x6D5D80
    dcd* xrn(int32_t a);  // RVA: 0x6D6B30
    static bool crs();  // RVA: 0x674DC0
    dcc* xrd();  // RVA: 0x6D6870
    static System.Threading.Tasks.Task<dcc> xri(int32_t a);  // RVA: 0x6D6910
    dcd* sq(int32_t a);  // RVA: 0x6D6530
    dcd* xrk(int32_t a);  // RVA: 0x6D6980
    static bool ocs();  // RVA: 0x674DC0
    dcd* cmw(int32_t a);  // RVA: 0x6D5E70
    static dcd* ddq();  // RVA: 0x6D61F0
    static dcd* jpb();  // RVA: 0x6D6250
    static dcd* igy();  // RVA: 0x6D6220
    void .ctor();  // RVA: 0x6D5DF0
    bool xrj();  // RVA: 0x6D6960
    static bool klf();  // RVA: 0x674DC0
    System.Threading.Tasks.Task<dcc> xrl(int32_t a);  // RVA: 0x6D69D0
    static dcd* xrg();  // RVA: 0x6D6890
    static System.Threading.Tasks.Task<dcc> lhf(int32_t a);  // RVA: 0x6D6280
    static bool xrf();  // RVA: 0x674DC0
    static void xrb(HashGeneratorResultHandler* a);  // RVA: 0x6D66F0
    System.Threading.Tasks.Task<dcc> xrm(int32_t a);  // RVA: 0x6D6A20
    static System.Threading.Tasks.Task<dcc> msu(int32_t a);  // RVA: 0x6D62D0
    static dcd* xrh(int32_t a);  // RVA: 0x6D68C0
    static bool flq();  // RVA: 0x674DC0
    dcd* nhf(int32_t a);  // RVA: 0x6D6320
    static void xrc(HashGeneratorResultHandler* a);  // RVA: 0x6D67B0
    dcd* daa(int32_t a);  // RVA: 0x6D6030
};

// Namespace: <global>
class dby
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmru>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* <bmrv>k__BackingField; // 0x0018

    // Methods
    Il2CppString* xrp();  // RVA: 0x6C6AE0
    Il2CppString* xrq();  // RVA: 0x691970
    void .ctor(Il2CppString* a, Stream* b, dax<dce> c);  // RVA: 0x6D6DD0
    void .ctor(Il2CppString* a, Il2CppString* b);  // RVA: 0x6D6ED0
    Il2CppString* ToString();  // RVA: 0x6D6D60
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> <>9__2_0;


    // Methods
    static void .cctor();  // RVA: 0x6CCEF0
    void .ctor();  // RVA: 0x629380
    void xrr(FilesProgress a);  // RVA: 0x63E350
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    struct FilesProgress
    {
    public:
    
        // Methods
        static FilesProgress xrs(float a, Il2CppString* b);  // RVA: 0x629820
        static FilesProgress None();  // RVA: 0x629820
        static System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> xrt(Il2CppString* a);  // RVA: 0x6C0FC0
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dbz
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool bmrw; // 0x0010
    bool bmrx; // 0x0011
    bool bmry; // 0x0012
    bool bmrz; // 0x0013
    uint8_t pad_0014[0x4]; // 0x0014
    Il2CppString* bmsa; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* bmsb; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bmsc; // 0x0028

    // Methods
    static bool ly(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6D7300
    Il2CppString* ToString();  // RVA: 0x6D6F20
    static bool dmr(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6D7160
    static bool jxz(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6D7230
    bool xru(Il2CppString* a);  // RVA: 0x6D73D0
    static bool xrv(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6D7760
    void .ctor();  // RVA: 0x629380
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
    dbz[][] <bmsd>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    dbz[][] <bmse>k__BackingField; // 0x0018

    // Methods
    void .ctor(dbz[][] a, dbz[][] b);  // RVA: 0x6D6ED0
    bool mmn(Il2CppString* a);  // RVA: 0x6D7A10
    dca* lwn(dca* a);  // RVA: 0x6D7B60
    dca* ceg(dca* a);  // RVA: 0x6D78C0
    bool xrz(Il2CppString* a);  // RVA: 0x6D7830
    a[][] xsc(a[][] a, a[][] b);  // RVA: 0x42ED80
    bool nbx(Il2CppString* a);  // RVA: 0x6D7830
    bool nof(Il2CppString* a, dbz[][] b);  // RVA: 0x6D7990
    bool ibb(Il2CppString* a);  // RVA: 0x6D7A10
    dca* xsa(dca* a);  // RVA: 0x6D7D00
    bool xry(Il2CppString* a);  // RVA: 0x6D7A10
    bool xsb(Il2CppString* a, dbz[][] b);  // RVA: 0x6D7990
    bool foj(Il2CppString* a);  // RVA: 0x6D7830
    bool gkv(Il2CppString* a, dbz[][] b);  // RVA: 0x6D7990
    dca* mzm(dca* a);  // RVA: 0x6D7C30
    dbz[][] xrw();  // RVA: 0x6C6AE0
    dca* khr(dca* a);  // RVA: 0x6D7A90
    bool her(Il2CppString* a);  // RVA: 0x6D7A10
    bool cds(Il2CppString* a);  // RVA: 0x6D7830
    bool lei(Il2CppString* a, dbz[][] b);  // RVA: 0x6D7990
    bool hlx(Il2CppString* a);  // RVA: 0x6D7830
    dbz[][] xrx();  // RVA: 0x691970
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
        FilterGroup get_DefaultGroup();  // RVA: 0x6C10F0
        void set_DefaultGroup(FilterGroup value);  // RVA: 0x6C1100
        void .ctor();  // RVA: 0x6C10E0
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dcb
{
public:

    // Methods
    static FilteringSettings* xsd();  // RVA: 0x6D8D80
    static dca* xsf(bool a);  // RVA: 0x6D8EF0
    static dca* hce(bool a);  // RVA: 0x6D8AB0
    static dca* mei(bool a);  // RVA: 0x6D8020
    static dca* xsi(bool a);  // RVA: 0x6D8AB0
    static dca* fdt(bool a);  // RVA: 0x6D85E0
    static dca* xse(bool a);  // RVA: 0x6D8DB0
    static dca* jbu(bool a);  // RVA: 0x6D8020
    static dca* ehr(bool a);  // RVA: 0x6D81B0
    static dca* xsg(bool a);  // RVA: 0x6D9030
    static dca* far(bool a);  // RVA: 0x6D82F0
    static dca* foe(bool a);  // RVA: 0x6D8720
    static dca* gdo(bool a);  // RVA: 0x6D8860
    static dca* xsk(bool a);  // RVA: 0x6D98F0
    static dca* dog(bool a);  // RVA: 0x6D8020
    static dca* ogw(bool a);  // RVA: 0x6D8C40
    static dca* liq(bool a);  // RVA: 0x6D8B00
    static dca* duj(bool a);  // RVA: 0x6D8070
    static dca* xsl(bool a);  // RVA: 0x6D8020
    static dca* cwb(bool a);  // RVA: 0x6D7DD0
    static dca* iap(bool a);  // RVA: 0x6D8020
    static dca* xsh(bool a);  // RVA: 0x6D9320
    static dca* xsj(bool a);  // RVA: 0x6D9570
};

// Namespace: <global>
class dcc
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmsf>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* bmsg; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbv* bmsh; // 0x0020

    // Methods
    System.Collections.Generic.IReadOnlyList<dby> xso();  // RVA: 0x6D9DC0
    void dzx();  // RVA: 0x6D9C50
    Il2CppString* xsm();  // RVA: 0x6D9DA0
    Il2CppString* xsn();  // RVA: 0x6D9DA0
    void dkg();  // RVA: 0x6D9BE0
    void xsq(Il2CppString* a);  // RVA: 0x6D9DE0
    double xss();  // RVA: 0x6D9E00
    static dcc* fwv(Il2CppString* a);  // RVA: 0x6D9D30
    static dcc* xsu(dbv* a);  // RVA: 0x6D9E90
    void .ctor();  // RVA: 0x629380
    bool xsv(Il2CppString* a);  // RVA: 0x6D9F00
    void xsw();  // RVA: 0x6D9F20
    static dcc* fie(Il2CppString* a);  // RVA: 0x6D9CC0
    bool xsr();  // RVA: 0x6D9DF0
    Il2CppString* xsp();  // RVA: 0x6C6AE0
    static dcc* xst(Il2CppString* a);  // RVA: 0x6D9E20
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    class HashGeneratorResultHandler : public MulticastDelegate
    {
    public:
    
        // Methods
        void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6C1110
        void Invoke(dcc* result);  // RVA: 0x66F9C0
        IAsyncResult* BeginInvoke(dcc* result, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x66FAF0
        void EndInvoke(IAsyncResult* result);  // RVA: 0x66F9B0
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dcd
{
public:

    // Methods
    dcc* xrd();  // RVA: 0x41EDB0
    bool xrj();  // RVA: 0x4238F0
    dcd* xsx(int32_t a);  // RVA: 0x41F3C0
    System.Threading.Tasks.Task<dcc> xsy(int32_t a);  // RVA: 0x41F3C0
};

// Namespace: <global>
class dce
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SHA1Managed* bmsi; // 0x0010

    // Methods
    void Dispose();  // RVA: 0x6D9F90
    Byte[][] hph(Byte[][] a);  // RVA: 0x6DA040
    Byte[][] xta(Byte[][] a);  // RVA: 0x6DA040
    Byte[][] xsz(Stream* a);  // RVA: 0x6DA020
    Byte[][] hmx(Byte[][] a);  // RVA: 0x6DA040
    Byte[][] dkp(Byte[][] a);  // RVA: 0x6DA040
    Byte[][] daj(Stream* a);  // RVA: 0x6DA020
    void .ctor();  // RVA: 0x6D9FB0
    Byte[][] jqp(Byte[][] a);  // RVA: 0x6DA040
};

// Namespace: <global>
class dcf
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dcc* <bmsj>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool <bmsk>k__BackingField; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t bmsl; // 0x001C

    // Methods
    dcc* xtb();  // RVA: 0x6C6AE0
    void xtc(dcc* a);  // RVA: 0x6D9DE0
    bool xtd();  // RVA: 0x6DA0A0
    void xte(bool a);  // RVA: 0x6DA0B0
    void .ctor(int32_t a);  // RVA: 0x6DA070
    void Execute();  // RVA: 0x6DA060
    void xtf(dcc* a);  // RVA: 0x6DA0C0
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<dce> <>9__1_0;


    // Methods
    static void .cctor();  // RVA: 0x6CCE80
    void .ctor();  // RVA: 0x629380
    dce* xtg();  // RVA: 0x6CE500
};

// Namespace: <global>
class dcg
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dca* bmsm; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Concurrent.ConcurrentBag<dby> bmsn; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dax<dce> bmso; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bmsp; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t bmsq; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> bmsr; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t bmss; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t bmst; // 0x0044

    // Methods
    void cbc(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6DA610
    void jgq(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6DB070
    void bqm(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6DA0E0
    void cym(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6DAB40
    void .ctor();  // RVA: 0x629380
    void xth(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6DB5A0
};

// Namespace: <global>
class dch
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dci* bmsu; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* bmsv; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dca* bmsw; // 0x0020

    // Methods
    void xti();  // RVA: 0x6DBAD0
    void mmg();  // RVA: 0x6DBAD0
    void gfq();  // RVA: 0x6DBAD0
    void .ctor();  // RVA: 0x629380
};

// Namespace: <global>
class dci : public dcf
{
public:
    // Static fields
    // static Il2CppObject* bmsx;


    // Methods
    void ctv(Il2CppString* a, dca* b);  // RVA: 0x6DC500
    void ghl(Il2CppString* a, dca* b);  // RVA: 0x6DC690
    static dbv* xtj(Il2CppString* a, dca* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6DCE50
    void xtk(Il2CppString* a, dca* b);  // RVA: 0x6DD2F0
    void byr(Il2CppString* a, dca* b);  // RVA: 0x6DBED0
    void Execute();  // RVA: 0x6DBB00
    void .ctor(int32_t a);  // RVA: 0x6DA070
    static void .cctor();  // RVA: 0x6DBE50
    void osn(Il2CppString* a, dca* b);  // RVA: 0x6DCCC0
    static dbv* ntq(Il2CppString* a, dca* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6DC820
    static dbv* bzz(Il2CppString* a, dca* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6DC060
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
    Il2CppString* <bmsy>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    AndroidAppSource <bmsz>k__BackingField; // 0x0018

    // Methods
    Il2CppString* xtl();  // RVA: 0x6C6AE0
    AndroidAppSource xtm();  // RVA: 0x6C10F0
    void .ctor(Il2CppString* a);  // RVA: 0x6DD480
    AndroidAppSource xtn(Il2CppString* a);  // RVA: 0x6DD660
};

// Namespace: <global>
class dck
{
public:

    // Methods
    static dcj* xto();  // RVA: 0x6DD9B0
    static bool lb();  // RVA: 0x6DD980
    static dcj* dcn();  // RVA: 0x6DD800
    static dcj* gbu();  // RVA: 0x6DD900
    static dcj* dwh();  // RVA: 0x6DD880
    static bool muf();  // RVA: 0x6DD980
    static bool xtp();  // RVA: 0x6DD980
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class ACTkDetectorBase`1 : public dcx`1
    {
    public:
        // Static fields
        // static Il2CppString* bmta;
    
        bool autoStart; // 0x0000
        bool autoDispose; // 0x0000
        Action* bmtb; // 0x0000
        bool <bmtc>k__BackingField; // 0x0000
        UnityEvent* detectionEvent; // 0x0000
        bool detectionEventHasListener; // 0x0000
        bool <bmtd>k__BackingField; // 0x0000
        bool <bmte>k__BackingField; // 0x0000
        dcl* <bmtf>k__BackingField; // 0x0000
    
        // Methods
        void xtq(Action* a);  // RVA: 0x41A6C0
        void xtr(Action* a);  // RVA: 0x41A6C0
        bool xts();  // RVA: 0x4238F0
        void xtt(bool a);  // RVA: 0x41F340
        bool xtu();  // RVA: 0x4238F0
        void xtv(bool a);  // RVA: 0x41F340
        bool xtw();  // RVA: 0x4238F0
        void xtx(bool a);  // RVA: 0x41F340
        dcl* xty();  // RVA: 0x41EDB0
        void xtz(dcl* a);  // RVA: 0x41A6C0
        void Start();  // RVA: 0x430790
        void OnEnable();  // RVA: 0x430790
        void OnDisable();  // RVA: 0x430790
        void OnApplicationQuit();  // RVA: 0x430790
        void OnDestroy();  // RVA: 0x430790
        void xua(dcl* a);  // RVA: 0x41A6C0
        void xub();  // RVA: 0x430790
        bool xuc();  // RVA: 0x4238F0
        void xud();  // RVA: 0x430790
        void xue();  // RVA: 0x430790
        bool xuf();  // RVA: 0x4238F0
        bool xug();  // RVA: 0x4238F0
        void xuh();  // RVA: 0x430790
        void .ctor();  // RVA: 0x430790
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcl
{
public:

    // Methods
    Il2CppString* xui();  // RVA: 0x41EDB0
};

// Namespace: <global>
class dcm
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmtg>k__BackingField; // 0x0010

    // Methods
    Il2CppString* xuj();  // RVA: 0x6C6AE0
    void .ctor(Il2CppString* a);  // RVA: 0x6DDA90
    Il2CppString* xui();  // RVA: 0x6DDA30
    Il2CppString* ToString();  // RVA: 0x6DDA30
};

// Namespace: <global>
class InjectionDetectedEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6C1240
    void Invoke(Il2CppString* reason);  // RVA: 0x66F9C0
    IAsyncResult* BeginInvoke(Il2CppString* reason, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x66FAF0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x66F9B0
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class InjectionDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmth;
    
    
        // Methods
        dcm* xuk();  // RVA: 0x6C13C0
        static InjectionDetector* xul();  // RVA: 0x6C1440
        static void xum();  // RVA: 0x6C14C0
        static void xun(System.Action<System.String> a);  // RVA: 0x6C1540
        static void xuo();  // RVA: 0x6C15C0
        static void xup();  // RVA: 0x6C1640
        void xuh();  // RVA: 0x6C1340
        void .ctor();  // RVA: 0x6C1300
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcn
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Type* <bmti>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool <bmtj>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppObject* <bmtk>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppObject* <bmtl>k__BackingField; // 0x0028

    // Methods
    Type* xuq();  // RVA: 0x6C6AE0
    bool xur();  // RVA: 0x6DA0A0
    Il2CppObject* xus();  // RVA: 0x63B450
    Il2CppObject* xut();  // RVA: 0x6810D0
    void .ctor(Type* a, bool b, Il2CppObject* c, Il2CppObject* d);  // RVA: 0x6DDBD0
    Il2CppString* xui();  // RVA: 0x6DDAD0
    Il2CppString* ToString();  // RVA: 0x6DDAD0
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class ObscuredCheatingDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmtm;
    
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
        dcn* xuu();  // RVA: 0x6C1740
        static ObscuredCheatingDetector* xuv();  // RVA: 0x6C17C0
        static ObscuredCheatingDetector* xuw();  // RVA: 0x6C17F0
        static ObscuredCheatingDetector* xux(Action* a);  // RVA: 0x6C1940
        static void xuy();  // RVA: 0x6C1990
        static void xuz();  // RVA: 0x6C1AA0
        static bool xva();  // RVA: 0x6C1BB0
        static bool xvb();  // RVA: 0x6C1CB0
        void .ctor();  // RVA: 0x6C16C0
        void xvc();  // RVA: 0x6C1E20
        void xvd(dbt* a, Il2CppObject* b, Il2CppObject* c);  // RVA: 0x6C1FB0
        void xve(dbt* a, bool b, Il2CppObject* c, Il2CppObject* d);  // RVA: 0x6C2090
        ObscuredCheatingDetector* xvf(Action* a);  // RVA: 0x6C2180
        void xuh();  // RVA: 0x6C1730
        static void xvg(b a, bool b, c c, bool d, a e, d f);  // RVA: 0x5640F0
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dco
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool <bmtn>k__BackingField; // 0x0010
    bool <bmto>k__BackingField; // 0x0011
    bool <bmtp>k__BackingField; // 0x0012
    bool <bmtq>k__BackingField; // 0x0013
    bool <bmtr>k__BackingField; // 0x0014

    // Methods
    bool xvh();  // RVA: 0x6705A0
    bool xvi();  // RVA: 0x67D860
    bool xvj();  // RVA: 0x6DDE60
    bool xvk();  // RVA: 0x6DDE70
    bool xvl();  // RVA: 0x6DDE80
    void .ctor(bool a, bool b, bool c, bool d, bool e);  // RVA: 0x6DDC60
    Il2CppString* xui();  // RVA: 0x6DDCC0
    Il2CppString* ToString();  // RVA: 0x6DDC50
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class SpeedHackDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmts;
    
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
        uint8_t bmtt; // 0x0076
        uint8_t pad_0077[0x1]; // 0x0077
        int32_t bmtu; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        int64_t bmtv; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        int64_t bmtw; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        int64_t bmtx; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        int64_t bmty; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        bool bmtz; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float bmua; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        bool bmub; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        double bmuc; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        bool bmud; // 0x00B8
    
        // Methods
        dco* xvm();  // RVA: 0x6C7240
        int32_t get_TimeJumpThreshold();  // RVA: 0x6C7150
        void set_TimeJumpThreshold(int32_t value);  // RVA: 0x6C7180
        bool get_UseDsp();  // RVA: 0x6C7160
        void set_UseDsp(bool value);  // RVA: 0x6C7190
        bool get_WatchTimeScale();  // RVA: 0x6C7170
        void set_WatchTimeScale(bool value);  // RVA: 0x6C71A0
        static SpeedHackDetector* xvn();  // RVA: 0x6C72C0
        static SpeedHackDetector* xvo();  // RVA: 0x6C72F0
        static SpeedHackDetector* xvp(Action* a);  // RVA: 0x6C7560
        static SpeedHackDetector* xvq(Action* a, float b);  // RVA: 0x6C7680
        static SpeedHackDetector* xvr(Action* a, float b, uint8_t c);  // RVA: 0x6C7770
        static SpeedHackDetector* xvs(Action* a, float b, uint8_t c, int32_t d);  // RVA: 0x6C7830
        static void xvt();  // RVA: 0x6C78C0
        static void xvu();  // RVA: 0x6C79D0
        static void xvv(float a);  // RVA: 0x6C7AE0
        static void xvw(float a);  // RVA: 0x6C7C40
        static void xvx();  // RVA: 0x6C7D80
        static void xvy();  // RVA: 0x6C7EB0
        void xvz();  // RVA: 0x6C7FD0
        void .ctor();  // RVA: 0x6C70D0
        void OnApplicationPause(bool pause);  // RVA: 0x6C6CA0
        void Update();  // RVA: 0x6C6D30
        SpeedHackDetector* xwa(Action* a, float b, uint8_t c, int32_t d);  // RVA: 0x6C80C0
        void xuh();  // RVA: 0x6C7210
        void xud();  // RVA: 0x6C71B0
        bool xwb(int64_t a, int64_t b, int64_t c);  // RVA: 0x6C8330
        void xwc(float a);  // RVA: 0x6C83F0
        bool xwd();  // RVA: 0x6C8440
        void xwe(float a);  // RVA: 0x6C84E0
        void xwf();  // RVA: 0x6C8520
        void xwg();  // RVA: 0x6C8540
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcp
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CheckResult <bmue>k__BackingField; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    ErrorKind <bmuf>k__BackingField; // 0x0014

    // Methods
    CheckResult xwh();  // RVA: 0x66F7C0
    ErrorKind xwi();  // RVA: 0x6DDFE0
    void .ctor(CheckResult a, ErrorKind b);  // RVA: 0x6DDFA0
    Il2CppString* xui();  // RVA: 0x6DDE90
    Il2CppString* ToString();  // RVA: 0x6DDE90
};

// Namespace: <global>
class OnlineTimeCallback : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6C6930
    void Invoke(OnlineTimeResult result);  // RVA: 0x6C68F0
    IAsyncResult* BeginInvoke(OnlineTimeResult result, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6C6870
    void EndInvoke(IAsyncResult* result);  // RVA: 0x66F9B0
};

// Namespace: <global>
class TimeCheatingDetectorEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6C8640
    void Invoke(CheckResult result, ErrorKind error);  // RVA: 0x6C8630
    IAsyncResult* BeginInvoke(CheckResult result, ErrorKind error, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6C8590
    void EndInvoke(IAsyncResult* result);  // RVA: 0x66F9B0
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
    bool xwj();  // RVA: 0x66FCF0
    Il2CppString* xwk();  // RVA: 0x66FD00
    int64_t xwl();  // RVA: 0x6C6AE0
    double xwm();  // RVA: 0x6C6AF0
    DateTime xwn();  // RVA: 0x63B450
    OnlineTimeResult xwo(double a, DateTime b);  // RVA: 0x6C6B00
    OnlineTimeResult xwp(Il2CppString* a, int64_t b);  // RVA: 0x6C6B80
    Il2CppString* ToString();  // RVA: 0x6C69E0
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
    int32_t bmug; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmuh; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TimeCheatingDetector* bmui; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x67D2D0
    void xwq();  // RVA: 0x63E350
    bool MoveNext();  // RVA: 0x6DDFF0
    Il2CppObject* xwr();  // RVA: 0x691970
    void xws();  // RVA: 0x6DE410
    Il2CppObject* xwt();  // RVA: 0x691970
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
    void MoveNext();  // RVA: 0x6CB0D0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6CB360
};

// Namespace: <global>
class dcr
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmuj; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmuk; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TimeCheatingDetector* bmul; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x67D2D0
    void xwu();  // RVA: 0x63E350
    bool MoveNext();  // RVA: 0x6DE450
    Il2CppObject* xwv();  // RVA: 0x691970
    void xww();  // RVA: 0x6DE560
    Il2CppObject* xwx();  // RVA: 0x691970
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
    void MoveNext();  // RVA: 0x6CB390
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6CB6A0
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
    void MoveNext();  // RVA: 0x6CBA20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6CC310
};

// Namespace: <global>
class dcs
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmum; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmun; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* bmuo; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    OnlineTimeCallback* bmup; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RequestMethod bmuq; // 0x0030

    // Methods
    void .ctor(int32_t a);  // RVA: 0x67D2D0
    void xwy();  // RVA: 0x63E350
    bool MoveNext();  // RVA: 0x6DE5A0
    Il2CppObject* xwz();  // RVA: 0x691970
    void xxa();  // RVA: 0x6DE650
    Il2CppObject* xxb();  // RVA: 0x691970
};

// Namespace: <global>
class dct
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmur; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmus; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Uri* bmut; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RequestMethod bmuu; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    OnlineTimeCallback* bmuv; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    OnlineTimeResult bmuw; // 0x0038
    uint8_t pad_0039[0x27]; // 0x0039
    UnityWebRequest* bmux; // 0x0060

    // Methods
    Il2CppObject* xxg();  // RVA: 0x691970
    void xxf();  // RVA: 0x6DEB50
    bool MoveNext();  // RVA: 0x6DE690
    void xxd();  // RVA: 0x6DEB00
    void .ctor(int32_t a);  // RVA: 0x67D2D0
    void xxc();  // RVA: 0x6DEA70
    Il2CppObject* xxe();  // RVA: 0x691970
    void jhh();  // RVA: 0x6DEA20
    void fsq();  // RVA: 0x6DE9D0
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
    void MoveNext();  // RVA: 0x6CC340
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6CCD30
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class TimeCheatingDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmuy;
        // static int32_t bmuz;
        // static WaitForEndOfFrame* bmva;
        // static System.Lazy<das> <bmvb>k__BackingField;
        // static bool bmvc;
    
        uint8_t pad_0000[0x60]; // 0x0000
        TimeCheatingDetectorEventHandler* bmvd; // 0x0060
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
        ErrorKind <bmve>k__BackingField; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        CheckResult <bmvf>k__BackingField; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        OnlineTimeResult <bmvg>k__BackingField; // 0x0090
        uint8_t pad_0091[0x27]; // 0x0091
        bool <bmvh>k__BackingField; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Il2CppString* bmvi; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Uri* bmvj; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        TimeCheatingDetectorEventHandler* bmvk; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        float bmvl; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        bool bmvm; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        double bmvn; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> bmvo; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Action* bmvp; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        int32_t threshold; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Il2CppString* timeServer; // 0x0100
    
        // Methods
        dcp* xxh();  // RVA: 0x6C8BB0
        static System.Lazy<das> xxi();  // RVA: 0x6C8C30
        void xxj(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6C8C80
        void xxk(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6C8D20
        Il2CppString* xxl();  // RVA: 0x6C8DC0
        void xxm(Il2CppString* a);  // RVA: 0x6C8DD0
        ErrorKind xxn();  // RVA: 0x6C8E90
        void xxo(ErrorKind a);  // RVA: 0x6C8EA0
        CheckResult xxp();  // RVA: 0x6C8EB0
        void xxq(CheckResult a);  // RVA: 0x6C8EC0
        OnlineTimeResult xxr();  // RVA: 0x6C8ED0
        void xxs(OnlineTimeResult a);  // RVA: 0x6C8F00
        bool xxt();  // RVA: 0x6C8F30
        void xxu(bool a);  // RVA: 0x6C8F40
        void OnApplicationPause(bool pauseStatus);  // RVA: 0x6C86F0
        void Update();  // RVA: 0x6C8770
        static TimeCheatingDetector* xxv();  // RVA: 0x6C8F50
        static TimeCheatingDetector* xxw(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6C8F80
        static TimeCheatingDetector* xxx(float a, TimeCheatingDetectorEventHandler* b);  // RVA: 0x6C9170
        static void xxy();  // RVA: 0x6C91D0
        static void xxz();  // RVA: 0x6C92E0
        static IEnumerator* xya(Il2CppString* a, OnlineTimeCallback* b, RequestMethod c);  // RVA: 0x6C93F0
        static IEnumerator* xyb(Uri* a, OnlineTimeCallback* b, RequestMethod c);  // RVA: 0x6C9490
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyc(Il2CppString* a, RequestMethod b);  // RVA: 0x6C9530
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyd(Il2CppString* a, CancellationToken b, RequestMethod c);  // RVA: 0x6C9600
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xye(Uri* a, RequestMethod b);  // RVA: 0x6C9680
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyf(Uri* a, CancellationToken b, RequestMethod c);  // RVA: 0x6C9710
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyg(Il2CppString* a, RequestMethod b);  // RVA: 0x6C9860
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyh(Il2CppString* a, CancellationToken b, RequestMethod c);  // RVA: 0x6C9930
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyi(Uri* a, RequestMethod b);  // RVA: 0x6C99B0
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyj(Uri* a, CancellationToken b, RequestMethod c);  // RVA: 0x6C9A40
        static das* xyk();  // RVA: 0x6C9B50
        static UnityWebRequest* xyl(Uri* a, RequestMethod b);  // RVA: 0x6C9BA0
        static void xym(UnityWebRequest* a, OnlineTimeResult b);  // RVA: 0x6C9DE0
        static Uri* xyn(Il2CppString* a);  // RVA: 0x6CA0B0
        static bool xyo(Il2CppString* a, DateTime b);  // RVA: 0x6CA180
        void xyp();  // RVA: 0x6CA4F0
        bool xyq();  // RVA: 0x6CA5A0
        IEnumerator* xyr();  // RVA: 0x6CA630
        System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> xys();  // RVA: 0x6CA6A0
        UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> xyt();  // RVA: 0x6CA790
        bool xyu();  // RVA: 0x6CA850
        TimeCheatingDetector* xyv(float a, TimeCheatingDetectorEventHandler* b);  // RVA: 0x6CA980
        bool xyw(TimeCheatingDetector* a);  // RVA: 0x6CAAD0
        void xuh();  // RVA: 0x6C8BA0
        bool xuc();  // RVA: 0x6C8A80
        void xue();  // RVA: 0x6C8B50
        void xud();  // RVA: 0x6C8AE0
        IEnumerator* xyx();  // RVA: 0x6CABA0
        void xyy();  // RVA: 0x6CAC10
        void xyz(OnlineTimeResult a);  // RVA: 0x6CAD50
        void xza(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x6CADE0
        void xzb(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x6CAEA0
        void xzc(Action* a);  // RVA: 0x6CAF60
        void xzd(Action* a);  // RVA: 0x6CB010
        static double xze(Il2CppString* a);  // RVA: 0x6CB0C0
        static void xzf(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x63E350
        static void xzg(Action* a, int32_t b);  // RVA: 0x63E350
        static void xzh(Action* a, System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> b, int32_t c);  // RVA: 0x63E350
        static void xzi(float a, Action* b, System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> c, Action* d);  // RVA: 0x63E350
        void .ctor();  // RVA: 0x6C8960
        static void .cctor();  // RVA: 0x6C8840
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcu
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool <bmvq>k__BackingField; // 0x0010
    bool <bmvr>k__BackingField; // 0x0011
    bool <bmvs>k__BackingField; // 0x0012
    bool <bmvt>k__BackingField; // 0x0013

    // Methods
    bool xzj();  // RVA: 0x6705A0
    bool xzk();  // RVA: 0x67D860
    bool xzl();  // RVA: 0x6DDE60
    bool xzm();  // RVA: 0x6DDE70
    void .ctor(bool a, bool b, bool c, bool d);  // RVA: 0x6DED00
    Il2CppString* xui();  // RVA: 0x6DEB90
    Il2CppString* ToString();  // RVA: 0x6DEB90
};

// Namespace: <global>
class dcv
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmvu; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmvv; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    WallHackDetector* bmvw; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RenderTexture* bmvx; // 0x0028

    // Methods
    void .ctor(int32_t a);  // RVA: 0x67D2D0
    void xzn();  // RVA: 0x63E350
    bool MoveNext();  // RVA: 0x6F2060
    Il2CppObject* xzo();  // RVA: 0x691970
    void xzp();  // RVA: 0x6F2690
    Il2CppObject* xzq();  // RVA: 0x691970
};

// Namespace: <global>
class dcw
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmvy; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmvz; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    WallHackDetector* bmwa; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x67D2D0
    void xzr();  // RVA: 0x63E350
    bool MoveNext();  // RVA: 0x6F26D0
    Il2CppObject* xzs();  // RVA: 0x691970
    void xzt();  // RVA: 0x6F2790
    Il2CppObject* xzu();  // RVA: 0x691970
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class WallHackDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static int32_t bmwf;
        // static float bmwh;
        // static int32_t bmwg;
        // static int32_t bmwe;
        // static Il2CppString* bmwd;
        // static Il2CppString* bmwc;
        // static Il2CppString* bmwb;
        // static Il2CppString* ComponentName;
    
        uint8_t pad_0000[0x60]; // 0x0000
        Vector3 bmwi; // 0x0060
        uint8_t pad_0061[0xF]; // 0x0061
        WaitForEndOfFrame* bmwj; // 0x0070
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
        GameObject* bmwk; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        GameObject* bmwl; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* bmwm; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Camera* bmwn; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        MeshRenderer* bmwo; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        MeshRenderer* bmwp; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Color bmwq; // 0x00C8
        uint8_t pad_00C9[0xF]; // 0x00C9
        Color bmwr; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        Shader* bmws; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Material* bmwt; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        Texture2D* bmwu; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Texture2D* bmwv; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        RenderTexture* bmww; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        int32_t bmwx; // 0x0110
        uint8_t pad_0111[0x3]; // 0x0111
        int32_t bmwy; // 0x0114
        uint8_t pad_0115[0x3]; // 0x0115
        Rigidbody* bmwz; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        CharacterController* bmxa; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        float bmxb; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        uint8_t bmxc; // 0x012C
        uint8_t bmxd; // 0x012D
        uint8_t bmxe; // 0x012E
        uint8_t bmxf; // 0x012F
        bool bmxg; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        RaycastHit[][] bmxh; // 0x0138
    
        // Methods
        dcu* xzv();  // RVA: 0x6CF6E0
        bool xzw();  // RVA: 0x6CF760
        void xzx(bool a);  // RVA: 0x6CF770
        bool xzy();  // RVA: 0x6CF840
        void xzz(bool a);  // RVA: 0x6CF850
        bool yaa();  // RVA: 0x6CF920
        void yab(bool a);  // RVA: 0x6CF930
        bool yac();  // RVA: 0x6CFA00
        void yad(bool a);  // RVA: 0x6CFA10
        static WallHackDetector* yae();  // RVA: 0x6CFAE0
        static WallHackDetector* yaf();  // RVA: 0x6CFB10
        static WallHackDetector* yag(Action* a);  // RVA: 0x6CFD40
        static WallHackDetector* yah(Action* a, Vector3 b);  // RVA: 0x6CFE40
        static WallHackDetector* yai(Action* a, Vector3 b, uint8_t c);  // RVA: 0x6CFF00
        static void yaj();  // RVA: 0x6CFF90
        static void yak();  // RVA: 0x6D00A0
        void yal();  // RVA: 0x6D01B0
        void .ctor();  // RVA: 0x6CF370
        void OnDestroy();  // RVA: 0x6CE690
        void FixedUpdate();  // RVA: 0x6CE5A0
        void Update();  // RVA: 0x6CF1F0
        WallHackDetector* yam(Action* a, Vector3 b, uint8_t c);  // RVA: 0x6D0290
        void xuh();  // RVA: 0x6CF6A0
        void xue();  // RVA: 0x6CF510
        bool xuf();  // RVA: 0x6CF610
        void xud();  // RVA: 0x6CF4A0
        void yan();  // RVA: 0x6D0530
        IEnumerator* yao();  // RVA: 0x6D1BC0
        void StartRigidModule();  // RVA: 0x6CED70
        void StartControllerModule();  // RVA: 0x6CEB20
        void yap();  // RVA: 0x6D1C30
        void ShootWireframeModule();  // RVA: 0x6CEA50
        IEnumerator* yaq();  // RVA: 0x6D1D00
        bool yar(Color a, Color b);  // RVA: 0x6D1D70
        void yas();  // RVA: 0x6D1E60
        void ShootRaycastModule();  // RVA: 0x6CE840
        void yat();  // RVA: 0x6D1F20
        void yau();  // RVA: 0x6D2010
        void yav();  // RVA: 0x6D20B0
        void yaw();  // RVA: 0x6D2140
        void yax();  // RVA: 0x6D21A0
        void yay();  // RVA: 0x6D2200
        void yaz();  // RVA: 0x6D23A0
        void yba();  // RVA: 0x6D2570
        void ybb();  // RVA: 0x6D2630
        bool ybc();  // RVA: 0x6D26F0
        static Color32 ybd();  // RVA: 0x6D27D0
        static bool ybe(Color32 a, Color32 b, int32_t c);  // RVA: 0x6D2820
    };

} // namespace CodeStage.AntiCheat.Detectors

namespace CodeStage.AntiCheat.Common
{

    // Namespace: CodeStage.AntiCheat.Common
    class ACTk
    {
    public:
        // Static fields
        // static Il2CppString* bmxi;
        // static Il2CppString* bmxj;
        // static Il2CppString* bmxk;
        // static Il2CppString* bmxl;
        // static Char[][] bmxm;
        // static Il2CppString* bmxn;
        // static Il2CppString* bmxo;
    
    
        // Methods
        static void GetUnityInfo();  // RVA: 0x6DF1A0
        static void ybf(Il2CppString* a, Exception* b);  // RVA: 0x6DF330
        static void ybg(Il2CppString* a, Il2CppString* b, Exception* c);  // RVA: 0x6DF410
        static Il2CppString* ybh(Il2CppString* a, Il2CppString* b, Exception* c);  // RVA: 0x6DF4D0
        static Il2CppString* ybi(Exception* a);  // RVA: 0x6DF6E0
        static void .cctor();  // RVA: 0x6DF2A0
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
        bool Equals(ACTkByte16 other);  // RVA: 0x6DEEC0
        bool Equals(Il2CppObject* obj);  // RVA: 0x6DED60
        int32_t GetHashCode();  // RVA: 0x6DEF60
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
        void ybj();  // RVA: 0x6DF120
        void ybk();  // RVA: 0x6DF130
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
        void ybl();  // RVA: 0x6DF140
        void ybm();  // RVA: 0x6DF170
    };

    // Namespace: CodeStage.AntiCheat.Common
    class BackgroundThreadAccessException : public Exception
    {
    public:
        uint8_t pad_0000[0x90]; // 0x0000
        Il2CppString* <bmxp>k__BackingField; // 0x0090
    
        // Methods
        Il2CppString* ybn();  // RVA: 0x6DFCC0
        void .ctor(Il2CppString* apiName);  // RVA: 0x6DFAD0
    };

    // Namespace: CodeStage.AntiCheat.Common
    class ContainerHolder
    {
    public:
        // Static fields
        // static Il2CppString* bmxq;
        // static GameObject* container;
        // static bool bmxr;
    
    
        // Methods
        static void AfterAssembliesLoaded();  // RVA: 0x6DFCD0
        static void BeforeSplashScreen();  // RVA: 0x6DFE90
        static void BeforeSceneLoad();  // RVA: 0x6DFDB0
        static void ybo(Il2CppString* a);  // RVA: 0x6DFF70
        static a ybp();  // RVA: 0x5640F0
        static void ybq(GameObject* a);  // RVA: 0x6E0150
    };

} // namespace CodeStage.AntiCheat.Common

// Namespace: <global>
class dcx`1 : public MonoBehaviour
{
public:
    // Static fields
    // static a <bmxv>k__BackingField;

    bool keepAlive; // 0x0000
    int32_t bmxs; // 0x0000
    bool bmxt; // 0x0000
    Scene bmxu; // 0x0000

    // Methods
    static a ybr();  // RVA: 0x5640F0
    static void ybs(a a);  // RVA: 0x5640F0
    static a ybt();  // RVA: 0x5640F0
    void Awake();  // RVA: 0x430790
    void Start();  // RVA: 0x430790
    void OnDestroy();  // RVA: 0x430790
    void wci(Scene a, LoadSceneMode b);
    void ybu(Scene a);
    bool xyw(a a);  // RVA: 0x5640F0
    void ybv();  // RVA: 0x430790
    void .ctor();  // RVA: 0x430790
};

// Namespace: <global>
class dcy
{
public:
    // Static fields
    // static Il2CppString* bmxw;
    // static Il2CppString* bmxx;
    // static System.Nullable<System.Boolean> bmxy;


    // Methods
    static void ybw(bool a);  // RVA: 0x6F2D10
    static Il2CppString* iem();  // RVA: 0x6F28D0
    static Il2CppString* yca();  // RVA: 0x6F3130
    static Il2CppString* ybx();  // RVA: 0x6F2E50
    static Il2CppString* ody();  // RVA: 0x6F2C10
    static Il2CppString* fxj();  // RVA: 0x6F27D0
    static void obv(bool a);  // RVA: 0x6F2AD0
    static Il2CppString* yby();  // RVA: 0x6F2F50
    static Il2CppString* jka();  // RVA: 0x6F29D0
    static bool ybz();  // RVA: 0x6F3050
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
    // static __StaticArrayInitTypeSize=16301 8050B2B12C964E51DAFCD7872574EDEC8BEFEE9A748ED7DB178F4B905886FD48;
    // static __StaticArrayInitTypeSize=8908 960E9F455E327A7BA11EC96E9FEC1ABC9FF773E6E9D936567E2761A0AA65C3A7;

};

// Namespace: <global>
struct a_
{
public:
};

namespace <PrivateImplementationDetails>{174E61E3-8876-4D58-8730-F8815D216B9C}
{

    // Namespace: <PrivateImplementationDetails>{174E61E3-8876-4D58-8730-F8815D216B9C}
    class a
    {
    public:
        // Static fields
        // static a_ a_;
        // static Byte[][] a__;
        // static String[][] a___;
    
    
        // Methods
        static Il2CppString* a_(int32_t param0, int32_t param1, int32_t param2);  // RVA: 0x6E0460
        static Il2CppString* a();  // RVA: 0x6E0550
        static Il2CppString* b();  // RVA: 0x6E05E0
        static Il2CppString* c();  // RVA: 0x6E16C0
        static Il2CppString* d();  // RVA: 0x6E27A0
        static Il2CppString* e();  // RVA: 0x6E3880
        static Il2CppString* f();  // RVA: 0x6E4960
        static Il2CppString* g();  // RVA: 0x6E5A40
        static Il2CppString* h();  // RVA: 0x6E6B20
        static Il2CppString* i();  // RVA: 0x6E7C00
        static Il2CppString* j();  // RVA: 0x6E8CE0
        static Il2CppString* k();  // RVA: 0x6E9DC0
        static Il2CppString* l();  // RVA: 0x6EAEA0
        static Il2CppString* m();  // RVA: 0x6EBF80
        static Il2CppString* n();  // RVA: 0x6ED060
        static Il2CppString* o();  // RVA: 0x6EE140
        static Il2CppString* p();  // RVA: 0x6EF220
        static Il2CppString* q();  // RVA: 0x6F0300
        static Il2CppString* r();  // RVA: 0x6F13E0
        static Il2CppString* s();  // RVA: 0x6F1B60
        static Il2CppString* t();  // RVA: 0x6F1C00
        static Il2CppString* u();  // RVA: 0x6F1CA0
        static Il2CppString* v();  // RVA: 0x6F1D40
        static Il2CppString* w();  // RVA: 0x6F1DE0
        static Il2CppString* x();  // RVA: 0x6F1E80
        static Il2CppString* y();  // RVA: 0x6F1F20
        static Il2CppString* z();  // RVA: 0x6F1FC0
        static Il2CppString* ba();  // RVA: 0x6E0680
        static Il2CppString* bb();  // RVA: 0x6E0720
        static Il2CppString* bc();  // RVA: 0x6E07C0
        static Il2CppString* bd();  // RVA: 0x6E0860
        static Il2CppString* be();  // RVA: 0x6E0900
        static Il2CppString* bf();  // RVA: 0x6E09A0
        static Il2CppString* bg();  // RVA: 0x6E0A40
        static Il2CppString* bh();  // RVA: 0x6E0AE0
        static Il2CppString* bi();  // RVA: 0x6E0B80
        static Il2CppString* bj();  // RVA: 0x6E0C20
        static Il2CppString* bk();  // RVA: 0x6E0CC0
        static Il2CppString* bl();  // RVA: 0x6E0D60
        static Il2CppString* bm();  // RVA: 0x6E0E00
        static Il2CppString* bn();  // RVA: 0x6E0EA0
        static Il2CppString* bo();  // RVA: 0x6E0F40
        static Il2CppString* bp();  // RVA: 0x6E0FE0
        static Il2CppString* bq();  // RVA: 0x6E1080
        static Il2CppString* br();  // RVA: 0x6E1120
        static Il2CppString* bs();  // RVA: 0x6E11C0
        static Il2CppString* bt();  // RVA: 0x6E1260
        static Il2CppString* bu();  // RVA: 0x6E1300
        static Il2CppString* bv();  // RVA: 0x6E13A0
        static Il2CppString* bw();  // RVA: 0x6E1440
        static Il2CppString* bx();  // RVA: 0x6E14E0
        static Il2CppString* by();  // RVA: 0x6E1580
        static Il2CppString* bz();  // RVA: 0x6E1620
        static Il2CppString* ca();  // RVA: 0x6E1760
        static Il2CppString* cb();  // RVA: 0x6E1800
        static Il2CppString* cc();  // RVA: 0x6E18A0
        static Il2CppString* cd();  // RVA: 0x6E1940
        static Il2CppString* ce();  // RVA: 0x6E19E0
        static Il2CppString* cf();  // RVA: 0x6E1A80
        static Il2CppString* cg();  // RVA: 0x6E1B20
        static Il2CppString* ch();  // RVA: 0x6E1BC0
        static Il2CppString* ci();  // RVA: 0x6E1C60
        static Il2CppString* cj();  // RVA: 0x6E1D00
        static Il2CppString* ck();  // RVA: 0x6E1DA0
        static Il2CppString* cl();  // RVA: 0x6E1E40
        static Il2CppString* cm();  // RVA: 0x6E1EE0
        static Il2CppString* cn();  // RVA: 0x6E1F80
        static Il2CppString* co();  // RVA: 0x6E2020
        static Il2CppString* cp();  // RVA: 0x6E20C0
        static Il2CppString* cq();  // RVA: 0x6E2160
        static Il2CppString* cr();  // RVA: 0x6E2200
        static Il2CppString* cs();  // RVA: 0x6E22A0
        static Il2CppString* ct();  // RVA: 0x6E2340
        static Il2CppString* cu();  // RVA: 0x6E23E0
        static Il2CppString* cv();  // RVA: 0x6E2480
        static Il2CppString* cw();  // RVA: 0x6E2520
        static Il2CppString* cx();  // RVA: 0x6E25C0
        static Il2CppString* cy();  // RVA: 0x6E2660
        static Il2CppString* cz();  // RVA: 0x6E2700
        static Il2CppString* da();  // RVA: 0x6E2840
        static Il2CppString* db();  // RVA: 0x6E28E0
        static Il2CppString* dc();  // RVA: 0x6E2980
        static Il2CppString* dd();  // RVA: 0x6E2A20
        static Il2CppString* de();  // RVA: 0x6E2AC0
        static Il2CppString* df();  // RVA: 0x6E2B60
        static Il2CppString* dg();  // RVA: 0x6E2C00
        static Il2CppString* dh();  // RVA: 0x6E2CA0
        static Il2CppString* di();  // RVA: 0x6E2D40
        static Il2CppString* dj();  // RVA: 0x6E2DE0
        static Il2CppString* dk();  // RVA: 0x6E2E80
        static Il2CppString* dl();  // RVA: 0x6E2F20
        static Il2CppString* dm();  // RVA: 0x6E2FC0
        static Il2CppString* dn();  // RVA: 0x6E3060
        static Il2CppString* do();  // RVA: 0x6E3100
        static Il2CppString* dp();  // RVA: 0x6E31A0
        static Il2CppString* dq();  // RVA: 0x6E3240
        static Il2CppString* dr();  // RVA: 0x6E32E0
        static Il2CppString* ds();  // RVA: 0x6E3380
        static Il2CppString* dt();  // RVA: 0x6E3420
        static Il2CppString* du();  // RVA: 0x6E34C0
        static Il2CppString* dv();  // RVA: 0x6E3560
        static Il2CppString* dw();  // RVA: 0x6E3600
        static Il2CppString* dx();  // RVA: 0x6E36A0
        static Il2CppString* dy();  // RVA: 0x6E3740
        static Il2CppString* dz();  // RVA: 0x6E37E0
        static Il2CppString* ea();  // RVA: 0x6E3920
        static Il2CppString* eb();  // RVA: 0x6E39C0
        static Il2CppString* ec();  // RVA: 0x6E3A60
        static Il2CppString* ed();  // RVA: 0x6E3B00
        static Il2CppString* ee();  // RVA: 0x6E3BA0
        static Il2CppString* ef();  // RVA: 0x6E3C40
        static Il2CppString* eg();  // RVA: 0x6E3CE0
        static Il2CppString* eh();  // RVA: 0x6E3D80
        static Il2CppString* ei();  // RVA: 0x6E3E20
        static Il2CppString* ej();  // RVA: 0x6E3EC0
        static Il2CppString* ek();  // RVA: 0x6E3F60
        static Il2CppString* el();  // RVA: 0x6E4000
        static Il2CppString* em();  // RVA: 0x6E40A0
        static Il2CppString* en();  // RVA: 0x6E4140
        static Il2CppString* eo();  // RVA: 0x6E41E0
        static Il2CppString* ep();  // RVA: 0x6E4280
        static Il2CppString* eq();  // RVA: 0x6E4320
        static Il2CppString* er();  // RVA: 0x6E43C0
        static Il2CppString* es();  // RVA: 0x6E4460
        static Il2CppString* et();  // RVA: 0x6E4500
        static Il2CppString* eu();  // RVA: 0x6E45A0
        static Il2CppString* ev();  // RVA: 0x6E4640
        static Il2CppString* ew();  // RVA: 0x6E46E0
        static Il2CppString* ex();  // RVA: 0x6E4780
        static Il2CppString* ey();  // RVA: 0x6E4820
        static Il2CppString* ez();  // RVA: 0x6E48C0
        static Il2CppString* fa();  // RVA: 0x6E4A00
        static Il2CppString* fb();  // RVA: 0x6E4AA0
        static Il2CppString* fc();  // RVA: 0x6E4B40
        static Il2CppString* fd();  // RVA: 0x6E4BE0
        static Il2CppString* fe();  // RVA: 0x6E4C80
        static Il2CppString* ff();  // RVA: 0x6E4D20
        static Il2CppString* fg();  // RVA: 0x6E4DC0
        static Il2CppString* fh();  // RVA: 0x6E4E60
        static Il2CppString* fi();  // RVA: 0x6E4F00
        static Il2CppString* fj();  // RVA: 0x6E4FA0
        static Il2CppString* fk();  // RVA: 0x6E5040
        static Il2CppString* fl();  // RVA: 0x6E50E0
        static Il2CppString* fm();  // RVA: 0x6E5180
        static Il2CppString* fn();  // RVA: 0x6E5220
        static Il2CppString* fo();  // RVA: 0x6E52C0
        static Il2CppString* fp();  // RVA: 0x6E5360
        static Il2CppString* fq();  // RVA: 0x6E5400
        static Il2CppString* fr();  // RVA: 0x6E54A0
        static Il2CppString* fs();  // RVA: 0x6E5540
        static Il2CppString* ft();  // RVA: 0x6E55E0
        static Il2CppString* fu();  // RVA: 0x6E5680
        static Il2CppString* fv();  // RVA: 0x6E5720
        static Il2CppString* fw();  // RVA: 0x6E57C0
        static Il2CppString* fx();  // RVA: 0x6E5860
        static Il2CppString* fy();  // RVA: 0x6E5900
        static Il2CppString* fz();  // RVA: 0x6E59A0
        static Il2CppString* ga();  // RVA: 0x6E5AE0
        static Il2CppString* gb();  // RVA: 0x6E5B80
        static Il2CppString* gc();  // RVA: 0x6E5C20
        static Il2CppString* gd();  // RVA: 0x6E5CC0
        static Il2CppString* ge();  // RVA: 0x6E5D60
        static Il2CppString* gf();  // RVA: 0x6E5E00
        static Il2CppString* gg();  // RVA: 0x6E5EA0
        static Il2CppString* gh();  // RVA: 0x6E5F40
        static Il2CppString* gi();  // RVA: 0x6E5FE0
        static Il2CppString* gj();  // RVA: 0x6E6080
        static Il2CppString* gk();  // RVA: 0x6E6120
        static Il2CppString* gl();  // RVA: 0x6E61C0
        static Il2CppString* gm();  // RVA: 0x6E6260
        static Il2CppString* gn();  // RVA: 0x6E6300
        static Il2CppString* go();  // RVA: 0x6E63A0
        static Il2CppString* gp();  // RVA: 0x6E6440
        static Il2CppString* gq();  // RVA: 0x6E64E0
        static Il2CppString* gr();  // RVA: 0x6E6580
        static Il2CppString* gs();  // RVA: 0x6E6620
        static Il2CppString* gt();  // RVA: 0x6E66C0
        static Il2CppString* gu();  // RVA: 0x6E6760
        static Il2CppString* gv();  // RVA: 0x6E6800
        static Il2CppString* gw();  // RVA: 0x6E68A0
        static Il2CppString* gx();  // RVA: 0x6E6940
        static Il2CppString* gy();  // RVA: 0x6E69E0
        static Il2CppString* gz();  // RVA: 0x6E6A80
        static Il2CppString* ha();  // RVA: 0x6E6BC0
        static Il2CppString* hb();  // RVA: 0x6E6C60
        static Il2CppString* hc();  // RVA: 0x6E6D00
        static Il2CppString* hd();  // RVA: 0x6E6DA0
        static Il2CppString* he();  // RVA: 0x6E6E40
        static Il2CppString* hf();  // RVA: 0x6E6EE0
        static Il2CppString* hg();  // RVA: 0x6E6F80
        static Il2CppString* hh();  // RVA: 0x6E7020
        static Il2CppString* hi();  // RVA: 0x6E70C0
        static Il2CppString* hj();  // RVA: 0x6E7160
        static Il2CppString* hk();  // RVA: 0x6E7200
        static Il2CppString* hl();  // RVA: 0x6E72A0
        static Il2CppString* hm();  // RVA: 0x6E7340
        static Il2CppString* hn();  // RVA: 0x6E73E0
        static Il2CppString* ho();  // RVA: 0x6E7480
        static Il2CppString* hp();  // RVA: 0x6E7520
        static Il2CppString* hq();  // RVA: 0x6E75C0
        static Il2CppString* hr();  // RVA: 0x6E7660
        static Il2CppString* hs();  // RVA: 0x6E7700
        static Il2CppString* ht();  // RVA: 0x6E77A0
        static Il2CppString* hu();  // RVA: 0x6E7840
        static Il2CppString* hv();  // RVA: 0x6E78E0
        static Il2CppString* hw();  // RVA: 0x6E7980
        static Il2CppString* hx();  // RVA: 0x6E7A20
        static Il2CppString* hy();  // RVA: 0x6E7AC0
        static Il2CppString* hz();  // RVA: 0x6E7B60
        static Il2CppString* ia();  // RVA: 0x6E7CA0
        static Il2CppString* ib();  // RVA: 0x6E7D40
        static Il2CppString* ic();  // RVA: 0x6E7DE0
        static Il2CppString* id();  // RVA: 0x6E7E80
        static Il2CppString* ie();  // RVA: 0x6E7F20
        static Il2CppString* if();  // RVA: 0x6E7FC0
        static Il2CppString* ig();  // RVA: 0x6E8060
        static Il2CppString* ih();  // RVA: 0x6E8100
        static Il2CppString* ii();  // RVA: 0x6E81A0
        static Il2CppString* ij();  // RVA: 0x6E8240
        static Il2CppString* ik();  // RVA: 0x6E82E0
        static Il2CppString* il();  // RVA: 0x6E8380
        static Il2CppString* im();  // RVA: 0x6E8420
        static Il2CppString* in();  // RVA: 0x6E84C0
        static Il2CppString* io();  // RVA: 0x6E8560
        static Il2CppString* ip();  // RVA: 0x6E8600
        static Il2CppString* iq();  // RVA: 0x6E86A0
        static Il2CppString* ir();  // RVA: 0x6E8740
        static Il2CppString* is();  // RVA: 0x6E87E0
        static Il2CppString* it();  // RVA: 0x6E8880
        static Il2CppString* iu();  // RVA: 0x6E8920
        static Il2CppString* iv();  // RVA: 0x6E89C0
        static Il2CppString* iw();  // RVA: 0x6E8A60
        static Il2CppString* ix();  // RVA: 0x6E8B00
        static Il2CppString* iy();  // RVA: 0x6E8BA0
        static Il2CppString* iz();  // RVA: 0x6E8C40
        static Il2CppString* ja();  // RVA: 0x6E8D80
        static Il2CppString* jb();  // RVA: 0x6E8E20
        static Il2CppString* jc();  // RVA: 0x6E8EC0
        static Il2CppString* jd();  // RVA: 0x6E8F60
        static Il2CppString* je();  // RVA: 0x6E9000
        static Il2CppString* jf();  // RVA: 0x6E90A0
        static Il2CppString* jg();  // RVA: 0x6E9140
        static Il2CppString* jh();  // RVA: 0x6E91E0
        static Il2CppString* ji();  // RVA: 0x6E9280
        static Il2CppString* jj();  // RVA: 0x6E9320
        static Il2CppString* jk();  // RVA: 0x6E93C0
        static Il2CppString* jl();  // RVA: 0x6E9460
        static Il2CppString* jm();  // RVA: 0x6E9500
        static Il2CppString* jn();  // RVA: 0x6E95A0
        static Il2CppString* jo();  // RVA: 0x6E9640
        static Il2CppString* jp();  // RVA: 0x6E96E0
        static Il2CppString* jq();  // RVA: 0x6E9780
        static Il2CppString* jr();  // RVA: 0x6E9820
        static Il2CppString* js();  // RVA: 0x6E98C0
        static Il2CppString* jt();  // RVA: 0x6E9960
        static Il2CppString* ju();  // RVA: 0x6E9A00
        static Il2CppString* jv();  // RVA: 0x6E9AA0
        static Il2CppString* jw();  // RVA: 0x6E9B40
        static Il2CppString* jx();  // RVA: 0x6E9BE0
        static Il2CppString* jy();  // RVA: 0x6E9C80
        static Il2CppString* jz();  // RVA: 0x6E9D20
        static Il2CppString* ka();  // RVA: 0x6E9E60
        static Il2CppString* kb();  // RVA: 0x6E9F00
        static Il2CppString* kc();  // RVA: 0x6E9FA0
        static Il2CppString* kd();  // RVA: 0x6EA040
        static Il2CppString* ke();  // RVA: 0x6EA0E0
        static Il2CppString* kf();  // RVA: 0x6EA180
        static Il2CppString* kg();  // RVA: 0x6EA220
        static Il2CppString* kh();  // RVA: 0x6EA2C0
        static Il2CppString* ki();  // RVA: 0x6EA360
        static Il2CppString* kj();  // RVA: 0x6EA400
        static Il2CppString* kk();  // RVA: 0x6EA4A0
        static Il2CppString* kl();  // RVA: 0x6EA540
        static Il2CppString* km();  // RVA: 0x6EA5E0
        static Il2CppString* kn();  // RVA: 0x6EA680
        static Il2CppString* ko();  // RVA: 0x6EA720
        static Il2CppString* kp();  // RVA: 0x6EA7C0
        static Il2CppString* kq();  // RVA: 0x6EA860
        static Il2CppString* kr();  // RVA: 0x6EA900
        static Il2CppString* ks();  // RVA: 0x6EA9A0
        static Il2CppString* kt();  // RVA: 0x6EAA40
        static Il2CppString* ku();  // RVA: 0x6EAAE0
        static Il2CppString* kv();  // RVA: 0x6EAB80
        static Il2CppString* kw();  // RVA: 0x6EAC20
        static Il2CppString* kx();  // RVA: 0x6EACC0
        static Il2CppString* ky();  // RVA: 0x6EAD60
        static Il2CppString* kz();  // RVA: 0x6EAE00
        static Il2CppString* la();  // RVA: 0x6EAF40
        static Il2CppString* lb();  // RVA: 0x6EAFE0
        static Il2CppString* lc();  // RVA: 0x6EB080
        static Il2CppString* ld();  // RVA: 0x6EB120
        static Il2CppString* le();  // RVA: 0x6EB1C0
        static Il2CppString* lf();  // RVA: 0x6EB260
        static Il2CppString* lg();  // RVA: 0x6EB300
        static Il2CppString* lh();  // RVA: 0x6EB3A0
        static Il2CppString* li();  // RVA: 0x6EB440
        static Il2CppString* lj();  // RVA: 0x6EB4E0
        static Il2CppString* lk();  // RVA: 0x6EB580
        static Il2CppString* ll();  // RVA: 0x6EB620
        static Il2CppString* lm();  // RVA: 0x6EB6C0
        static Il2CppString* ln();  // RVA: 0x6EB760
        static Il2CppString* lo();  // RVA: 0x6EB800
        static Il2CppString* lp();  // RVA: 0x6EB8A0
        static Il2CppString* lq();  // RVA: 0x6EB940
        static Il2CppString* lr();  // RVA: 0x6EB9E0
        static Il2CppString* ls();  // RVA: 0x6EBA80
        static Il2CppString* lt();  // RVA: 0x6EBB20
        static Il2CppString* lu();  // RVA: 0x6EBBC0
        static Il2CppString* lv();  // RVA: 0x6EBC60
        static Il2CppString* lw();  // RVA: 0x6EBD00
        static Il2CppString* lx();  // RVA: 0x6EBDA0
        static Il2CppString* ly();  // RVA: 0x6EBE40
        static Il2CppString* lz();  // RVA: 0x6EBEE0
        static Il2CppString* ma();  // RVA: 0x6EC020
        static Il2CppString* mb();  // RVA: 0x6EC0C0
        static Il2CppString* mc();  // RVA: 0x6EC160
        static Il2CppString* md();  // RVA: 0x6EC200
        static Il2CppString* me();  // RVA: 0x6EC2A0
        static Il2CppString* mf();  // RVA: 0x6EC340
        static Il2CppString* mg();  // RVA: 0x6EC3E0
        static Il2CppString* mh();  // RVA: 0x6EC480
        static Il2CppString* mi();  // RVA: 0x6EC520
        static Il2CppString* mj();  // RVA: 0x6EC5C0
        static Il2CppString* mk();  // RVA: 0x6EC660
        static Il2CppString* ml();  // RVA: 0x6EC700
        static Il2CppString* mm();  // RVA: 0x6EC7A0
        static Il2CppString* mn();  // RVA: 0x6EC840
        static Il2CppString* mo();  // RVA: 0x6EC8E0
        static Il2CppString* mp();  // RVA: 0x6EC980
        static Il2CppString* mq();  // RVA: 0x6ECA20
        static Il2CppString* mr();  // RVA: 0x6ECAC0
        static Il2CppString* ms();  // RVA: 0x6ECB60
        static Il2CppString* mt();  // RVA: 0x6ECC00
        static Il2CppString* mu();  // RVA: 0x6ECCA0
        static Il2CppString* mv();  // RVA: 0x6ECD40
        static Il2CppString* mw();  // RVA: 0x6ECDE0
        static Il2CppString* mx();  // RVA: 0x6ECE80
        static Il2CppString* my();  // RVA: 0x6ECF20
        static Il2CppString* mz();  // RVA: 0x6ECFC0
        static Il2CppString* na();  // RVA: 0x6ED100
        static Il2CppString* nb();  // RVA: 0x6ED1A0
        static Il2CppString* nc();  // RVA: 0x6ED240
        static Il2CppString* nd();  // RVA: 0x6ED2E0
        static Il2CppString* ne();  // RVA: 0x6ED380
        static Il2CppString* nf();  // RVA: 0x6ED420
        static Il2CppString* ng();  // RVA: 0x6ED4C0
        static Il2CppString* nh();  // RVA: 0x6ED560
        static Il2CppString* ni();  // RVA: 0x6ED600
        static Il2CppString* nj();  // RVA: 0x6ED6A0
        static Il2CppString* nk();  // RVA: 0x6ED740
        static Il2CppString* nl();  // RVA: 0x6ED7E0
        static Il2CppString* nm();  // RVA: 0x6ED880
        static Il2CppString* nn();  // RVA: 0x6ED920
        static Il2CppString* no();  // RVA: 0x6ED9C0
        static Il2CppString* np();  // RVA: 0x6EDA60
        static Il2CppString* nq();  // RVA: 0x6EDB00
        static Il2CppString* nr();  // RVA: 0x6EDBA0
        static Il2CppString* ns();  // RVA: 0x6EDC40
        static Il2CppString* nt();  // RVA: 0x6EDCE0
        static Il2CppString* nu();  // RVA: 0x6EDD80
        static Il2CppString* nv();  // RVA: 0x6EDE20
        static Il2CppString* nw();  // RVA: 0x6EDEC0
        static Il2CppString* nx();  // RVA: 0x6EDF60
        static Il2CppString* ny();  // RVA: 0x6EE000
        static Il2CppString* nz();  // RVA: 0x6EE0A0
        static Il2CppString* oa();  // RVA: 0x6EE1E0
        static Il2CppString* ob();  // RVA: 0x6EE280
        static Il2CppString* oc();  // RVA: 0x6EE320
        static Il2CppString* od();  // RVA: 0x6EE3C0
        static Il2CppString* oe();  // RVA: 0x6EE460
        static Il2CppString* of();  // RVA: 0x6EE500
        static Il2CppString* og();  // RVA: 0x6EE5A0
        static Il2CppString* oh();  // RVA: 0x6EE640
        static Il2CppString* oi();  // RVA: 0x6EE6E0
        static Il2CppString* oj();  // RVA: 0x6EE780
        static Il2CppString* ok();  // RVA: 0x6EE820
        static Il2CppString* ol();  // RVA: 0x6EE8C0
        static Il2CppString* om();  // RVA: 0x6EE960
        static Il2CppString* on();  // RVA: 0x6EEA00
        static Il2CppString* oo();  // RVA: 0x6EEAA0
        static Il2CppString* op();  // RVA: 0x6EEB40
        static Il2CppString* oq();  // RVA: 0x6EEBE0
        static Il2CppString* or();  // RVA: 0x6EEC80
        static Il2CppString* os();  // RVA: 0x6EED20
        static Il2CppString* ot();  // RVA: 0x6EEDC0
        static Il2CppString* ou();  // RVA: 0x6EEE60
        static Il2CppString* ov();  // RVA: 0x6EEF00
        static Il2CppString* ow();  // RVA: 0x6EEFA0
        static Il2CppString* ox();  // RVA: 0x6EF040
        static Il2CppString* oy();  // RVA: 0x6EF0E0
        static Il2CppString* oz();  // RVA: 0x6EF180
        static Il2CppString* pa();  // RVA: 0x6EF2C0
        static Il2CppString* pb();  // RVA: 0x6EF360
        static Il2CppString* pc();  // RVA: 0x6EF400
        static Il2CppString* pd();  // RVA: 0x6EF4A0
        static Il2CppString* pe();  // RVA: 0x6EF540
        static Il2CppString* pf();  // RVA: 0x6EF5E0
        static Il2CppString* pg();  // RVA: 0x6EF680
        static Il2CppString* ph();  // RVA: 0x6EF720
        static Il2CppString* pi();  // RVA: 0x6EF7C0
        static Il2CppString* pj();  // RVA: 0x6EF860
        static Il2CppString* pk();  // RVA: 0x6EF900
        static Il2CppString* pl();  // RVA: 0x6EF9A0
        static Il2CppString* pm();  // RVA: 0x6EFA40
        static Il2CppString* pn();  // RVA: 0x6EFAE0
        static Il2CppString* po();  // RVA: 0x6EFB80
        static Il2CppString* pp();  // RVA: 0x6EFC20
        static Il2CppString* pq();  // RVA: 0x6EFCC0
        static Il2CppString* pr();  // RVA: 0x6EFD60
        static Il2CppString* ps();  // RVA: 0x6EFE00
        static Il2CppString* pt();  // RVA: 0x6EFEA0
        static Il2CppString* pu();  // RVA: 0x6EFF40
        static Il2CppString* pv();  // RVA: 0x6EFFE0
        static Il2CppString* pw();  // RVA: 0x6F0080
        static Il2CppString* px();  // RVA: 0x6F0120
        static Il2CppString* py();  // RVA: 0x6F01C0
        static Il2CppString* pz();  // RVA: 0x6F0260
        static Il2CppString* qa();  // RVA: 0x6F03A0
        static Il2CppString* qb();  // RVA: 0x6F0440
        static Il2CppString* qc();  // RVA: 0x6F04E0
        static Il2CppString* qd();  // RVA: 0x6F0580
        static Il2CppString* qe();  // RVA: 0x6F0620
        static Il2CppString* qf();  // RVA: 0x6F06C0
        static Il2CppString* qg();  // RVA: 0x6F0760
        static Il2CppString* qh();  // RVA: 0x6F0800
        static Il2CppString* qi();  // RVA: 0x6F08A0
        static Il2CppString* qj();  // RVA: 0x6F0940
        static Il2CppString* qk();  // RVA: 0x6F09E0
        static Il2CppString* ql();  // RVA: 0x6F0A80
        static Il2CppString* qm();  // RVA: 0x6F0B20
        static Il2CppString* qn();  // RVA: 0x6F0BC0
        static Il2CppString* qo();  // RVA: 0x6F0C60
        static Il2CppString* qp();  // RVA: 0x6F0D00
        static Il2CppString* qq();  // RVA: 0x6F0DA0
        static Il2CppString* qr();  // RVA: 0x6F0E40
        static Il2CppString* qs();  // RVA: 0x6F0EE0
        static Il2CppString* qt();  // RVA: 0x6F0F80
        static Il2CppString* qu();  // RVA: 0x6F1020
        static Il2CppString* qv();  // RVA: 0x6F10C0
        static Il2CppString* qw();  // RVA: 0x6F1160
        static Il2CppString* qx();  // RVA: 0x6F1200
        static Il2CppString* qy();  // RVA: 0x6F12A0
        static Il2CppString* qz();  // RVA: 0x6F1340
        static Il2CppString* ra();  // RVA: 0x6F1480
        static Il2CppString* rb();  // RVA: 0x6F1520
        static Il2CppString* rc();  // RVA: 0x6F15C0
        static Il2CppString* rd();  // RVA: 0x6F1660
        static Il2CppString* re();  // RVA: 0x6F1700
        static Il2CppString* rf();  // RVA: 0x6F17A0
        static Il2CppString* rg();  // RVA: 0x6F1840
        static Il2CppString* rh();  // RVA: 0x6F18E0
        static Il2CppString* ri();  // RVA: 0x6F1980
        static Il2CppString* rj();  // RVA: 0x6F1A20
        static Il2CppString* rk();  // RVA: 0x6F1AC0
        static void .cctor();  // RVA: 0x6E02F0
    };

} // namespace <PrivateImplementationDetails>{174E61E3-8876-4D58-8730-F8815D216B9C}
