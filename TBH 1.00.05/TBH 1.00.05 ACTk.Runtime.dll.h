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
        void .ctor();  // RVA: 0x668030
    };

} // namespace Microsoft.CodeAnalysis

namespace System.Runtime.CompilerServices
{

    // Namespace: System.Runtime.CompilerServices
    class IsUnmanagedAttribute : public Attribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x668030
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
    static MonoScriptData vyf();  // RVA: 0x668DC0
    void .ctor();  // RVA: 0x629570
    static MonoScriptData jgh();  // RVA: 0x668CE0
};

// Namespace: <global>
class dan
{
public:

    // Methods
    static void ksw();  // RVA: 0x634510
    static void lck();  // RVA: 0x634510
    static void vyg();  // RVA: 0x634510
    static void nrp();  // RVA: 0x634510
    static void eav();  // RVA: 0x634510
    static void vyh();  // RVA: 0x634510
};

// Namespace: <global>
class ApplicationFocusEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x667F20
    void Invoke(bool hasFocus);  // RVA: 0x667F10
    IAsyncResult* BeginInvoke(bool hasFocus, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x667EA0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x667F00
};

// Namespace: <global>
class ApplicationPauseEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x667F20
    void Invoke(bool pauseStatus);  // RVA: 0x667F10
    IAsyncResult* BeginInvoke(bool pauseStatus, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x667EA0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x667F00
};

// Namespace: <global>
class dao : public MonoBehaviour
{
public:
    // Static fields
    // static dao* bmmf;

    uint8_t pad_0000[0x20]; // 0x0000
    ApplicationFocusEventHandler* bmmd; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ApplicationPauseEventHandler* bmme; // 0x0028

    // Methods
    void mbf(bool pauseStatus);  // RVA: 0x668F60
    void Awake();  // RVA: 0x668EA0
    void OnApplicationFocus(bool hasFocus);  // RVA: 0x668F40
    void lsi();  // RVA: 0x668F80
    static dao* vym();  // RVA: 0x669340
    void vyj(ApplicationFocusEventHandler* a);  // RVA: 0x669160
    void vyi(ApplicationFocusEventHandler* a);  // RVA: 0x6690C0
    void OnApplicationPause(bool pauseStatus);  // RVA: 0x668F60
    void .ctor();  // RVA: 0x629A00
    void bst(bool pauseStatus);  // RVA: 0x668F60
    void nx();  // RVA: 0x669020
    void vyl(ApplicationPauseEventHandler* a);  // RVA: 0x6692A0
    void gzj(bool pauseStatus);  // RVA: 0x668F60
    void vyk(ApplicationPauseEventHandler* a);  // RVA: 0x669200
};

// Namespace: <global>
class dap
{
public:

    // Methods
    static Il2CppString* onn(Char[][] a);  // RVA: 0x6698F0
    static Char[][] kwn(Il2CppString* a);  // RVA: 0x669730
    static Il2CppString* ewv(Il2CppString* a);  // RVA: 0x669580
    static Il2CppString* ix(Char[][] a);  // RVA: 0x669620
    static Char[][] vyo(Il2CppString* a);  // RVA: 0x669AA0
    static Il2CppString* vyp(Il2CppString* a);  // RVA: 0x669B40
    static Il2CppString* nka(Il2CppString* a);  // RVA: 0x6697D0
    static Il2CppString* erg(Char[][] a);  // RVA: 0x669470
    static Il2CppString* vyq(Char[][] a);  // RVA: 0x669C60
    static Il2CppString* vyn(Il2CppString* a);  // RVA: 0x669A00
};

// Namespace: <global>
class daq
{
public:
    // Static fields
    // static int32_t bmmg;
    // static uint8_t bmmh;
    // static uint8_t bmmi;
    // static uint8_t bmmj;
    // static uint8_t bmmk;
    // static uint8_t bmml;


    // Methods
    static void gzp(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x669FA0
    static void vys(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x66A240
    static void fts(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x669DE0
    static void vyu(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x66A320
    static void gix(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x669EC0
    static void vyr(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x66A1D0
    static void vyt(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x66A2B0
    static void jyy(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x66A0F0
    static void vyv(Stream* a, Stream* b, Byte[][] c, uint8_t d);  // RVA: 0x564EA0
    static void ner(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x66A160
    static void fuq(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x669E50
    static void gxi(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x669F30
    static void bau(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x669D70
    static void vyw(Stream* a, Stream* b, Byte[][] c, uint8_t d, uint8_t e);  // RVA: 0x41A480
    static void jdm(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x66A080
    static void itm(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x66A010
};

// Namespace: <global>
class dar
{
public:
    // Static fields
    // static int32_t bmmm;


    // Methods
    static int32_t cx(bool a);  // RVA: 0x66A810
    static bool tt(Guid a, int32_t b);  // RVA: 0x66A430
    static bool vzb(int64_t a, int32_t b);  // RVA: 0x66B6A0
    static int32_t brk(float a);  // RVA: 0x66A4D0
    static bool bzf(uint32_t a, int32_t b);  // RVA: 0x66A580
    static bool fko(bool a, int32_t b);  // RVA: 0x66A4B0
    static bool vyz(Decimal a, int32_t b);  // RVA: 0x66A850
    static bool vzm(DateTimeOffset a, int32_t b);  // RVA: 0x66B5B0
    static bool vzf(Vector2 a, int32_t b);  // RVA: 0x66B500
    static int32_t dfo(Vector2Int a);  // RVA: 0x66A390
    static bool hjd(Guid a, int32_t b);  // RVA: 0x66A430
    static bool ese(Vector2Int a, int32_t b);  // RVA: 0x66ABB0
    static bool lpm(float a, int32_t b);  // RVA: 0x66A520
    static int32_t wad(Vector2Int a);  // RVA: 0x66A390
    static int32_t cnb(Vector3Int a);  // RVA: 0x66A710
    static bool vzi(Vector3Int a, int32_t b);  // RVA: 0x66A820
    static bool vzn(Guid a, int32_t b);  // RVA: 0x66A430
    static int32_t ebq(int32_t a);  // RVA: 0x66AA50
    static bool efp(float a, int32_t b);  // RVA: 0x66A520
    static int32_t dn(uint32_t a);  // RVA: 0x66A8C0
    static bool vzj(float a, int32_t b);  // RVA: 0x66A520
    static int32_t vzs(int32_t a);  // RVA: 0x66A8C0
    static int32_t obz(BigInteger a);  // RVA: 0x66BFB0
    static int32_t xk(uint32_t a);  // RVA: 0x66A8C0
    static int32_t vzv(Guid a);  // RVA: 0x66CC50
    static bool gav(Vector2Int a, int32_t b);  // RVA: 0x66ABB0
    static bool nky(uint32_t a, int32_t b);  // RVA: 0x66A580
    static int32_t vzq(bool a);  // RVA: 0x66C8A0
    static int32_t vzz(float a);  // RVA: 0x66A4D0
    static bool vzg(Vector2Int a, int32_t b);  // RVA: 0x66ABB0
    static bool er(BigInteger a, int32_t b);  // RVA: 0x66AB80
    static bool lhm(Vector2 a, int32_t b);  // RVA: 0x66B500
    static int32_t lgh(Char[][] a);  // RVA: 0x66BC30
    static bool hda(Vector3Int a, int32_t b);  // RVA: 0x66A820
    static bool kbr(BigInteger a, int32_t b);  // RVA: 0x66AB80
    static int32_t nlq(uint32_t a);  // RVA: 0x66A8C0
    static int32_t jjl(uint32_t a);  // RVA: 0x66A8C0
    static int32_t bqg(Char[][] a);  // RVA: 0x66A460
    static bool vza(int32_t a, int32_t b);  // RVA: 0x66A580
    static int32_t foe(int64_t a);  // RVA: 0x66B060
    static int32_t wae(Vector3 a);  // RVA: 0x66AA90
    static bool jag(bool a, int32_t b);  // RVA: 0x66A4B0
    static int32_t fkx(DateTime a);  // RVA: 0x66AF70
    static bool dpe(Vector3Int a, int32_t b);  // RVA: 0x66A820
    static bool cyv(Decimal a, int32_t b);  // RVA: 0x66A850
    static int32_t msy(int64_t a);  // RVA: 0x66BEE0
    static int32_t fst(Quaternion a);  // RVA: 0x66A910
    static bool duu(int32_t a, int32_t b);  // RVA: 0x66A580
    static int32_t waa(double a);  // RVA: 0x66CFF0
    static bool vzl(Char[][] a, int32_t b);  // RVA: 0x66B750
    static bool oed(uint32_t a, int32_t b);  // RVA: 0x66A580
    static int32_t vzu(DateTimeOffset a);  // RVA: 0x66CB70
    static bool mzf(uint64_t a, int32_t b);  // RVA: 0x66B5E0
    static bool gub(DateTimeOffset a, int32_t b);  // RVA: 0x66B5B0
    static int32_t vzt(DateTime a);  // RVA: 0x66CA80
    static bool mxx(Quaternion a, int32_t b);  // RVA: 0x66BF80
    static int32_t vzp(BigInteger a);  // RVA: 0x66C5B0
    static bool nrm(Vector2 a, int32_t b);  // RVA: 0x66B500
    static int32_t vzo(a a);  // RVA: 0x564EA0
    static int32_t cbu(int32_t a);  // RVA: 0x66A5D0
    static int32_t bbc(Vector2Int a);  // RVA: 0x66A390
    static bool idj(Vector2Int a, int32_t b);  // RVA: 0x66ABB0
    static int32_t rw(Decimal a);  // RVA: 0x66C2A0
    static bool fid(BigInteger a, int32_t b);  // RVA: 0x66AB80
    static bool jkp(Vector2 a, int32_t b);  // RVA: 0x66B500
    static int32_t wah(Il2CppString* a);  // RVA: 0x66D160
    static bool kaz(Char[][] a, int32_t b);  // RVA: 0x66B750
    static bool csq(int32_t a, int32_t b);  // RVA: 0x66A580
    static int32_t vzr(Decimal a);  // RVA: 0x66C8B0
    static int32_t kcb(DateTime a);  // RVA: 0x66B7B0
    static int32_t ntl(Vector2Int a);  // RVA: 0x66A390
    static int32_t waf(Vector3Int a);  // RVA: 0x66D010
    static bool lug(DateTimeOffset a, int32_t b);  // RVA: 0x66B5B0
    static int32_t exe(Guid a);  // RVA: 0x66AC60
    static int32_t gis(int32_t a);  // RVA: 0x66B4C0
    static bool vzc(uint32_t a, int32_t b);  // RVA: 0x66A580
    static bool cys(Vector3Int a, int32_t b);  // RVA: 0x66A820
    static int32_t vzy(uint64_t a);  // RVA: 0x66CF50
    static int32_t kpm(BigInteger a);  // RVA: 0x66B8A0
    static int32_t fex(int64_t a);  // RVA: 0x66AED0
    static int32_t gfl(BigInteger a);  // RVA: 0x66B1D0
    static int32_t fpw(bool a);  // RVA: 0x66B0E0
    static bool vyx(BigInteger a, int32_t b);  // RVA: 0x66AB80
    static bool vzd(uint64_t a, int32_t b);  // RVA: 0x66B5E0
    static bool vyy(bool a, int32_t b);  // RVA: 0x66A4B0
    static int32_t vzw(int64_t a);  // RVA: 0x66CEB0
    static bool ncs(DateTimeOffset a, int32_t b);  // RVA: 0x66B5B0
    static bool mfg(Decimal a, int32_t b);  // RVA: 0x66A850
    static bool jxd(int64_t a, int32_t b);  // RVA: 0x66B6A0
    static int32_t jkg(bool a);  // RVA: 0x66B690
    static bool vze(Quaternion a, int32_t b);  // RVA: 0x66BF80
    static int32_t kwx(Vector2Int a);  // RVA: 0x66A390
    static bool izq(float a, int32_t b);  // RVA: 0x66A520
    static int32_t ltm(DateTimeOffset a);  // RVA: 0x66BC80
    static int32_t cdo(Vector3Int a);  // RVA: 0x66A610
    static int32_t fxc(DateTimeOffset a);  // RVA: 0x66B0F0
    static bool fnt(BigInteger a, int32_t b);  // RVA: 0x66AB80
    static int32_t vzx(uint32_t a);  // RVA: 0x66A8C0
    static int32_t wab(Quaternion a);  // RVA: 0x66A910
    static bool gsx(Vector2Int a, int32_t b);  // RVA: 0x66ABB0
    static bool glc(Vector2 a, int32_t b);  // RVA: 0x66B500
    static bool vzk(double a, int32_t b);  // RVA: 0x66C580
    static int32_t kpu(uint64_t a);  // RVA: 0x66BB90
    static int32_t dbt(int32_t a);  // RVA: 0x66A880
    static int32_t dx(Quaternion a);  // RVA: 0x66A910
    static int32_t wac(Vector2 a);  // RVA: 0x66C3D0
    static bool bqn(bool a, int32_t b);  // RVA: 0x66A4B0
    static int32_t oe(Quaternion a);  // RVA: 0x66A910
    static bool izu(uint64_t a, int32_t b);  // RVA: 0x66B5E0
    static int32_t ti(Vector2 a);  // RVA: 0x66C3D0
    static bool jlc(uint64_t a, int32_t b);  // RVA: 0x66B5E0
    static bool bvi(float a, int32_t b);  // RVA: 0x66A520
    static int32_t ehl(Vector3 a);  // RVA: 0x66AA90
    static bool vzh(Vector3 a, int32_t b);  // RVA: 0x66C470
    static int32_t mam(Decimal a);  // RVA: 0x66BD60
    static int32_t wag(Char[][] a);  // RVA: 0x66D110
    static bool bby(Guid a, int32_t b);  // RVA: 0x66A430
};

// Namespace: <global>
class das : public CertificateHandler
{
public:

    // Methods
    bool ValidateCertificate(Byte[][] certificateData);  // RVA: 0x66D1E0
    void .ctor();  // RVA: 0x66D1F0
};

// Namespace: <global>
class dat
{
public:

    // Methods
    static bool id(float a, float b, float c);  // RVA: 0x66D2B0
    static bool lzj(float a, float b, float c);  // RVA: 0x66D360
    static bool wai(float a, float b, float c);  // RVA: 0x66D4C0
    static bool waj(double a, double b, double c);  // RVA: 0x66D570
    static bool ojl(float a, float b, float c);  // RVA: 0x66D410
    static bool eiy(float a, float b, float c);  // RVA: 0x66D200
};

// Namespace: <global>
class dau
{
public:

    // Methods
    static void wak(System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> a, int32_t b, int32_t c, int64_t d, Il2CppString* e);  // RVA: 0x66D6A0
};

// Namespace: <global>
class dav
{
public:

    // Methods
    static uint16_t mri();  // RVA: 0x66DDF0
    static void ezp(Char[][] a);  // RVA: 0x66D970
    static Il2CppString* wal(int32_t a);  // RVA: 0x66DE90
    static uint8_t bqo();  // RVA: 0x66D7D0
    static int8_t jdy();  // RVA: 0x66DC70
    static int16_t wap();  // RVA: 0x66E060
    static uint8_t hnu();  // RVA: 0x66DC20
    static wchar_t wao();  // RVA: 0x66E010
    static int32_t lju();  // RVA: 0x66DD10
    static int64_t hio();  // RVA: 0x66DB80
    static int16_t cof();  // RVA: 0x66D870
    static uint8_t bse();  // RVA: 0x66D820
    static uint8_t fl();  // RVA: 0x66DA00
    static uint16_t waq();  // RVA: 0x66E0B0
    static uint64_t wau();  // RVA: 0x66D8C0
    static int64_t wat();  // RVA: 0x66D8C0
    static wchar_t etn();  // RVA: 0x66D920
    static void wav(Char[][] a);  // RVA: 0x66E150
    static int16_t hlr();  // RVA: 0x66DBD0
    static void mbm(Char[][] a);  // RVA: 0x66DD60
    static int32_t war();  // RVA: 0x66E100
    static uint16_t hil();  // RVA: 0x66DB30
    static uint16_t gvs();  // RVA: 0x66DA50
    static uint32_t was();  // RVA: 0x66E100
    static int8_t wan();  // RVA: 0x66DFC0
    static uint8_t wam();  // RVA: 0x66DF70
    static uint16_t kye();  // RVA: 0x66DCC0
    static uint64_t eaj();  // RVA: 0x66D8C0
    static int32_t nay();  // RVA: 0x66DE40
    static uint64_t lhm();  // RVA: 0x66D8C0
    static void hgw(Char[][] a);  // RVA: 0x66DAA0
    static wchar_t yt();  // RVA: 0x66E1E0
};

// Namespace: <global>
class daw
{
public:
    // Static fields
    // static Char[][] bmmn;


    // Methods
    static Char[][] way(Byte[][] a);  // RVA: 0x66E350
    static Il2CppString* ekr(Byte[][] a);  // RVA: 0x66E310
    static Il2CppString* kzg(Byte[][] a);  // RVA: 0x66E310
    static Il2CppString* lgw(Byte[][] a);  // RVA: 0x66E310
    static Byte[][] dkk(Il2CppString* a);  // RVA: 0x66E2C0
    static Byte[][] waw(Char[][] a);  // RVA: 0x66E390
    static void .cctor();  // RVA: 0x66E230
    static Byte[][] vp(Char[][] a);  // RVA: 0x66E390
    static Il2CppString* egy(Byte[][] a);  // RVA: 0x66E310
    static Byte[][] wax(Il2CppString* a);  // RVA: 0x66E2C0
    static Char[][] jkr(Byte[][] a);  // RVA: 0x66E350
    static Byte[][] hal(Il2CppString* a);  // RVA: 0x66E2C0
    static Il2CppString* waz(Byte[][] a);  // RVA: 0x66E310
    static Il2CppString* wbb(Byte[][] a);  // RVA: 0x66E430
    static Il2CppString* wba(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x66E3D0
};

// Namespace: <global>
class dax`1
{
public:
    System.Collections.Concurrent.ConcurrentBag<a> bmmo; // 0x0000
    System.Func<a> bmmp; // 0x0000

    // Methods
    void wbd(a a);  // RVA: 0x564EA0
    void .ctor(System.Func<a> a);  // RVA: 0x41A660
    void wbe();  // RVA: 0x430730
    a wbc();  // RVA: 0x564EA0
};

// Namespace: <global>
class day
{
public:
    // Static fields
    // static Random* bmmq;
    // static Random* bmmr;


    // Methods
    static int64_t iwk(int64_t a, int64_t b);  // RVA: 0x66EC50
    static void wbh(Byte[][] a);  // RVA: 0x670210
    static int64_t hmj(Random* a, int64_t b, int64_t c);  // RVA: 0x66EBE0
    static int64_t hbi(Random* a, int64_t b, int64_t c);  // RVA: 0x66EB70
    static int32_t wbf(int32_t a, int32_t b);  // RVA: 0x66FD80
    static void .cctor();  // RVA: 0x66E5B0
    static int32_t mdl(int32_t a, int32_t b);  // RVA: 0x66F370
    static int64_t mxk(int64_t a, int64_t b);  // RVA: 0x66F610
    static int32_t jsl(int32_t a, int32_t b);  // RVA: 0x66EEC0
    static void wbk(Random* a, Char[][] b);  // RVA: 0x670830
    static void lux(Byte[][] a);  // RVA: 0x66F0E0
    static int64_t mmw(Random* a, int64_t b, int64_t c);  // RVA: 0x66F590
    static int32_t dtv(int32_t a, int32_t b);  // RVA: 0x66E6C0
    static int64_t vv(Random* a, int64_t b, int64_t c);  // RVA: 0x66FD10
    static void ehv(Byte[][] a);  // RVA: 0x66E8E0
    static void djm(Random* a, Char[][] b);  // RVA: 0x66E630
    static int32_t nww(int32_t a, int32_t b);  // RVA: 0x66F880
    static int64_t wbj(Random* a, int64_t b, int64_t c);  // RVA: 0x6707B0
    static int64_t opx(int64_t a, int64_t b);  // RVA: 0x66FAA0
    static int64_t wbg(int64_t a, int64_t b);  // RVA: 0x66FFA0
    static void wbi(Char[][] a);  // RVA: 0x6704A0
};

// Namespace: <global>
class daz
{
public:
    // Static fields
    // static int64_t bmms;


    // Methods
    static int64_t lz();  // RVA: 0x670B90
    static int64_t hoa();  // RVA: 0x6709D0
    static double wbm();  // RVA: 0x670D00
    static int64_t ere();  // RVA: 0x670940
    static int64_t wbp();  // RVA: 0x670DB0
    static int64_t wbo();  // RVA: 0x670D90
    static double lok();  // RVA: 0x670B20
    static int64_t osr();  // RVA: 0x670C60
    static int64_t lll();  // RVA: 0x670AC0
    static int64_t wbl();  // RVA: 0x670CA0
    static double iat();  // RVA: 0x670A30
    static double gml();  // RVA: 0x670960
    static int64_t cai();  // RVA: 0x6708C0
    static int64_t wbn();  // RVA: 0x670D70
    static int64_t lgs();  // RVA: 0x670AA0
    static int64_t osv();  // RVA: 0x670C80
    static int64_t ekq();  // RVA: 0x670920
    static double ogc();  // RVA: 0x670BF0
};

// Namespace: <global>
class dba
{
public:
    // Static fields
    // static uint32_t bmmt;
    // static uint32_t bmmu;
    // static uint32_t bmmv;
    // static uint32_t bmmw;
    // static uint32_t bmmx;


    // Methods
    static uint32_t iti(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x671400
    static uint32_t wbr(Stream* a, int64_t b, uint32_t c);  // RVA: 0x671F70
    static uint32_t mdy(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x671960
    static uint32_t fee(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x670FB0
    static uint32_t fiz(Stream* a, int64_t b, uint32_t c);  // RVA: 0x671120
    static uint32_t wbq(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x671B40
    static uint32_t jyr(Stream* a, int64_t b, uint32_t c);  // RVA: 0x671620
    static uint32_t bis(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x670DD0
};

// Namespace: <global>
class dbb : public dcx`1
{
public:
    // Static fields
    // static bool bmmy;
    // static bool bmmz;
    // static float bmna;
    // static float bmnb;
    // static float bmnc;
    // static float bmnd;
    // static float bmne;
    // static float bmnf;
    // static bool bmng;

    uint8_t pad_0000[0x30]; // 0x0000
    int64_t bmnh; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int64_t bmni; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int64_t bmnj; // 0x0040

    // Methods
    static void nkd();  // RVA: 0x673460
    void wcd();  // RVA: 0x6740F0
    void isq();  // RVA: 0x6730C0
    void fwp();  // RVA: 0x672D30
    static float wbu();  // RVA: 0x673A40
    bool cgz();  // RVA: 0x672770
    static void wbt();  // RVA: 0x673810
    void nng();  // RVA: 0x6734D0
    static float wbz();  // RVA: 0x673E00
    bool lhf();  // RVA: 0x673190
    static float wby();  // RVA: 0x673D40
    bool wcc();  // RVA: 0x673EE0
    void wcg(Scene a, LoadSceneMode b);  // RVA: 0x674370
    void wce();  // RVA: 0x6741C0
    static void wbs();  // RVA: 0x6737A0
    static void gtm();  // RVA: 0x672E90
    void .ctor();  // RVA: 0x672490
    void bjx();  // RVA: 0x6724D0
    static void wcb(float a);  // RVA: 0x673ED0
    void mxz();  // RVA: 0x6733A0
    void day();  // RVA: 0x672980
    static float wbw();  // RVA: 0x673BC0
    bool nuc();  // RVA: 0x673590
    void fum();  // RVA: 0x672C60
    bool ejy();  // RVA: 0x672A50
    static float wbv();  // RVA: 0x673B00
    void btw();  // RVA: 0x6725A0
    void ccy();  // RVA: 0x672660
    static float wbx();  // RVA: 0x673C80
    void Update();  // RVA: 0x6723D0
    void wcf();  // RVA: 0x6742D0
    static float wca();  // RVA: 0x673EC0
    void gma();  // RVA: 0x672DF0
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
        void .ctor(StorageDataType type, Byte[][] data);  // RVA: 0x668BC0
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbc
{
public:

    // Methods
    static Color32 wch(Byte[][] a);  // RVA: 0x674470
    static Byte[][] wco(T a);  // RVA: 0x564EA0
    static b wcj(ObscuredPrefsData a);  // RVA: 0x564EA0
    static c wck(Byte[][] a);  // RVA: 0x564EA0
    static Color32 lof(Byte[][] a);  // RVA: 0x674430
    static Byte[][] wcm(StorageDataType a, e b);  // RVA: 0x564EA0
    static Color32 kyj(Byte[][] a);  // RVA: 0x6743F0
    static ObscuredPrefsData wci(a a);  // RVA: 0x564EA0
    static d wcl(StorageDataType a, Byte[][] b);  // RVA: 0x564EA0
    static T wcp(Byte[][] a);  // RVA: 0x564EA0
    static f wcn(StorageDataType a, Byte[][] b);  // RVA: 0x564EA0
};

// Namespace: <global>
class dbd
{
public:
    // Static fields
    // static Type* bmnk;
    // static Type* bmnl;
    // static Type* bmnm;
    // static Type* bmnn;
    // static Type* bmno;
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


    // Methods
    static StorageDataType wcq();  // RVA: 0x4238C0
    static void .cctor();  // RVA: 0x6744B0
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    class UnsupportedDataTypeException : public Exception
    {
    public:
    
        // Methods
        void .ctor(Type* type);  // RVA: 0x668C40
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class HashCheckSumModifierDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x668070
    Byte[][] Invoke(Il2CppString* input);  // RVA: 0x667F10
    IAsyncResult* BeginInvoke(Il2CppString* input, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x668040
    Byte[][] EndInvoke(IAsyncResult* result);  // RVA: 0x667F00
};

// Namespace: <global>
class dbe
{
public:
    // Static fields
    // static Il2CppString* bmop;

    uint8_t pad_0000[0x10]; // 0x0000
    uint32_t bmoq; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    uint32_t bmor; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    HashCheckSumModifierDelegate* bmos; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool <bmot>k__BackingField; // 0x0020

    // Methods
    static Il2CppString* wcr();  // RVA: 0x675060
    void myy();  // RVA: 0x674DB0
    void wcy(HashCheckSumModifierDelegate* a);  // RVA: 0x674D90
    static void wct();  // RVA: 0x675170
    void .ctor(uint32_t a);  // RVA: 0x674D60
    static Il2CppString* wcu();  // RVA: 0x674EF0
    void lun(HashCheckSumModifierDelegate* a);  // RVA: 0x674D90
    void fhk();  // RVA: 0x674DB0
    void epj(bool a);  // RVA: 0x674DA0
    void wcz(bool a);  // RVA: 0x674DA0
    void bkn(HashCheckSumModifierDelegate* a);  // RVA: 0x674D90
    uint32_t wdb(Il2CppString* a);  // RVA: 0x675460
    static Il2CppString* isn();  // RVA: 0x674EF0
    uint32_t wcx();  // RVA: 0x675280
    static Il2CppString* ize();  // RVA: 0x674EF0
    static void wcs(Il2CppString* a);  // RVA: 0x675110
    void joo();  // RVA: 0x674DB0
    void csa(bool a);  // RVA: 0x674DA0
    static Il2CppString* mki();  // RVA: 0x674EF0
    void wcw(bool a);  // RVA: 0x675270
    bool wcv();  // RVA: 0x668810
    void wda();  // RVA: 0x674DB0
    uint32_t lxe(Il2CppString* a);  // RVA: 0x674F30
    uint32_t fvv(Il2CppString* a);  // RVA: 0x674DC0
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
    DeviceLockLevel <bmou>k__BackingField; // 0x0010
    DeviceLockTamperingSensitivity <bmov>k__BackingField; // 0x0011

    // Methods
    DeviceLockLevel wdc();  // RVA: 0x668AF0
    void wdd(DeviceLockLevel a);  // RVA: 0x6755D0
    DeviceLockTamperingSensitivity wde();  // RVA: 0x6755E0
    void wdf(DeviceLockTamperingSensitivity a);  // RVA: 0x6755F0
    void .ctor(DeviceLockLevel a, DeviceLockTamperingSensitivity b);  // RVA: 0x675590
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
        void .ctor();  // RVA: 0x667FD0
    };

    // Namespace: CodeStage.AntiCheat.Storage
    class PersistentDataPathException : public BackgroundThreadAccessException
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x668BE0
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbg
{
public:
    // Static fields
    // static Il2CppString* bmow;
    // static Il2CppString* bmox;
    // static dbe* bmoy;

    uint8_t pad_0000[0x10]; // 0x0000
    Action* bmoz; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Action* bmpa; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbq* <bmpb>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* <bmpc>k__BackingField; // 0x0028

    // Methods
    ObscuredFileWriteResult hy(Byte[][] a);  // RVA: 0x676DE0
    void wdh(Action* a);  // RVA: 0x67A0B0
    ObscuredFileReadResult ogv();  // RVA: 0x6793A0
    bool wdl();  // RVA: 0x67A290
    dbq* wdk();  // RVA: 0x63DB10
    ObscuredFileWriteResult fzu(Byte[][] a);  // RVA: 0x676590
    Il2CppString* wdm();  // RVA: 0x67A2A0
    static void wdn(Il2CppString* a);  // RVA: 0x67A2B0
    ObscuredFileReadResult ckm();  // RVA: 0x6758E0
    ObscuredFileReadResult wdq();  // RVA: 0x6758E0
    void .ctor(dbr* a);  // RVA: 0x6756E0
    Il2CppString* iqh(Il2CppString* a);  // RVA: 0x677F50
    void wdj(Action* a);  // RVA: 0x67A1F0
    ObscuredFileWriteResult wdp(Byte[][] a);  // RVA: 0x676590
    ObscuredFileReadResult mmx();  // RVA: 0x6758E0
    void .ctor(Il2CppString* a);  // RVA: 0x675780
    ObscuredFileWriteResult ewp(Byte[][] a);  // RVA: 0x676630
    void .ctor(Il2CppString* a, dbq* b);  // RVA: 0x675680
    void fyg();  // RVA: 0x676B30
    void .ctor();  // RVA: 0x675820
    Il2CppString* wdw(Il2CppString* a);  // RVA: 0x67B5B0
    void wdg(Action* a);  // RVA: 0x67A010
    void wdv(Stream* a, DeviceLockLevel b);  // RVA: 0x67B520
    ObscuredFileWriteResult cvn(Byte[][] a);  // RVA: 0x676590
    ObscuredFileReadResult ijk();  // RVA: 0x6772E0
    static void .cctor();  // RVA: 0x675600
    ObscuredFileHeader wds(Stream* a);  // RVA: 0x6781D0
    ObscuredFileWriteResult ndu(Byte[][] a);  // RVA: 0x678230
    Il2CppString* gyv(Il2CppString* a);  // RVA: 0x676B60
    ObscuredFileReadResult cuw();  // RVA: 0x675920
    ObscuredFileReadResult ntz();  // RVA: 0x678730
    ObscuredFileHeader iva(Stream* a);  // RVA: 0x6781D0
    void wdo();  // RVA: 0x676B30
    ObscuredFileHeader lao(Stream* a);  // RVA: 0x6781D0
    ObscuredFileReadResult wdr();  // RVA: 0x67A340
    void wdi(Action* a);  // RVA: 0x67A150
    void eop(Stream* a);  // RVA: 0x6765C0
    void wdu(Stream* a);  // RVA: 0x67B4B0
    ObscuredFileWriteResult wdt(Byte[][] a);  // RVA: 0x67AFB0
};

// Namespace: <global>
class dbh
{
public:
    // Static fields
    // static int32_t bmpd;
    // static int32_t bmpe;
    // static Byte[][] bmpf;


    // Methods
    static uint32_t ivj(Byte[][] a);  // RVA: 0x67C1C0
    static uint32_t haz(Stream* a);  // RVA: 0x67C040
    static uint32_t otp(Stream* a);  // RVA: 0x67C450
    static uint32_t sg(Stream* a);  // RVA: 0x67C080
    static uint32_t wdz(Stream* a);  // RVA: 0x67C080
    static uint32_t wec(Stream* a);  // RVA: 0x67C080
    static void nvo(Stream* a, Stream* b, dbp* c);  // RVA: 0x67C3A0
    static uint32_t wee(Byte[][] a);  // RVA: 0x67C600
    static void wed(Stream* a, Stream* b, dbp* c);  // RVA: 0x67BBD0
    static void vz(Stream* a, Stream* b, dbp* c);  // RVA: 0x67BBD0
    static void fin(Stream* a, Stream* b, dbp* c);  // RVA: 0x67BD80
    static void emy(Stream* a, Stream* b, dbp* c);  // RVA: 0x67BBD0
    static void fuq(Stream* a, Stream* b, dbp* c);  // RVA: 0x67BF40
    static void ehi(Stream* a, Stream* b, dbp* c);  // RVA: 0x67BAD0
    static uint32_t fqv(Stream* a);  // RVA: 0x67BE70
    static uint32_t wea(Stream* a);  // RVA: 0x67C490
    static void bjj(Stream* a, Stream* b, dbp* c);  // RVA: 0x67B8E0
    static uint32_t day(Byte[][] a);  // RVA: 0x67BAB0
    static uint32_t ia(Stream* a);  // RVA: 0x67C080
    static uint32_t mqx(Stream* a);  // RVA: 0x67C080
    static uint32_t ilm(Byte[][] a);  // RVA: 0x67C1A0
    static void hys(Stream* a, uint32_t b);  // RVA: 0x67C0C0
    static void bdr(Stream* a, Stream* b, dbp* c);  // RVA: 0x67B830
    static void fee(Stream* a, Stream* b, dbp* c);  // RVA: 0x67BC80
    static void ltd(Stream* a, uint32_t b);  // RVA: 0x67C1E0
    static void wdy(Stream* a, Stream* b, dbp* c);  // RVA: 0x67BD80
    static void bjl(Stream* a, Stream* b, dbp* c);  // RVA: 0x67B990
    static uint32_t fsc(Stream* a);  // RVA: 0x67BF00
    static uint32_t hsl(Stream* a);  // RVA: 0x67C080
    static uint32_t bpx(Byte[][] a);  // RVA: 0x67BA90
    static void web(Stream* a, uint32_t b);  // RVA: 0x67C520
    static void wdx(Stream* a, Stream* b, dbp* c);  // RVA: 0x67BBD0
    static void fkw(Stream* a, uint32_t b);  // RVA: 0x67BD90
    static void nxn(Stream* a, Stream* b, dbp* c);  // RVA: 0x67BBD0
    static void nqw(Stream* a, uint32_t b);  // RVA: 0x67C2C0
    static void wef(Stream* a, Stream* b, dbp* c);  // RVA: 0x67C620
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
        uint8_t get_Byte1();  // RVA: 0x668240
        void set_Byte1(uint8_t value);  // RVA: 0x6682E0
        uint8_t get_Byte2();  // RVA: 0x668290
        void set_Byte2(uint8_t value);  // RVA: 0x6682F0
        uint8_t get_Byte3();  // RVA: 0x6682A0
        void set_Byte3(uint8_t value);  // RVA: 0x668300
        uint8_t get_Byte4();  // RVA: 0x6682B0
        void set_Byte4(uint8_t value);  // RVA: 0x668310
        uint8_t get_Version();  // RVA: 0x6682D0
        void set_Version(uint8_t value);  // RVA: 0x668330
        ObscurationMode get_ObscurationMode();  // RVA: 0x6682C0
        void set_ObscurationMode(ObscurationMode value);  // RVA: 0x668320
        bool IsValid();  // RVA: 0x668260
        void weg(Stream* a);  // RVA: 0x668340
        static void weh(Stream* a, ObscurationMode b);  // RVA: 0x668400
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
        ObscuredFileErrorCode get_ErrorCode();  // RVA: 0x668240
        Exception* get_Exception();  // RVA: 0x668250
        void .ctor(ObscuredFileErrorCode code);  // RVA: 0x668220
        void .ctor(Exception* exception);  // RVA: 0x668210
        Il2CppString* ToString();  // RVA: 0x668130
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
        bool wei();  // RVA: 0x668820
        Byte[][] get_Data();  // RVA: 0x6687F0
        bool wej();  // RVA: 0x668850
        bool get_DataIsNotGenuine();  // RVA: 0x6687E0
        bool get_DataFromAnotherDevice();  // RVA: 0x6687D0
        ObscuredFileError get_Error();  // RVA: 0x668800
        bool get_IsValid();  // RVA: 0x668810
        void .ctor(Byte[][] data, bool dataIsNotGenuine, bool dataFromAnotherDevice);  // RVA: 0x668780
        void .ctor(ObscuredFileError error);  // RVA: 0x668730
        static ObscuredFileReadResult wek(Exception* a);  // RVA: 0x668860
        static ObscuredFileReadResult wel(ObscuredFileErrorCode a);  // RVA: 0x6688E0
        Il2CppString* ToString();  // RVA: 0x6684C0
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
        bool wem();  // RVA: 0x668B00
        ObscuredFileError get_Error();  // RVA: 0x668AE0
        bool get_IsValid();  // RVA: 0x668AF0
        void .ctor(ObscuredFileErrorCode result);  // RVA: 0x668A90
        void .ctor(ObscuredFileError error);  // RVA: 0x668A60
        static ObscuredFileWriteResult wen(Exception* a);  // RVA: 0x668B10
        static ObscuredFileWriteResult weo(ObscuredFileErrorCode a);  // RVA: 0x668B60
        Il2CppString* ToString();  // RVA: 0x668960
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbi
{
public:
    // Static fields
    // static Il2CppString* bmpg;
    // static Il2CppString* bmph;
    // static Action* bmpi;
    // static Action* bmpj;
    // static dbg* bmpk;
    // static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> bmpl;
    // static Il2CppObject* bmpm;
    // static bool <bmpn>k__BackingField;
    // static bool <bmpo>k__BackingField;
    // static bool <bmpp>k__BackingField;
    // static ObscuredFileReadResult <bmpq>k__BackingField;
    // static ObscuredFileWriteResult <bmpr>k__BackingField;
    // static dbl* <bmps>k__BackingField;


    // Methods
    static void dmk();  // RVA: 0x67D8E0
    static void bza(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x67D070
    static void hqg(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x67F940
    static void wgj(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x686E60
    static dbq* wet();  // RVA: 0x684B70
    static bool wew();  // RVA: 0x684C70
    static void hbg();  // RVA: 0x67F160
    static b wfw(Il2CppString* a, b b);  // RVA: 0x564EA0
    static void wfz();  // RVA: 0x686270
    static void jzf(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6810B0
    static void wez(bool a);  // RVA: 0x684D80
    static ObscuredUShort har(Il2CppString* a, ObscuredUShort b);  // RVA: 0x67F0A0
    static void mul(Il2CppString* a, ObscuredUInt b);  // RVA: 0x683130
    static bool wey();  // RVA: 0x684D30
    static bool lhu(Il2CppString* a);  // RVA: 0x681E50
    static bool wfa();  // RVA: 0x684DE0
    static ObscuredLong mgm(Il2CppString* a, ObscuredLong b);  // RVA: 0x682CD0
    static ObscuredVector2 kqf(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x681430
    static dbl* wfh();  // RVA: 0x6850D0
    static void fkf(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x67E400
    static void jqc(Il2CppString* a, ObscuredInt b);  // RVA: 0x680F10
    static ObscuredDateTime bvm(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x67CFB0
    static dbg* wfj();  // RVA: 0x685190
    static ObscuredGuid eju(Il2CppString* a, ObscuredGuid b);  // RVA: 0x67DC40
    static ObscuredVector3 why(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x688AB0
    static void evd(dbq* a, bool b);  // RVA: 0x67DF60
    static void eyu(Il2CppString* a, dbq* b, bool c);  // RVA: 0x67E000
    static void kca(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x681220
    static bool wfr(Il2CppString* a);  // RVA: 0x685D00
    static void mvm(Il2CppString* a, ObscuredBool b);  // RVA: 0x683240
    static void wfl(Il2CppString* a, bool b);  // RVA: 0x685360
    static ObscuredDecimal whi(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x687E20
    static ObscuredQuaternion nsc(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x683D70
    static System.Collections.Generic.ICollection<System.String> wfs();  // RVA: 0x685D80
    static void .cctor();  // RVA: 0x67CAC0
    static void opd(Il2CppString* a, ObscuredLong b);  // RVA: 0x6842A0
    static ObscuredVector2Int hhd(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x67F7E0
    static void hqe(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x67F8A0
    static void wgx(Il2CppString* a, ObscuredULong b);  // RVA: 0x6876C0
    static void ieu(Il2CppString* a, ObscuredByte b);  // RVA: 0x6802B0
    static ObscuredBigInteger whj(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x687F20
    static void eud(Il2CppString* a, ObscuredByte b);  // RVA: 0x67DEE0
    static ObscuredChar iku(Il2CppString* a, ObscuredChar b);  // RVA: 0x680510
    static void wgt(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6874B0
    static ObscuredShort whr(Il2CppString* a, ObscuredShort b);  // RVA: 0x6885B0
    static void wgq(Il2CppString* a, ObscuredInt b);  // RVA: 0x6872F0
    static void ihg(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6803E0
    static void gfk(Il2CppString* a);  // RVA: 0x67EA40
    static ObscuredVector3 ola(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6840F0
    static void wer(Action* a);  // RVA: 0x684970
    static ObscuredUInt cmg(Il2CppString* a, ObscuredUInt b);  // RVA: 0x67D5B0
    static void npl(Il2CppString* a, ObscuredULong b);  // RVA: 0x683CE0
    static ObscuredVector2Int lrb(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6823D0
    static ObscuredByte lz(Il2CppString* a, ObscuredByte b);  // RVA: 0x682A20
    static void wha(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x687880
    static void lhv(Il2CppString* a, ObscuredChar b);  // RVA: 0x681ED0
    static void wfg(ObscuredFileWriteResult a);  // RVA: 0x685050
    static void wgo(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6871A0
    static ObscuredChar lab(Il2CppString* a, ObscuredChar b);  // RVA: 0x681D90
    static void gfc(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x67E990
    static void wgw(Il2CppString* a, ObscuredUInt b);  // RVA: 0x687640
    static void hfw(Il2CppString* a, dbq* b, bool c);  // RVA: 0x67F540
    static void wev(bool a);  // RVA: 0x684C10
    static void wfb(bool a);  // RVA: 0x684E30
    static ObscuredFileWriteResult kuh(Byte[][] a);  // RVA: 0x6815C0
    static void whb(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x687910
    static void whc(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6879C0
    static void ngd(Il2CppString* a, ObscuredUShort b);  // RVA: 0x683920
    static ObscuredByte whe(Il2CppString* a, ObscuredByte b);  // RVA: 0x687B30
    static void ouh(Il2CppString* a, ObscuredString* b);  // RVA: 0x684330
    static void lnu(Il2CppString* a, dbq* b, bool c);  // RVA: 0x682130
    static ObscuredDateTimeOffset whh(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x687D30
    static void wfm(dbq* a, bool b);  // RVA: 0x6853F0
    static void wgv(Il2CppString* a, ObscuredString* b);  // RVA: 0x6875C0
    static void hzd();  // RVA: 0x67FBE0
    static ObscuredFileReadResult rg();  // RVA: 0x6843B0
    static ObscuredFileWriteResult wff();  // RVA: 0x684FE0
    static System.Collections.Generic.ICollection<System.String> dku();  // RVA: 0x67D860
    static ObscuredFileWriteResult wgb();  // RVA: 0x686720
    static ObscuredFileReadResult gjz();  // RVA: 0x67EB30
    static void bqt(Il2CppString* a, ObscuredBool b);  // RVA: 0x67CDF0
    static void hen(Il2CppString* a, ObscuredGuid b);  // RVA: 0x67F490
    static ObscuredString* whs(Il2CppString* a, ObscuredString* b);  // RVA: 0x688670
    static ObscuredUInt wht(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6886F0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wga();  // RVA: 0x6862E0
    static void wgd(Il2CppString* a, d b);  // RVA: 0x564EA0
    static void flb(Il2CppString* a, ObscuredInt b);  // RVA: 0x67E4B0
    static void wgp(Il2CppString* a, ObscuredGuid b);  // RVA: 0x687240
    static bool Save();  // RVA: 0x67C720
    static void wgu(Il2CppString* a, ObscuredShort b);  // RVA: 0x687530
    static ObscuredVector2Int whx(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6889F0
    static void wgm(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x687050
    static void wgz(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6877E0
    static void ftd(Il2CppString* a, ObscuredShort b);  // RVA: 0x67E530
    static void kbh(bool a);  // RVA: 0x681160
    static void wgn(Il2CppString* a, ObscuredDouble b);  // RVA: 0x687100
    static void lry(dbq* a, bool b);  // RVA: 0x682490
    static ObscuredBigInteger ceb(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x67D1C0
    static void kyf(Il2CppString* a, ObscuredChar b);  // RVA: 0x681C40
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> lxr();  // RVA: 0x682530
    static void wft(Il2CppString* a);  // RVA: 0x685E00
    static ObscuredFileReadResult wge();  // RVA: 0x6868C0
    static ObscuredUInt b(Il2CppString* a, ObscuredUInt b);  // RVA: 0x67CB40
    static void mvy();  // RVA: 0x6832D0
    static void vm(Il2CppString* a, ObscuredUShort b);  // RVA: 0x684700
    static void wgy(Il2CppString* a, ObscuredUShort b);  // RVA: 0x687750
    static void wfe(ObscuredFileReadResult a);  // RVA: 0x684F50
    static ObscuredSByte dk(Il2CppString* a, ObscuredSByte b);  // RVA: 0x67D7E0
    static void wgg(Il2CppString* a, ObscuredBool b);  // RVA: 0x686CC0
    static ObscuredUShort bht(Il2CppString* a, ObscuredUShort b);  // RVA: 0x67CD30
    static void wfo();  // RVA: 0x685730
    static ObscuredFloat whl(Il2CppString* a, ObscuredFloat b);  // RVA: 0x688100
    static void lkg(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x681F60
    static void hxb(Il2CppString* a);  // RVA: 0x67F9F0
    static ObscuredDouble whk(Il2CppString* a, ObscuredDouble b);  // RVA: 0x688020
    static bool ibh();  // RVA: 0x67FF10
    static bool kyb();  // RVA: 0x6818A0
    static ObscuredSByte bvf(Il2CppString* a, ObscuredSByte b);  // RVA: 0x67CF30
    static dbg* gds(Il2CppString* a, dbq* b);  // RVA: 0x67E7F0
    static ObscuredQuaternion oeb(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x683FF0
    static void wfq(bool a);  // RVA: 0x685C20
    static ObscuredVector2 whw(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x688920
    static ObscuredGuid mpd(Il2CppString* a, ObscuredGuid b);  // RVA: 0x682E90
    static ObscuredFileWriteResult elm();  // RVA: 0x67DD40
    static ObscuredBool whd(Il2CppString* a, ObscuredBool b);  // RVA: 0x687A70
    static ObscuredString* iql(Il2CppString* a, ObscuredString* b);  // RVA: 0x6805D0
    static void cab(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x67D120
    static ObscuredQuaternion whp(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x688430
    static void wfv(Il2CppString* a, a b);  // RVA: 0x564EA0
    static void brk(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x67CE80
    static ObscuredSByte whq(Il2CppString* a, ObscuredSByte b);  // RVA: 0x688530
    static ObscuredLong cfb(Il2CppString* a, ObscuredLong b);  // RVA: 0x67D2C0
    static void bgv(Il2CppString* a, bool b);  // RVA: 0x67CCA0
    static ObscuredInt kgk(Il2CppString* a, ObscuredInt b);  // RVA: 0x6812D0
    static ObscuredQuaternion mim(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x682D90
    static void wgr(Il2CppString* a, ObscuredLong b);  // RVA: 0x687370
    static ObscuredDateTime csz(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x67D720
    static void jqg(Il2CppString* a, ObscuredByte b);  // RVA: 0x680F90
    static bool cgl(Il2CppString* a);  // RVA: 0x67D530
    static void ifi(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x680330
    static void ngh();  // RVA: 0x6839B0
    static ObscuredInt whn(Il2CppString* a, ObscuredInt b);  // RVA: 0x6882C0
    static ObscuredULong cri(Il2CppString* a, ObscuredULong b);  // RVA: 0x67D660
    static void izg(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6807D0
    static void mus(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6831B0
    static ObscuredString* gem(Il2CppString* a, ObscuredString* b);  // RVA: 0x67E910
    static void kul(bool a);  // RVA: 0x6817E0
    static void gta(Il2CppString* a, ObscuredUShort b);  // RVA: 0x67EF80
    static void hyk(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x67FAE0
    static ObscuredVector3Int jpk(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x680E10
    static ObscuredFloat isz(Il2CppString* a, ObscuredFloat b);  // RVA: 0x680650
    static ObscuredSByte fes(Il2CppString* a, ObscuredSByte b);  // RVA: 0x67E380
    static Il2CppString* wfc();  // RVA: 0x684E90
    static void kru(bool a);  // RVA: 0x681500
    static ObscuredGuid dom(Il2CppString* a, ObscuredGuid b);  // RVA: 0x67DAA0
    static ObscuredDateTime whg(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x687C70
    static void lxt(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x682970
    static void wgl(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x686FA0
    static ObscuredFileWriteResult mtn();  // RVA: 0x682F90
    static ObscuredVector3Int whz(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x688BB0
    static void ta(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x684650
    static void weq(Action* a);  // RVA: 0x684880
    static bool wex();  // RVA: 0x684CD0
    static ObscuredGuid nyu(Il2CppString* a, ObscuredGuid b);  // RVA: 0x683E70
    static void dx(Il2CppString* a, ObscuredDouble b);  // RVA: 0x67DBA0
    static void wfk(bool a);  // RVA: 0x6852A0
    static void jpe(Il2CppString* a, ObscuredDouble b);  // RVA: 0x680D70
    static ObscuredString* iik(Il2CppString* a, ObscuredString* b);  // RVA: 0x680490
    static ObscuredFloat kyp(Il2CppString* a, ObscuredFloat b);  // RVA: 0x681CD0
    static void wfu();  // RVA: 0x685EF0
    static void yl(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x688CB0
    static bool weu();  // RVA: 0x684BC0
    static void ncb(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6837C0
    static void cfv(Il2CppString* a);  // RVA: 0x67D440
    static ObscuredULong whu(Il2CppString* a, ObscuredULong b);  // RVA: 0x6887A0
    static ObscuredULong fuz(Il2CppString* a, ObscuredULong b);  // RVA: 0x67E5C0
    static void wgs(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x687400
    static ObscuredDateTime nff(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x683860
    static c wgc(Il2CppString* a, c b);  // RVA: 0x564EA0
    static ObscuredFileReadResult wfd();  // RVA: 0x684EE0
    static ObscuredGuid whm(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6881C0
    static void mxf();  // RVA: 0x683490
    static ObscuredFileWriteResult wgf(Byte[][] a);  // RVA: 0x686AA0
    static void gqk(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x67EEE0
    static void wgi(Il2CppString* a, ObscuredChar b);  // RVA: 0x686DD0
    static dbg* lnt(Il2CppString* a, dbq* b);  // RVA: 0x682010
    static void wfi(dbl* a);  // RVA: 0x685120
    static ObscuredFileWriteResult mbp();  // RVA: 0x682B30
    static ObscuredFloat cfe(Il2CppString* a, ObscuredFloat b);  // RVA: 0x67D380
    static ObscuredInt onk(Il2CppString* a, ObscuredInt b);  // RVA: 0x6841F0
    static ObscuredLong who(Il2CppString* a, ObscuredLong b);  // RVA: 0x688370
    static void wes(Action* a);  // RVA: 0x684A70
    static void wgh(Il2CppString* a, ObscuredByte b);  // RVA: 0x686D50
    static void gye(Il2CppString* a, ObscuredLong b);  // RVA: 0x67F010
    static ObscuredULong gcd(Il2CppString* a, ObscuredULong b);  // RVA: 0x67E730
    static void wfn(Il2CppString* a, dbq* b, bool c);  // RVA: 0x685490
    static void wfy();  // RVA: 0x686200
    static ObscuredChar sc(Il2CppString* a, ObscuredChar b);  // RVA: 0x684590
    static ObscuredVector2 gqi(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x67EE10
    static ObscuredDecimal gnw(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x67ED10
    static void wfp();  // RVA: 0x6858F0
    static ObscuredUInt bcj(Il2CppString* a, ObscuredUInt b);  // RVA: 0x67CBF0
    static void jgu(bool a);  // RVA: 0x680CB0
    static ObscuredUInt kiq(Il2CppString* a, ObscuredUInt b);  // RVA: 0x681380
    static void lzx(Il2CppString* a, ObscuredLong b);  // RVA: 0x682AA0
    static void wep(Action* a);  // RVA: 0x684790
    static ObscuredFloat iwc(Il2CppString* a, ObscuredFloat b);  // RVA: 0x680710
    static ObscuredUShort whv(Il2CppString* a, ObscuredUShort b);  // RVA: 0x688860
    static void odr(Il2CppString* a, ObscuredByte b);  // RVA: 0x683F70
    static void wgk(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x686EF0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> jem();  // RVA: 0x680870
    static dbg* wfx(Il2CppString* a, dbq* b);  // RVA: 0x6860E0
    static ObscuredChar whf(Il2CppString* a, ObscuredChar b);  // RVA: 0x687BB0
    static void jye(dbq* a, bool b);  // RVA: 0x681010
    static void hyq();  // RVA: 0x67FB70
    static void fzl(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x67E680
    static void fcu(bool a);  // RVA: 0x67E2A0
};

// Namespace: <global>
class dbj
{
public:
    // Static fields
    // static bool bmpt;


    // Methods
    static void wid(bool a);  // RVA: 0x6893B0
    static void bml(bool a);  // RVA: 0x688D80
    static void ohx(bool a);  // RVA: 0x688E80
    static bool wib();  // RVA: 0x688D60
    static void wia();  // RVA: 0x688F70
    static void wif();  // RVA: 0x6894B0
    static bool bbu();  // RVA: 0x688D60
    static void wic(bool a);  // RVA: 0x688E70
    static void byy(bool a);  // RVA: 0x688E70
    static void wie(bool a);  // RVA: 0x6893C0
};

// Namespace: <global>
class dbk
{
public:

    // Methods
    static b wih(ObscuredPrefsData a, dbl* b);  // RVA: 0x564EA0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> nbo(Byte[][] a, dbl* b);  // RVA: 0x689610
    static Byte[][] wii(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbl* b);  // RVA: 0x689680
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wij(Byte[][] a, dbl* b);  // RVA: 0x689760
    static dbn* wik(dbl* a);  // RVA: 0x6897D0
    static ObscuredPrefsData wig(a a, dbl* b);  // RVA: 0x564EA0
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
    ACTkSerializationKind <bmpu>k__BackingField; // 0x0010

    // Methods
    ACTkSerializationKind wil();  // RVA: 0x667D80
    void .ctor(ACTkSerializationKind a);  // RVA: 0x674D60
};

// Namespace: <global>
class dbm
{
public:
    // Static fields
    // static uint8_t bmpv;
    // static dbm* bmpw;


    // Methods
    void wir(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x69E270
    Byte[][] wip(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x69DA70
    static dbn* mrb();  // RVA: 0x69D950
    static dbn* kme();  // RVA: 0x69D8C0
    void .ctor();  // RVA: 0x629570
    b wio(ObscuredPrefsData a);  // RVA: 0x564EA0
    static dbn* dlm();  // RVA: 0x69D610
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wiq(Byte[][] a);  // RVA: 0x69DE60
    static dbn* wim();  // RVA: 0x69D9E0
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wis(BinaryReader* a);  // RVA: 0x69E310
    ObscuredPrefsData win(a a);  // RVA: 0x564EA0
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> ffc(BinaryReader* a);  // RVA: 0x69D6A0
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> jph(BinaryReader* a);  // RVA: 0x69D7B0
};

// Namespace: <global>
class dbn
{
public:

    // Methods
    ObscuredPrefsData win(a a);  // RVA: 0x564EA0
    b wio(ObscuredPrefsData a);  // RVA: 0x564EA0
    Byte[][] wip(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x41BD30
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wiq(Byte[][] a);  // RVA: 0x41BD30
};

// Namespace: <global>
class dbo
{
public:
    // Static fields
    // static dbo* bmpx;


    // Methods
    void .ctor();  // RVA: 0x629570
    static dbn* jnm();  // RVA: 0x69E540
    b wio(ObscuredPrefsData a);  // RVA: 0x564EA0
    static dbn* ewl();  // RVA: 0x69E420
    Byte[][] wip(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x69E660
    static dbn* wit();  // RVA: 0x69E6E0
    ObscuredPrefsData win(a a);  // RVA: 0x564EA0
    static dbn* mpv();  // RVA: 0x69E5D0
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wiq(Byte[][] a);  // RVA: 0x69E6A0
    static dbn* hts();  // RVA: 0x69E4B0
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
    ObscurationMode <bmpy>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Byte[][] <bmpz>k__BackingField; // 0x0018

    // Methods
    ObscurationMode wiu();  // RVA: 0x668AF0
    Byte[][] wiv();  // RVA: 0x69E850
    void .ctor(Il2CppString* a);  // RVA: 0x69E770
    void .ctor(Byte[][] a);  // RVA: 0x69E800
};

// Namespace: <global>
class dbq
{
public:

    // Methods
    ObscuredFileLocation wiw();  // RVA: 0x423890
    dbp* wix();  // RVA: 0x41ED50
    dbf* wiy();  // RVA: 0x41ED50
    bool wiz();  // RVA: 0x423890
    bool wja();  // RVA: 0x423890
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
    ObscuredFileLocation <bmqa>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    dbp* <bmqb>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbf* <bmqc>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool <bmqd>k__BackingField; // 0x0028
    bool <bmqe>k__BackingField; // 0x0029

    // Methods
    ObscuredFileLocation wiw();  // RVA: 0x668AF0
    void wjb(ObscuredFileLocation a);  // RVA: 0x6755D0
    dbp* wix();  // RVA: 0x69E850
    void wjc(dbp* a);  // RVA: 0x674D90
    dbf* wiy();  // RVA: 0x63DB10
    void wjd(dbf* a);  // RVA: 0x63DB20
    bool wiz();  // RVA: 0x63DB30
    void wje(bool a);  // RVA: 0x63DB40
    bool wja();  // RVA: 0x69EB40
    void wjf(bool a);  // RVA: 0x69EB50
    void .ctor();  // RVA: 0x69E910
    void .ctor(ObscuredFileLocation a);  // RVA: 0x69E9E0
    void .ctor(dbf* a);  // RVA: 0x69E860
    void .ctor(dbp* a, dbf* b, ObscuredFileLocation c, bool d, bool e);  // RVA: 0x69EAC0
};

// Namespace: <global>
class dbs
{
public:
    // Static fields
    // static Il2CppString* bmqf;
    // static Il2CppString* bmqg;
    // static Il2CppString* bmqh;
    // static uint8_t bmqi;
    // static bool bmqj;
    // static bool bmqk;
    // static Il2CppString* bmql;
    // static Il2CppString* bmqm;
    // static dbe* bmqn;
    // static Action* bmqo;
    // static Action* bmqp;
    // static Action* bmqq;
    // static Action* bmqr;
    // static bool bmqs;
    // static dbf* <bmqt>k__BackingField;
    // static Char[][] bmqu;


    // Methods
    static ObscuredFloat jmb(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A34E0
    static void dsg(Il2CppString* a, float b);  // RVA: 0x6A0520
    static Byte[][] wlj(uint8_t a, int32_t b);  // RVA: 0x6A84B0
    static void ngg(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6A5A00
    static void dud(Il2CppString* a, float b);  // RVA: 0x6A0660
    static void wkp(Il2CppString* a, int32_t b);  // RVA: 0x6A79D0
    static void wjs(Action* a);  // RVA: 0x6A6E20
    static Vector2 wll(Il2CppString* a);  // RVA: 0x6A85A0
    static void wmr(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6A99C0
    static void cwy();  // RVA: 0x69F930
    static void wjq(Action* a);  // RVA: 0x6A6C20
    static Rect wly(Il2CppString* a, Rect b);  // RVA: 0x6A8E00
    static void wlq(Il2CppString* a, Quaternion b);  // RVA: 0x6A8930
    static void wmk(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A95E0
    static void kii(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A3F10
    static void wmu(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6A9B80
    static bool wjw();  // RVA: 0x6A70A0
    static void wmd(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6A9110
    static void td(Il2CppString* a, ObscuredInt b);  // RVA: 0x6A6400
    static ObscuredString* hzk(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A2700
    static void wkn();  // RVA: 0x6A7790
    static ObscuredShort bet(Il2CppString* a, ObscuredShort b);  // RVA: 0x69ED80
    static ObscuredDecimal wnb(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6AA300
    static bool wkd(Il2CppString* a);  // RVA: 0x6A7430
    static ObscuredString* jsw(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A3820
    static void wkf();  // RVA: 0x6A7570
    static float fqf(Il2CppString* a, float b);  // RVA: 0x6A1380
    static ObscuredSByte wnj(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6AAC60
    static void wmc(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6A9040
    static void kd(Il2CppString* a, ObscuredInt b);  // RVA: 0x6A3D70
    static Il2CppString* ogb(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A6050
    static void wlw(Il2CppString* a, Rect b);  // RVA: 0x6A8CC0
    static float wku(Il2CppString* a, float b);  // RVA: 0x6A7C00
    static void nsi(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6A5E60
    static ObscuredDecimal bwy(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69F350
    static void wmo(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A9830
    static void wjv(DeviceLockLevel a);  // RVA: 0x6A7000
    static void mam(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6A4F60
    static void wmt(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6A9AF0
    static Il2CppString* wks(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A7B20
    static ObscuredDateTimeOffset wna(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6AA140
    static int32_t wkq(Il2CppString* a, int32_t b);  // RVA: 0x6A7A40
    static void wkx(Il2CppString* a, double b);  // RVA: 0x6A7D50
    static uint32_t wkw(Il2CppString* a, uint32_t b);  // RVA: 0x6A7CE0
    static void wjl(Action* a);  // RVA: 0x6A6720
    static double wky(Il2CppString* a, double b);  // RVA: 0x6A7DC0
    static void wkz(Il2CppString* a, Decimal b);  // RVA: 0x6A7E30
    static ObscuredFloat jdl(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A32B0
    static float nyz(Il2CppString* a, float b);  // RVA: 0x6A5F60
    static ObscuredBigInteger wnc(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6AA480
    static void wld(Il2CppString* a, uint64_t b);  // RVA: 0x6A8030
    static void jrr(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6A3790
    static Il2CppString* wnw(Il2CppString* a, d b);  // RVA: 0x564EA0
    static Vector3 wlo(Il2CppString* a);  // RVA: 0x6A8770
    static void wlz(Il2CppString* a, ObscuredBool b);  // RVA: 0x6A8EA0
    static Byte[][] wli(Il2CppString* a, uint8_t b, int32_t c);  // RVA: 0x6A8260
    static ObscuredInt ceo(Il2CppString* a, ObscuredInt b);  // RVA: 0x69F5E0
    static Il2CppString* woc(Il2CppString* a, Il2CppString* b);  // RVA: 0x6AC2F0
    static ObscuredVector3Int wns(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6AB2E0
    static void wlb(Il2CppString* a, int64_t b);  // RVA: 0x6A7F50
    static ObscuredString* hfe(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A1D50
    static Decimal wla(Il2CppString* a, Decimal defaultValue);  // RVA: 0x6A7EB0
    static void ngz(Il2CppString* a, ObscuredShort b);  // RVA: 0x6A5AB0
    static void nhu(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A5B40
    static void mjs(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A5090
    static float glo(Il2CppString* a, float b);  // RVA: 0x6A1860
    static ObscuredLong lxx(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A4E70
    static void wmq(Il2CppString* a, ObscuredULong b);  // RVA: 0x6A9930
    static void ijf(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6A2ED0
    static ObscuredQuaternion wni(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6AAB40
    static Rect wlx(Il2CppString* a);  // RVA: 0x6A8D40
    static void wkv(Il2CppString* a, uint32_t b);  // RVA: 0x6A7C70
    static void wmj(Il2CppString* a, ObscuredInt b);  // RVA: 0x6A9560
    static void wma(Il2CppString* a, ObscuredByte b);  // RVA: 0x6A8F30
    static void wms(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6A9A50
    static Byte[][] eic(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x6A0890
    static void wmb(Il2CppString* a, ObscuredChar b);  // RVA: 0x6A8FB0
    static void wjj(Il2CppString* a);  // RVA: 0x6A6550
    static StorageDataType fiv(Il2CppString* a);  // RVA: 0x6A1180
    static void wmp(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6A98B0
    static void mry(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6A57D0
    static void wke(Il2CppString* a);  // RVA: 0x6A74F0
    static void wko();  // RVA: 0x6A78B0
    static ObscuredBigInteger jix(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6A33C0
    static void wml(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6A9670
    static StorageDataType opc(Il2CppString* a);  // RVA: 0x6A6290
    static void wmn(Il2CppString* a, ObscuredShort b);  // RVA: 0x6A97A0
    static Byte[][] wof(Il2CppString* a);  // RVA: 0x6AD0B0
    static StorageDataType wnv(Il2CppString* a);  // RVA: 0x6AB730
    static void byn();  // RVA: 0x69F4D0
    static void cx(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69FA70
    static void jwi(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6A39E0
    static Color32 wlv(Il2CppString* a, Color32 b);  // RVA: 0x6A8C50
    static ObscuredVector2 wnp(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6AB050
    static Byte[][] wob(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x6AC220
    static void cwz(Il2CppString* a, ObscuredInt b);  // RVA: 0x69F9F0
    static int64_t wlc(Il2CppString* a, int64_t b);  // RVA: 0x6A7FC0
    static ObscuredChar wmy(Il2CppString* a, ObscuredChar b);  // RVA: 0x6A9EC0
    static bool wlg(Il2CppString* a, bool b);  // RVA: 0x6A8180
    static Vector2 wlm(Il2CppString* a, Vector2 b);  // RVA: 0x6A8680
    static ObscuredBool wmw(Il2CppString* a, ObscuredBool b);  // RVA: 0x6A9CE0
    static void joz(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6A35F0
    static ObscuredDouble wnd(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6AA5A0
    static Byte[][] mng(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x6A5130
    static ObscuredDateTime wmz(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6A9FC0
    static ObscuredShort jwz(Il2CppString* a, ObscuredShort b);  // RVA: 0x6A3A70
    static void wjz(bool a);  // RVA: 0x6A7260
    static ObscuredULong wnn(Il2CppString* a, ObscuredULong b);  // RVA: 0x6AAED0
    static void lbo(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6A4AB0
    static void ghp(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A1710
    static Il2CppString* wnz(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x6AB870
    static void ggj(Il2CppString* a);  // RVA: 0x6A1560
    static dbe* wjk();  // RVA: 0x6A65B0
    static ObscuredUShort wno(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6AAF90
    static void ioy(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6A30C0
    static c wkj(Il2CppString* a, c b);  // RVA: 0x564EA0
    static void hwc(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6A2650
    static void kkr(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6A3FA0
    static ObscuredVector2 gqx(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6A1A50
    static Byte[][] hcj(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x6A1C80
    static void enn(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6A0A50
    static void wjp(Action* a);  // RVA: 0x6A6B20
    static void fnl(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6A1220
    static void odu(Il2CppString* a, ObscuredByte b);  // RVA: 0x6A5FD0
    static void ehw(Il2CppString* a, ObscuredByte b);  // RVA: 0x6A0810
    static Byte[][] nnr(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x6A5D50
    static ObscuredVector3 wnr(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6AB1E0
    static void wjg(Il2CppString* a);  // RVA: 0x6A6480
    static ObscuredLong wnh(Il2CppString* a, ObscuredLong b);  // RVA: 0x6AAA50
    static bool wkc(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x6A7370
    static void jrn(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A3720
    static void mxl(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A58F0
    static ObscuredVector3 bhq(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x69EE40
    static bool hud(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x6A2460
    static e wnx(Il2CppString* a, Il2CppString* b, e c, Il2CppString* d);  // RVA: 0x564EA0
    static void wkr(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A7AB0
    static ObscuredULong gce(Il2CppString* a, ObscuredULong b);  // RVA: 0x6A14A0
    static Byte[][] bqn(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x69F190
    static Il2CppString* gmz(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A18D0
    static ObscuredString* wnl(Il2CppString* a, ObscuredString* b);  // RVA: 0x6AADA0
    static void exy();  // RVA: 0x6A0EE0
    static Il2CppString* fdp(Il2CppString* a);  // RVA: 0x6A0FA0
    static ObscuredInt wng(Il2CppString* a, ObscuredInt b);  // RVA: 0x6AA980
    static void dfg();  // RVA: 0x6A01B0
    static ObscuredVector2 jwd(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6A3910
    static void wmi(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6A94B0
    static Byte[][] hjf(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x6A1DD0
    static void wmh(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A9410
    static void icw(Il2CppString* a);  // RVA: 0x6A2800
    static Il2CppString* wnu(Il2CppString* a);  // RVA: 0x6AB670
    static StorageDataType eec(Il2CppString* a);  // RVA: 0x6A0770
    static void iyl();  // RVA: 0x6A3210
    static bool epx(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A0B00
    static void wlk(Il2CppString* a, Vector2 b);  // RVA: 0x6A8530
    static Color32 wlu(Il2CppString* a);  // RVA: 0x6A8BB0
    static void wkt(Il2CppString* a, float b);  // RVA: 0x6A7B90
    static bool mps(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A52F0
    static void wlf(Il2CppString* a, bool b);  // RVA: 0x6A8110
    static void .cctor();  // RVA: 0x69EC00
    static Byte[][] woe(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x6ACFC0
    static Il2CppString* kxi(Il2CppString* a);  // RVA: 0x6A4850
    static Il2CppString* gt(Il2CppString* a);  // RVA: 0x6A1B20
    static Char[][] wnt(Il2CppString* a, Il2CppString* b);  // RVA: 0x6AB3E0
    static void bkg(Il2CppString* a, ObscuredByte b);  // RVA: 0x69F0A0
    static float jsy(Il2CppString* a, float b);  // RVA: 0x6A38A0
    static void Save();  // RVA: 0x69EB60
    static ObscuredLong hsm(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A2370
    static b wki(Il2CppString* a, b b);  // RVA: 0x564EA0
    static ObscuredUInt wnm(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6AAE20
    static void wka();  // RVA: 0x6A7300
    static Il2CppString* hjm(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A1EA0
    static void wkh(Il2CppString* a, a b);  // RVA: 0x564EA0
    static void le(Il2CppString* a, ObscuredInt b);  // RVA: 0x6A4B60
    static void mii(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6A5000
    static void ena(Il2CppString* a, ObscuredBool b);  // RVA: 0x6A09C0
    static void ccg(Il2CppString* a, ObscuredByte b);  // RVA: 0x69F560
    static bool wjy();  // RVA: 0x6A71D0
    static void iuo(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6A3170
    static Il2CppString* wkm(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A7770
    static void crw(Il2CppString* a, ObscuredFloat b);  // RVA: 0x69F890
    static void icg(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6A2780
    static void wkk(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A76C0
    static void onk();  // RVA: 0x6A61D0
    static Byte[][] woa(Il2CppString* a, Il2CppString* b);  // RVA: 0x6ABC90
    static void bnm(Il2CppString* a, Il2CppString* b);  // RVA: 0x69F120
    static ObscuredBigInteger cpi(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x69F770
    static void wkb(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A7310
    static void wjr(Action* a);  // RVA: 0x6A6D20
    static void jyb(Il2CppString* a);  // RVA: 0x6A3BC0
    static Vector3 wlp(Il2CppString* a, Vector3 b);  // RVA: 0x6A8880
    static void cyc(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6A0040
    static void bjc(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x69F010
    static void dhe(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6A0240
    static ObscuredLong gl(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A1770
    static void lmc(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6A4D60
    static Byte[][] wny(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x6AB7D0
    static void eka(Il2CppString* a, ObscuredShort b);  // RVA: 0x6A0930
    static Quaternion wlr(Il2CppString* a);  // RVA: 0x6A89B0
    static void wmm(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6A9720
    static ObscuredInt bio(Il2CppString* a, ObscuredInt b);  // RVA: 0x69EF40
    static void wjn(Action* a);  // RVA: 0x6A6920
    static void imw(Il2CppString* a, ObscuredChar b);  // RVA: 0x6A3030
    static dbf* wjt();  // RVA: 0x6A6F20
    static Quaternion wls(Il2CppString* a, Quaternion b);  // RVA: 0x6A8AA0
    static void buc(Il2CppString* a, ObscuredUInt b);  // RVA: 0x69F2D0
    static void kli(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6A40A0
    static void wln(Il2CppString* a, Vector3 b);  // RVA: 0x6A86F0
    static void bdj(Il2CppString* a, ObscuredUShort b);  // RVA: 0x69ECF0
    static void wlt(Il2CppString* a, Color32 b);  // RVA: 0x6A8B40
    static void jpc(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6A36A0
    static ObscuredByte otr(Il2CppString* a, ObscuredByte b);  // RVA: 0x6A6330
    static Il2CppString* ktc(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x6A42D0
    static void igo(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6A2880
    static void wjo(Action* a);  // RVA: 0x6A6A20
    static void gvy(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A1BE0
    static void wjm(Action* a);  // RVA: 0x6A6820
    static ObscuredGuid kmx(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6A4130
    static Byte[][] cxg(Il2CppString* a, Il2CppString* b);  // RVA: 0x69FB20
    static DeviceLockLevel wju();  // RVA: 0x6A6F70
    static void eaj(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6A06D0
    static void wmv(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6A9C30
    static void for(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6A12D0
    static void fuk(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6A13F0
    static void kdr(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A3E70
    static Il2CppString* wji();  // RVA: 0x6A6540
    static void wlh(Il2CppString* a, Byte[][] b);  // RVA: 0x6A81F0
    static void jyc(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6A3C40
    static ObscuredGuid kxk(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6A4910
    static void lxt(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6A4DF0
    static ObscuredDouble gho(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6A15E0
    static ObscuredLong kwq(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A4760
    static ObscuredByte wmx(Il2CppString* a, ObscuredByte b);  // RVA: 0x6A9DF0
    static void iky(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A2FD0
    static void mov();  // RVA: 0x6A5260
    static bool wkl(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A7710
    static void fgc();  // RVA: 0x6A1060
    static Il2CppString* llb(Il2CppString* a);  // RVA: 0x6A4CA0
    static ObscuredVector2Int wnq(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6AB120
    static ObscuredGuid wnf(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6AA7E0
    static ObscuredString* neq(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A5980
    static void nru(Il2CppString* a, float b);  // RVA: 0x6A5DF0
    static void jxm(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A3B30
    static ObscuredShort wnk(Il2CppString* a, ObscuredShort b);  // RVA: 0x6AACE0
    static ObscuredULong nn(Il2CppString* a, ObscuredULong b);  // RVA: 0x6A5BC0
    static void mos(Il2CppString* a, ObscuredShort b);  // RVA: 0x6A51D0
    static ObscuredShort lgy(Il2CppString* a, ObscuredShort b);  // RVA: 0x6A4BE0
    static ObscuredVector2 duc(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6A0590
    static void wme(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6A9210
    static void wkg();  // RVA: 0x6A7630
    static void kdq(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6A3DF0
    static ObscuredShort cov(Il2CppString* a, ObscuredShort b);  // RVA: 0x69F6B0
    static void wmf(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6A92C0
    static StorageDataType mrv(Il2CppString* a);  // RVA: 0x6A5730
    static ObscuredFloat wne(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6AA6D0
    static void iir(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A2920
    static void hvf(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6A25A0
    static void mvf(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A5880
    static void hup(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A2520
    static void dai();  // RVA: 0x6A00F0
    static void dpz(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6A04A0
    static void wjx(bool a);  // RVA: 0x6A7130
    static Byte[][] ijd(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A29A0
    static Byte[][] nna(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x6A5C80
    static void jzn(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6A3CE0
    static bool dkq(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A02C0
    static Il2CppString* wjh();  // RVA: 0x6A64F0
    static uint64_t wle(Il2CppString* a, uint64_t b);  // RVA: 0x6A80A0
    static Il2CppString* dpn(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A0320
    static void wmg(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6A9370
    static bool wod(Il2CppString* a, Il2CppString* b);  // RVA: 0x6AC470
    static Il2CppString* bua(Il2CppString* a, Il2CppString* b);  // RVA: 0x69F260
    static bool hpv(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A2020
    static bool kwn(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A4700
};

// Namespace: <global>
class dbt
{
public:

    // Methods
    int32_t wog();  // RVA: 0x422CC0
    void woh();  // RVA: 0x430730
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
        static ObscuredBigInteger op_Implicit(BigInteger value);  // RVA: 0x68A910
        static ObscuredBigInteger op_Implicit(uint8_t value);  // RVA: 0x68ACE0
        static ObscuredBigInteger op_Implicit(int8_t value);  // RVA: 0x68AB00
        static ObscuredBigInteger op_Implicit(int16_t value);  // RVA: 0x68A880
        static ObscuredBigInteger op_Implicit(uint16_t value);  // RVA: 0x68AD70
        static ObscuredBigInteger op_Implicit(int32_t value);  // RVA: 0x68A760
        static ObscuredBigInteger op_Implicit(uint32_t value);  // RVA: 0x68A7F0
        static ObscuredBigInteger op_Implicit(int64_t value);  // RVA: 0x68ABC0
        static ObscuredBigInteger op_Implicit(uint64_t value);  // RVA: 0x68AA70
        static ObscuredBigInteger op_Implicit(float value);  // RVA: 0x68A950
        static ObscuredBigInteger op_Implicit(double value);  // RVA: 0x68A9E0
        static ObscuredBigInteger op_Implicit(Decimal value);  // RVA: 0x68AC50
        static BigInteger op_Implicit(ObscuredBigInteger value);  // RVA: 0x68AB90
        static uint8_t woi(ObscuredBigInteger a);  // RVA: 0x68AE60
        static int8_t woj(ObscuredBigInteger a);  // RVA: 0x68AED0
        static int16_t wok(ObscuredBigInteger a);  // RVA: 0x68AF40
        static uint16_t wol(ObscuredBigInteger a);  // RVA: 0x68AFB0
        static int32_t wom(ObscuredBigInteger a);  // RVA: 0x68B020
        static uint32_t won(ObscuredBigInteger a);  // RVA: 0x68B090
        static int64_t woo(ObscuredBigInteger a);  // RVA: 0x68B100
        static uint64_t wop(ObscuredBigInteger a);  // RVA: 0x68B170
        static float woq(ObscuredBigInteger a);  // RVA: 0x68B1E0
        static double wor(ObscuredBigInteger a);  // RVA: 0x68B250
        static Decimal wos(ObscuredBigInteger a);  // RVA: 0x68B2C0
        static ObscuredBigInteger wot(ObscuredBigInteger a, int32_t b);  // RVA: 0x68B350
        static ObscuredBigInteger wou(ObscuredBigInteger a, int32_t b);  // RVA: 0x68B450
        static ObscuredBigInteger wov(ObscuredBigInteger a);  // RVA: 0x68B550
        static ObscuredBigInteger wow(ObscuredBigInteger a);  // RVA: 0x68B640
        static ObscuredBigInteger wox(ObscuredBigInteger a);  // RVA: 0x68B730
        static ObscuredBigInteger woy(ObscuredBigInteger a, int64_t b);  // RVA: 0x68B820
        static ObscuredBigInteger woz(ObscuredBigInteger a, int64_t b);  // RVA: 0x68B950
        static ObscuredBigInteger wpa(ObscuredBigInteger a);  // RVA: 0x68BA90
        static ObscuredBigInteger wpb(ObscuredBigInteger a);  // RVA: 0x68BC30
        static bool wpc(ObscuredBigInteger a, int64_t b);  // RVA: 0x68BDD0
        static bool wpd(ObscuredBigInteger a, int64_t b);  // RVA: 0x68BE90
        static bool wpe(ObscuredBigInteger a, int64_t b);  // RVA: 0x68BF50
        static bool wpf(ObscuredBigInteger a, int64_t b);  // RVA: 0x68BFF0
        static bool wpg(ObscuredBigInteger a, int64_t b);  // RVA: 0x68C090
        static bool wph(ObscuredBigInteger a, int64_t b);  // RVA: 0x68C130
        static bool wpi(ObscuredBigInteger a, uint64_t b);  // RVA: 0x68C1D0
        static bool wpj(ObscuredBigInteger a, uint64_t b);  // RVA: 0x68C290
        static bool wpk(ObscuredBigInteger a, uint64_t b);  // RVA: 0x68C350
        static bool wpl(ObscuredBigInteger a, uint64_t b);  // RVA: 0x68C3F0
        static bool wpm(ObscuredBigInteger a, uint64_t b);  // RVA: 0x68C490
        static bool wpn(ObscuredBigInteger a, uint64_t b);  // RVA: 0x68C530
        static bool wpo(int64_t a, ObscuredBigInteger b);  // RVA: 0x68C5D0
        static bool wpp(int64_t a, ObscuredBigInteger b);  // RVA: 0x68C670
        static bool wpq(int64_t a, ObscuredBigInteger b);  // RVA: 0x68C710
        static bool wpr(int64_t a, ObscuredBigInteger b);  // RVA: 0x68C7B0
        static bool wps(int64_t a, ObscuredBigInteger b);  // RVA: 0x68C850
        static bool wpt(int64_t a, ObscuredBigInteger b);  // RVA: 0x68C8F0
        static bool wpu(uint64_t a, ObscuredBigInteger b);  // RVA: 0x68C990
        static bool wpv(uint64_t a, ObscuredBigInteger b);  // RVA: 0x68CA30
        static bool wpw(uint64_t a, ObscuredBigInteger b);  // RVA: 0x68CAD0
        static bool wpx(uint64_t a, ObscuredBigInteger b);  // RVA: 0x68CB70
        static bool wpy(uint64_t a, ObscuredBigInteger b);  // RVA: 0x68CC10
        static bool wpz(uint64_t a, ObscuredBigInteger b);  // RVA: 0x68CCB0
        static ObscuredBigInteger wqa(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68CD50
        static ObscuredBigInteger wqb(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68CE90
        static ObscuredBigInteger wqc(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68CFD0
        static ObscuredBigInteger wqd(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68D110
        static ObscuredBigInteger wqe(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68D250
        static ObscuredBigInteger wqf(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68D390
        static ObscuredBigInteger wqg(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68D4D0
        static ObscuredBigInteger wqh(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x68D610
        static ObscuredBigInteger wqi(ObscuredBigInteger a, int32_t b);  // RVA: 0x68D750
        int32_t GetHashCode();  // RVA: 0x68A3E0
        Il2CppString* ToString();  // RVA: 0x68A4B0
        Il2CppString* wqj(Il2CppString* a);  // RVA: 0x68D840
        Il2CppString* wqk(IFormatProvider* a);  // RVA: 0x68D8C0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x68A520
        bool Equals(Il2CppObject* other);  // RVA: 0x68A120
        bool Equals(BigInteger other);  // RVA: 0x68A090
        bool Equals(ObscuredBigInteger obj);  // RVA: 0x68A2B0
        int32_t CompareTo(ObscuredBigInteger other);  // RVA: 0x689F50
        int32_t CompareTo(BigInteger other);  // RVA: 0x68A000
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x689ED0
        int32_t wql(int64_t a);  // RVA: 0x68D940
        int32_t wqm(uint64_t a);  // RVA: 0x68D9C0
        Byte[][] wqn();  // RVA: 0x68DA40
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(BigInteger value);  // RVA: 0x68A5D0
        static BigInteger wqo(BigInteger a, uint32_t b);  // RVA: 0x68DAB0
        static BigInteger wqp(BigInteger a, uint32_t b);  // RVA: 0x68DC10
        static ObscuredBigInteger wqq(BigInteger a, uint32_t b);  // RVA: 0x68DC70
        static uint32_t wqr();  // RVA: 0x68DD40
        BigInteger wqs(uint32_t a);  // RVA: 0x68DD50
        void wqt(BigInteger a, uint32_t b);  // RVA: 0x68DE30
        BigInteger wqu();  // RVA: 0x68AB90
        void woh();  // RVA: 0x68AE10
        static bool wqv(BigInteger a, int32_t b);  // RVA: 0x68DEF0
        void wqw(BigInteger a);  // RVA: 0x68DF10
        BigInteger wqx();  // RVA: 0x68DFF0
        bool wqy();  // RVA: 0x68E210
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x68A450
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
    bool Equals(BigIntegerContents other);  // RVA: 0x689AC0
    bool Equals(Il2CppObject* obj);  // RVA: 0x689B40
    int32_t GetHashCode();  // RVA: 0x689C20
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
        SerializableBigInteger wqz(uint32_t a);  // RVA: 0x69D3D0
        BigInteger wra(uint32_t a);  // RVA: 0x69D470
        SerializableBigInteger wrb(uint32_t a);  // RVA: 0x69D3D0
        static BigInteger op_Implicit(SerializableBigInteger value);  // RVA: 0x69D380
        bool Equals(SerializableBigInteger other);  // RVA: 0x69D1E0
        bool Equals(Il2CppObject* obj);  // RVA: 0x69D250
        int32_t GetHashCode();  // RVA: 0x69D330
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
        static ObscuredBool op_Implicit(bool value);  // RVA: 0x68E730
        static bool op_Implicit(ObscuredBool value);  // RVA: 0x68E7B0
        int32_t GetHashCode();  // RVA: 0x68E5F0
        Il2CppString* ToString();  // RVA: 0x68E680
        bool Equals(Il2CppObject* other);  // RVA: 0x68E390
        bool Equals(ObscuredBool obj);  // RVA: 0x68E580
        bool Equals(bool other);  // RVA: 0x68E530
        int32_t CompareTo(ObscuredBool other);  // RVA: 0x68E290
        int32_t CompareTo(bool other);  // RVA: 0x68E2F0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x68E340
        int32_t wog();  // RVA: 0x68AE00
        void wrc(bool a);  // RVA: 0x68E820
        bool wrd();  // RVA: 0x6687D0
        void .ctor(bool value);  // RVA: 0x68E6C0
        static int32_t wre(bool a, uint8_t b);  // RVA: 0x68E830
        static bool wrf(int32_t a, uint8_t b);  // RVA: 0x68E850
        static ObscuredBool wrg(int32_t a, uint8_t b);  // RVA: 0x68E870
        static uint8_t wrh();  // RVA: 0x68E8E0
        int32_t wri(uint8_t a);  // RVA: 0x68E8F0
        void wrj(int32_t a, uint8_t b);  // RVA: 0x68E990
        bool wrk();  // RVA: 0x68E9F0
        void woh();  // RVA: 0x68E7C0
        static bool wrl(bool a, int32_t b);  // RVA: 0x68EA00
        void wrm(bool a);  // RVA: 0x68EA10
        bool wrn();  // RVA: 0x68EA50
        bool wro();  // RVA: 0x68EB90
        static void wrp(uint8_t a);  // RVA: 0x634510
        void wrq();  // RVA: 0x634510
        static bool wrr(int32_t a, uint8_t b);  // RVA: 0x68EBB0
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x68E630
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
        static ObscuredByte op_Implicit(uint8_t value);  // RVA: 0x68EF90
        static uint8_t op_Implicit(ObscuredByte value);  // RVA: 0x68EFF0
        static ObscuredByte wrs(ObscuredByte a);  // RVA: 0x68F050
        static ObscuredByte wrt(ObscuredByte a);  // RVA: 0x68F0B0
        static ObscuredByte wru(ObscuredByte a, int32_t b);  // RVA: 0x68F110
        int32_t GetHashCode();  // RVA: 0x68EE40
        Il2CppString* ToString();  // RVA: 0x68EEC0
        Il2CppString* wrv(Il2CppString* a);  // RVA: 0x68F170
        Il2CppString* wrw(IFormatProvider* a);  // RVA: 0x68F1A0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x68EEF0
        bool Equals(Il2CppObject* other);  // RVA: 0x68EC90
        bool Equals(ObscuredByte obj);  // RVA: 0x68EDE0
        bool Equals(uint8_t other);  // RVA: 0x68EC60
        int32_t CompareTo(ObscuredByte other);  // RVA: 0x68EBC0
        int32_t CompareTo(uint8_t other);  // RVA: 0x68EC30
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x68EC00
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(uint8_t value);  // RVA: 0x68EF30
        static uint8_t wrx(uint8_t a, uint8_t b);  // RVA: 0x68F1D0
        static void wry(Byte[][] a, uint8_t b);  // RVA: 0x68F1E0
        static uint8_t wrz(uint8_t a, uint8_t b);  // RVA: 0x68F240
        static void wsa(Byte[][] a, uint8_t b);  // RVA: 0x68F250
        static ObscuredByte wsb(uint8_t a, uint8_t b);  // RVA: 0x68F2B0
        static uint8_t wsc();  // RVA: 0x68E8E0
        uint8_t wsd(uint8_t a);  // RVA: 0x68F300
        void wse(uint8_t a, uint8_t b);  // RVA: 0x68F380
        uint8_t wsf();  // RVA: 0x68F3D0
        void woh();  // RVA: 0x68F010
        static bool wsg(uint8_t a, int32_t b);  // RVA: 0x68F3E0
        void wsh(uint8_t a);  // RVA: 0x68F3F0
        uint8_t wsi();  // RVA: 0x68F420
        bool wsj();  // RVA: 0x68F520
        static void wsk(uint8_t a);  // RVA: 0x634510
        void wsl();  // RVA: 0x634510
        static uint8_t wsm(uint8_t a, uint8_t b);  // RVA: 0x68F540
        static void wsn(Byte[][] a, uint8_t b);  // RVA: 0x68F580
        static uint8_t wso(uint8_t a, uint8_t b);  // RVA: 0x68F5C0
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x68EE70
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
        static ObscuredChar op_Implicit(wchar_t value);  // RVA: 0x68FA60
        static wchar_t op_Implicit(ObscuredChar value);  // RVA: 0x68FA50
        static ObscuredChar wsp(ObscuredChar a);  // RVA: 0x68FB10
        static ObscuredChar wsq(ObscuredChar a);  // RVA: 0x68FBA0
        static ObscuredChar wsr(ObscuredChar a, int32_t b);  // RVA: 0x68FC30
        int32_t GetHashCode();  // RVA: 0x68F970
        Il2CppString* ToString();  // RVA: 0x68F9B0
        Il2CppString* wss(IFormatProvider* a);  // RVA: 0x68FCB0
        bool Equals(Il2CppObject* other);  // RVA: 0x68F720
        bool Equals(ObscuredChar other);  // RVA: 0x68F8E0
        bool Equals(wchar_t other);  // RVA: 0x68F6D0
        int32_t CompareTo(ObscuredChar other);  // RVA: 0x68F5D0
        int32_t CompareTo(wchar_t other);  // RVA: 0x68F630
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x68F680
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(wchar_t value);  // RVA: 0x68F9F0
        static wchar_t wst(wchar_t a, wchar_t b);  // RVA: 0x68FD00
        static wchar_t wsu(wchar_t a, wchar_t b);  // RVA: 0x68FD10
        static ObscuredChar wsv(wchar_t a, wchar_t b);  // RVA: 0x68FD20
        static wchar_t wsw();  // RVA: 0x68FD80
        wchar_t wsx(wchar_t a);  // RVA: 0x68FD90
        void wsy(wchar_t a, wchar_t b);  // RVA: 0x68FE40
        wchar_t wsz();  // RVA: 0x68FE90
        void woh();  // RVA: 0x68FAC0
        static bool wta(wchar_t a, int32_t b);  // RVA: 0x68FEA0
        void wtb(wchar_t a);  // RVA: 0x68FEB0
        wchar_t wtc();  // RVA: 0x68FEE0
        bool wtd();  // RVA: 0x690020
        static void wte(wchar_t a);  // RVA: 0x634510
        void wtf();  // RVA: 0x634510
        static wchar_t wtg(wchar_t a, wchar_t b);  // RVA: 0x690070
        static wchar_t wth(wchar_t a, wchar_t b);  // RVA: 0x690070
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
        int64_t wti();  // RVA: 0x694530
        static ObscuredDateTime op_Implicit(DateTime value);  // RVA: 0x694450
        static DateTime op_Implicit(ObscuredDateTime value);  // RVA: 0x694480
        int32_t GetHashCode();  // RVA: 0x694020
        Il2CppString* ToString();  // RVA: 0x694300
        Il2CppString* wtj(Il2CppString* a);  // RVA: 0x6945E0
        TypeCode GetTypeCode();  // RVA: 0x6940D0
        bool wtk(IFormatProvider* a);  // RVA: 0x6946A0
        wchar_t wtl(IFormatProvider* a);  // RVA: 0x6946E0
        int8_t wtm(IFormatProvider* a);  // RVA: 0x694720
        uint8_t wtn(IFormatProvider* a);  // RVA: 0x694760
        int16_t wto(IFormatProvider* a);  // RVA: 0x6947A0
        uint16_t wtp(IFormatProvider* a);  // RVA: 0x6947E0
        int32_t wtq(IFormatProvider* a);  // RVA: 0x694820
        uint32_t wtr(IFormatProvider* a);  // RVA: 0x694860
        int64_t wts(IFormatProvider* a);  // RVA: 0x6948A0
        uint64_t wtt(IFormatProvider* a);  // RVA: 0x6948E0
        float wtu(IFormatProvider* a);  // RVA: 0x694920
        double wtv(IFormatProvider* a);  // RVA: 0x694960
        Decimal wtw(IFormatProvider* a);  // RVA: 0x6949A0
        DateTime wtx(IFormatProvider* a);  // RVA: 0x6949E0
        Il2CppObject* wty(Type* a, IFormatProvider* b);  // RVA: 0x694A50
        Il2CppString* ToString(IFormatProvider* provider);  // RVA: 0x694170
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x694230
        bool Equals(Il2CppObject* other);  // RVA: 0x693E00
        bool Equals(ObscuredDateTime other);  // RVA: 0x693DA0
        bool Equals(DateTime other);  // RVA: 0x693F60
        int32_t CompareTo(ObscuredDateTime other);  // RVA: 0x693BE0
        int32_t CompareTo(DateTime other);  // RVA: 0x693B20
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x693CE0
        static DateTime wtz(ObscuredDateTime a, TimeSpan b);  // RVA: 0x694C50
        static DateTime wua(ObscuredDateTime a, TimeSpan b);  // RVA: 0x694D10
        static TimeSpan wub(ObscuredDateTime a, DateTime b);  // RVA: 0x694DD0
        static TimeSpan wuc(DateTime a, ObscuredDateTime b);  // RVA: 0x694E90
        static bool wud(ObscuredDateTime a, DateTime b);  // RVA: 0x694F50
        static bool wue(DateTime a, ObscuredDateTime b);  // RVA: 0x695010
        static bool wuf(ObscuredDateTime a, DateTime b);  // RVA: 0x6950D0
        static bool wug(DateTime a, ObscuredDateTime b);  // RVA: 0x695190
        static bool wuh(ObscuredDateTime a, DateTime b);  // RVA: 0x695250
        static bool wui(DateTime a, ObscuredDateTime b);  // RVA: 0x695310
        static bool wuj(ObscuredDateTime a, DateTime b);  // RVA: 0x6953D0
        static bool wuk(DateTime a, ObscuredDateTime b);  // RVA: 0x695490
        static bool wul(ObscuredDateTime a, DateTime b);  // RVA: 0x695550
        static bool wum(DateTime a, ObscuredDateTime b);  // RVA: 0x695610
        static bool wun(ObscuredDateTime a, DateTime b);  // RVA: 0x6956D0
        static bool wuo(DateTime a, ObscuredDateTime b);  // RVA: 0x695790
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(DateTime value);  // RVA: 0x6943B0
        static int64_t wup(DateTime a, int64_t b);  // RVA: 0x695850
        static DateTime wuq(int64_t a, int64_t b);  // RVA: 0x6958B0
        static ObscuredDateTime wur(int64_t a, int64_t b);  // RVA: 0x6959A0
        static int64_t wus();  // RVA: 0x693580
        int64_t wut(int64_t a);  // RVA: 0x6959D0
        void wuu(int64_t a, int64_t b);  // RVA: 0x695AD0
        DateTime wuv();  // RVA: 0x695B80
        void woh();  // RVA: 0x6944E0
        static bool wuw(DateTime a, int32_t b);  // RVA: 0x695BE0
        static bool wux(int64_t a, int32_t b);  // RVA: 0x693870
        void wuy(int64_t a);  // RVA: 0x693880
        static int64_t wuz(int64_t a, int64_t b);  // RVA: 0x6938B0
        static int64_t wva(int64_t a, int64_t b);  // RVA: 0x6938C0
        DateTime wvb();  // RVA: 0x694480
        int64_t wvc();  // RVA: 0x695C40
        bool wvd();  // RVA: 0x693B00
        static DateTime wve(int64_t a, int64_t b);  // RVA: 0x695DD0
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x6940E0
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
        int64_t wvf();  // RVA: 0x690C20
        DateTime wvg();  // RVA: 0x690CF0
        DateTime wvh();  // RVA: 0x690DC0
        int32_t wvi();  // RVA: 0x690E90
        DayOfWeek wvj();  // RVA: 0x690F60
        int32_t wvk();  // RVA: 0x691030
        int32_t wvl();  // RVA: 0x691100
        int32_t wvm();  // RVA: 0x6911D0
        int32_t wvn();  // RVA: 0x6912A0
        int32_t wvo();  // RVA: 0x691370
        TimeSpan wvp();  // RVA: 0x691440
        int32_t wvq();  // RVA: 0x691510
        TimeSpan wvr();  // RVA: 0x6915E0
        DateTime wvs();  // RVA: 0x6916B0
        int32_t wvt();  // RVA: 0x691780
        static ObscuredDateTimeOffset op_Implicit(DateTimeOffset value);  // RVA: 0x690A80
        static DateTimeOffset op_Implicit(ObscuredDateTimeOffset value);  // RVA: 0x690B30
        int32_t GetHashCode();  // RVA: 0x6906A0
        Il2CppString* ToString();  // RVA: 0x690910
        Il2CppString* wvu(Il2CppString* a);  // RVA: 0x691850
        Il2CppString* wvv(IFormatProvider* a);  // RVA: 0x691930
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x690820
        bool Equals(Il2CppObject* other);  // RVA: 0x6904E0
        bool Equals(ObscuredDateTimeOffset other);  // RVA: 0x690640
        bool Equals(DateTimeOffset other);  // RVA: 0x6903F0
        int32_t CompareTo(ObscuredDateTimeOffset other);  // RVA: 0x690170
        int32_t CompareTo(DateTimeOffset other);  // RVA: 0x690080
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6902D0
        static DateTimeOffset wvw(ObscuredDateTimeOffset a, TimeSpan b);  // RVA: 0x691A10
        static DateTimeOffset wvx(ObscuredDateTimeOffset a, TimeSpan b);  // RVA: 0x691B10
        static TimeSpan wvy(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x691C10
        static TimeSpan wvz(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x691D00
        static TimeSpan wwa(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x691DF0
        static bool wwb(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x691F70
        static bool wwc(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x692060
        static bool wwd(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x692150
        static bool wwe(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6922D0
        static bool wwf(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6923C0
        static bool wwg(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6924B0
        static bool wwh(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x692630
        static bool wwi(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x692720
        static bool wwj(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x692810
        static bool wwk(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x692990
        static bool wwl(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x692A80
        static bool wwm(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x692B70
        static bool wwn(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x692CF0
        static bool wwo(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x692DE0
        static bool wwp(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x692ED0
        static bool wwq(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x693050
        static bool wwr(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x693140
        static bool wws(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x693230
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(DateTimeOffset value);  // RVA: 0x6909E0
        static int64_t wwt(DateTimeOffset a, int64_t b);  // RVA: 0x6933B0
        static DateTimeOffset wwu(int64_t a, int64_t b);  // RVA: 0x693410
        static ObscuredDateTimeOffset wwv(int64_t a, int64_t b);  // RVA: 0x693550
        static int64_t www();  // RVA: 0x693580
        int64_t wwx(int64_t a);  // RVA: 0x693590
        void wwy(int64_t a, int64_t b);  // RVA: 0x6936A0
        DateTimeOffset wwz();  // RVA: 0x693770
        void woh();  // RVA: 0x690BD0
        static bool wxa(DateTimeOffset a, int32_t b);  // RVA: 0x693800
        static bool wxb(int64_t a, int32_t b);  // RVA: 0x693870
        void wxc(int64_t a);  // RVA: 0x693880
        static int64_t wxd(int64_t a, int64_t b);  // RVA: 0x6938B0
        static int64_t wxe(int64_t a, int64_t b);  // RVA: 0x6938C0
        DateTimeOffset wxf();  // RVA: 0x6938D0
        int64_t wxg();  // RVA: 0x693960
        bool wxh();  // RVA: 0x693B00
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x690770
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
        static ObscuredDecimal op_Implicit(Decimal value);  // RVA: 0x696600
        static Decimal op_Implicit(ObscuredDecimal value);  // RVA: 0x696640
        static ObscuredDecimal wxi(ObscuredFloat a);  // RVA: 0x6966E0
        static ObscuredDecimal wxj(ObscuredDecimal a);  // RVA: 0x696830
        static ObscuredDecimal wxk(ObscuredDecimal a);  // RVA: 0x6969A0
        static ObscuredDecimal wxl(ObscuredDecimal a, Decimal b);  // RVA: 0x696B10
        int32_t GetHashCode();  // RVA: 0x696340
        Il2CppString* ToString();  // RVA: 0x696430
        Il2CppString* wxm(Il2CppString* a);  // RVA: 0x696C10
        Il2CppString* wxn(IFormatProvider* a);  // RVA: 0x696C90
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6964A0
        bool Equals(Il2CppObject* other);  // RVA: 0x696020
        bool Equals(ObscuredDecimal other);  // RVA: 0x6961B0
        bool Equals(Decimal other);  // RVA: 0x6962B0
        int32_t CompareTo(ObscuredDecimal other);  // RVA: 0x695E60
        int32_t CompareTo(Decimal other);  // RVA: 0x695F90
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x695F10
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(Decimal value);  // RVA: 0x696530
        static Decimal wxo(Decimal a, int64_t b);  // RVA: 0x689C70
        static Decimal wxp(Decimal a, int64_t b);  // RVA: 0x689C70
        static ObscuredDecimal wxq(Decimal a, int64_t b);  // RVA: 0x696D10
        static int64_t wxr();  // RVA: 0x693580
        Decimal wxs(int64_t a);  // RVA: 0x696D90
        void wxt(Decimal a, int64_t b);  // RVA: 0x696F10
        Decimal wxu();  // RVA: 0x696640
        void woh();  // RVA: 0x696670
        static bool wxv(Decimal a, int32_t b);  // RVA: 0x696F80
        void wxw(Decimal a);  // RVA: 0x696FA0
        static ACTkByte16 wxx(Decimal a, int64_t b);  // RVA: 0x689C70
        Decimal wxy();  // RVA: 0x696FF0
        bool wxz();  // RVA: 0x6972F0
        static void wya(int64_t a);  // RVA: 0x634510
        void wyb();  // RVA: 0x634510
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x6963B0
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
        static Decimal wyc(Decimal a, int64_t b);  // RVA: 0x689C70
        static ACTkByte16 wyd(Decimal a, int64_t b);  // RVA: 0x689C70
        static Decimal wye(ACTkByte16 a, int64_t b);  // RVA: 0x689C70
        static Decimal wyf(ACTkByte16 a);  // RVA: 0x668AE0
        static ACTkByte16 wyg(Decimal a);  // RVA: 0x668AE0
        static DecimalLongBytesUnion wyh(Decimal a);  // RVA: 0x668AE0
        static DecimalLongBytesUnion wyi(ACTkByte16 a);  // RVA: 0x668AE0
        DecimalLongBytesUnion wyj(int64_t a);  // RVA: 0x689CA0
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
    static int64_t wyk(int64_t a, uint8_t b, uint8_t c);  // RVA: 0x689CC0
    static int64_t wyl(double a, int64_t b);  // RVA: 0x689D00
    static double wym(int64_t a, int64_t b);  // RVA: 0x689D30
    static DoubleLongBytesUnion wyn(double a);  // RVA: 0x689D60
    static DoubleLongBytesUnion wyo(int64_t a);  // RVA: 0x689D70
    DoubleLongBytesUnion wyp(int64_t a);  // RVA: 0x689D80
    DoubleLongBytesUnion wyq(int64_t a);  // RVA: 0x689DA0
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
        static ObscuredDouble op_Implicit(double value);  // RVA: 0x697820
        static double op_Implicit(ObscuredDouble value);  // RVA: 0x697810
        static ObscuredDouble wyr(ObscuredFloat a);  // RVA: 0x6978B0
        static ObscuredDouble wys(ObscuredDouble a);  // RVA: 0x697970
        static ObscuredDouble wyt(ObscuredDouble a);  // RVA: 0x697A30
        static ObscuredDouble wyu(ObscuredDouble a, double b);  // RVA: 0x697AF0
        int32_t GetHashCode();  // RVA: 0x697650
        Il2CppString* ToString();  // RVA: 0x697760
        Il2CppString* wyv(Il2CppString* a);  // RVA: 0x697BA0
        Il2CppString* wyw(IFormatProvider* a);  // RVA: 0x697BE0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x697710
        bool Equals(Il2CppObject* other);  // RVA: 0x697400
        bool Equals(ObscuredDouble other);  // RVA: 0x6975B0
        bool Equals(double other);  // RVA: 0x697610
        int32_t CompareTo(ObscuredDouble other);  // RVA: 0x6973C0
        int32_t CompareTo(double other);  // RVA: 0x697340
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x697380
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(double value);  // RVA: 0x697790
        static int64_t wyx(double a, int64_t b);  // RVA: 0x689D00
        static double wyy(int64_t a, int64_t b);  // RVA: 0x689D30
        static int64_t wyz(int64_t a, uint8_t b, uint8_t c);  // RVA: 0x689CC0
        static ObscuredDouble wza(int64_t a, int64_t b);  // RVA: 0x697C20
        static int64_t wzb();  // RVA: 0x693580
        int64_t wzc(int64_t a);  // RVA: 0x697CB0
        void wzd(int64_t a, int64_t b);  // RVA: 0x697D70
        double wze();  // RVA: 0x697DF0
        void woh();  // RVA: 0x697850
        static bool wzf(double a, int32_t b);  // RVA: 0x697E00
        void wzg(double a);  // RVA: 0x697E10
        static bool wzh(double a, double b);  // RVA: 0x697E70
        double wzi();  // RVA: 0x697F30
        bool wzj();  // RVA: 0x693B00
        static void wzk(int64_t a);  // RVA: 0x634510
        void wzl();  // RVA: 0x634510
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x6976A0
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
    static int32_t wzm(int32_t a, uint8_t b, uint8_t c);  // RVA: 0x689DD0
    static int32_t wzn(float a, int32_t b);  // RVA: 0x689E00
    static float wzo(int32_t a, int32_t b);  // RVA: 0x689E30
    static FloatIntBytesUnion wzp(float a);  // RVA: 0x689E60
    static FloatIntBytesUnion wzq(int32_t a);  // RVA: 0x689E70
    FloatIntBytesUnion wzr(int32_t a);  // RVA: 0x689E80
    FloatIntBytesUnion wzs(int32_t a);  // RVA: 0x689EA0
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
        static ObscuredFloat op_Implicit(float value);  // RVA: 0x6985F0
        static float op_Implicit(ObscuredFloat value);  // RVA: 0x6985E0
        static ObscuredFloat wzt(ObscuredFloat a);  // RVA: 0x698680
        static ObscuredFloat wzu(ObscuredFloat a);  // RVA: 0x698720
        static ObscuredFloat wzv(ObscuredFloat a, int32_t b);  // RVA: 0x6987C0
        int32_t GetHashCode();  // RVA: 0x698450
        Il2CppString* ToString();  // RVA: 0x698530
        Il2CppString* wzw(Il2CppString* a);  // RVA: 0x698860
        Il2CppString* wzx(IFormatProvider* a);  // RVA: 0x6988A0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6984E0
        bool Equals(Il2CppObject* other);  // RVA: 0x698240
        bool Equals(ObscuredFloat other);  // RVA: 0x6983F0
        bool Equals(float other);  // RVA: 0x6983B0
        int32_t CompareTo(ObscuredFloat other);  // RVA: 0x698200
        int32_t CompareTo(float other);  // RVA: 0x6981C0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x698180
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(float value);  // RVA: 0x698560
        static int32_t wzy(float a, int32_t b);  // RVA: 0x689E00
        static float wzz(int32_t a, int32_t b);  // RVA: 0x689E30
        static ObscuredFloat xaa(int32_t a, int32_t b);  // RVA: 0x6988E0
        static int32_t xab();  // RVA: 0x68DD40
        int32_t xac(int32_t a);  // RVA: 0x698960
        void xad(int32_t a, int32_t b);  // RVA: 0x698A00
        float xae();  // RVA: 0x698A70
        void woh();  // RVA: 0x698620
        static bool xaf(float a, int32_t b);  // RVA: 0x698A80
        void xag(float a);  // RVA: 0x698A90
        static bool xah(float a, float b);  // RVA: 0x698AE0
        float xai();  // RVA: 0x698BA0
        bool xaj();  // RVA: 0x698DA0
        static void xak(int32_t a);  // RVA: 0x634510
        void xal();  // RVA: 0x634510
        static int32_t xam(int32_t a, uint8_t b, uint8_t c);  // RVA: 0x689DD0
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x698480
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
        static ObscuredGuid op_Implicit(Guid value);  // RVA: 0x699340
        static Guid op_Implicit(ObscuredGuid value);  // RVA: 0x699310
        int32_t GetHashCode();  // RVA: 0x699100
        Il2CppString* ToString();  // RVA: 0x699200
        Il2CppString* xan(Il2CppString* a);  // RVA: 0x699450
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6991B0
        bool Equals(Il2CppObject* other);  // RVA: 0x698FB0
        bool Equals(ObscuredGuid other);  // RVA: 0x698F00
        bool Equals(Guid other);  // RVA: 0x698EB0
        int32_t CompareTo(ObscuredGuid other);  // RVA: 0x698E50
        int32_t CompareTo(Guid other);  // RVA: 0x698DC0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x698E10
        static bool xao(ObscuredGuid a, Guid b);  // RVA: 0x699490
        static bool xap(Guid a, ObscuredGuid b);  // RVA: 0x6994F0
        static bool xaq(ObscuredGuid a, ObscuredGuid b);  // RVA: 0x699550
        static bool xar(ObscuredGuid a, Guid b);  // RVA: 0x6995F0
        static bool xas(Guid a, ObscuredGuid b);  // RVA: 0x699650
        static bool xat(ObscuredGuid a, ObscuredGuid b);  // RVA: 0x6996B0
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(Guid value);  // RVA: 0x699240
        static void xau(Guid a, int64_t b, int64_t c, int64_t d);  // RVA: 0x699750
        static Guid xav(int64_t a, int64_t b, int64_t c);  // RVA: 0x6997D0
        static ObscuredGuid xaw(int64_t a, int64_t b, int64_t c);  // RVA: 0x6999C0
        static int64_t xax();  // RVA: 0x693580
        static int32_t xay(int64_t a, int64_t b);  // RVA: 0x6999F0
        void xaz(int64_t a, int64_t b, int64_t c);  // RVA: 0x699A30
        void xba(int64_t a, int64_t b, int64_t c);  // RVA: 0x699B90
        Guid xbb();  // RVA: 0x699310
        void woh();  // RVA: 0x699380
        static bool xbc(Guid a, int32_t b);  // RVA: 0x699C50
        static bool xbd(System.ReadOnlySpan<System.Byte> a, int32_t b);  // RVA: 0x699D10
        void xbe(Guid a);  // RVA: 0x699E00
        static int64_t xbf(int64_t a, int64_t b);  // RVA: 0x6938B0
        static int64_t xbg(int64_t a, int64_t b);  // RVA: 0x6938C0
        Guid xbh();  // RVA: 0x699EA0
        static bool xbi(Byte[][] a, Byte[][] b);  // RVA: 0x69A230
        bool xbj();  // RVA: 0x69A2A0
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x699140
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
        static ObscuredInt op_Implicit(int32_t value);  // RVA: 0x69A770
        static int32_t op_Implicit(ObscuredInt value);  // RVA: 0x69A880
        static ObscuredFloat op_Implicit(ObscuredInt value);  // RVA: 0x69A6D0
        static ObscuredDouble op_Implicit(ObscuredInt value);  // RVA: 0x69A7D0
        static ObscuredUInt op_Explicit(ObscuredInt value);  // RVA: 0x69A690
        static ObscuredInt xbk(ObscuredInt a);  // RVA: 0x69A8D0
        static ObscuredInt xbl(ObscuredInt a);  // RVA: 0x69A940
        static ObscuredInt xbm(ObscuredInt a, int32_t b);  // RVA: 0x69A9B0
        int32_t GetHashCode();  // RVA: 0x69A540
        Il2CppString* ToString();  // RVA: 0x69A610
        Il2CppString* xbn(Il2CppString* a);  // RVA: 0x69AA20
        Il2CppString* xbo(IFormatProvider* a);  // RVA: 0x69AA60
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x69A5C0
        bool Equals(Il2CppObject* other);  // RVA: 0x69A3A0
        bool Equals(ObscuredInt other);  // RVA: 0x69A4E0
        bool Equals(int32_t other);  // RVA: 0x69A370
        int32_t CompareTo(ObscuredInt other);  // RVA: 0x69A330
        int32_t CompareTo(int32_t other);  // RVA: 0x69A2C0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x69A2F0
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(int32_t value);  // RVA: 0x69A640
        static int32_t xbp(int32_t a, int32_t b);  // RVA: 0x69AAA0
        static int32_t xbq(int32_t a, int32_t b);  // RVA: 0x69AAB0
        static ObscuredInt xbr(int32_t a, int32_t b);  // RVA: 0x69AAC0
        static int32_t xbs();  // RVA: 0x68DD40
        int32_t xbt(int32_t a);  // RVA: 0x69AB10
        void xbu(int32_t a, int32_t b);  // RVA: 0x69AB80
        int32_t xbv();  // RVA: 0x69ABC0
        void woh();  // RVA: 0x69A890
        static bool xbw(int32_t a, int32_t b);  // RVA: 0x69ABD0
        void xbx(int32_t a);  // RVA: 0x69ABE0
        int32_t xby();  // RVA: 0x69AC10
        bool xbz();  // RVA: 0x698DA0
        static void xca(int32_t a);  // RVA: 0x634510
        void xcb();  // RVA: 0x634510
        static int32_t xcc(int32_t a, int32_t b);  // RVA: 0x69AD00
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x69A570
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
        static ObscuredLong op_Implicit(int64_t value);  // RVA: 0x69B120
        static int64_t op_Implicit(ObscuredLong value);  // RVA: 0x69B180
        static ObscuredLong xcd(ObscuredLong a);  // RVA: 0x69B1D0
        static ObscuredLong xce(ObscuredLong a);  // RVA: 0x69B260
        static ObscuredLong xcf(ObscuredLong a, int32_t b);  // RVA: 0x69B2F0
        int32_t GetHashCode();  // RVA: 0x69AFC0
        Il2CppString* ToString();  // RVA: 0x69B040
        Il2CppString* xcg(Il2CppString* a);  // RVA: 0x69B360
        Il2CppString* xch(IFormatProvider* a);  // RVA: 0x69B3A0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x69B070
        bool Equals(Il2CppObject* other);  // RVA: 0x69AE70
        bool Equals(ObscuredLong other);  // RVA: 0x69ADD0
        bool Equals(int64_t other);  // RVA: 0x69AE30
        int32_t CompareTo(ObscuredLong other);  // RVA: 0x69AD50
        int32_t CompareTo(int64_t other);  // RVA: 0x69AD90
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x69AD10
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(int64_t value);  // RVA: 0x69B0C0
        static int64_t xci(int64_t a, int64_t b);  // RVA: 0x6938B0
        static int64_t xcj(int64_t a, int64_t b);  // RVA: 0x6938C0
        static ObscuredLong xck(int64_t a, int64_t b);  // RVA: 0x69B3E0
        static int64_t xcl();  // RVA: 0x693580
        int64_t xcm(int64_t a);  // RVA: 0x69B430
        void xcn(int64_t a, int64_t b);  // RVA: 0x69B4C0
        int64_t xco();  // RVA: 0x69B510
        void woh();  // RVA: 0x69B190
        static bool xcp(int64_t a, int32_t b);  // RVA: 0x693870
        void xcq(int64_t a);  // RVA: 0x693880
        int64_t xcr();  // RVA: 0x69B520
        bool xcs();  // RVA: 0x693B00
        static void xct(int64_t a);  // RVA: 0x634510
        void xcu();  // RVA: 0x634510
        static int64_t xcv(int64_t a, int64_t b);  // RVA: 0x69B640
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x69AFF0
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
    bool Equals(RawEncryptedQuaternion other);  // RVA: 0x6BEE90
    bool Equals(Il2CppObject* obj);  // RVA: 0x6BEEC0
    int32_t GetHashCode();  // RVA: 0x6BEF70
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
        static ObscuredQuaternion op_Implicit(Quaternion value);  // RVA: 0x69BE10
        static Quaternion op_Implicit(ObscuredQuaternion value);  // RVA: 0x69BDE0
        static ObscuredQuaternion xcw(ObscuredQuaternion a, ObscuredQuaternion b);  // RVA: 0x69BF70
        static ObscuredQuaternion xcx(ObscuredQuaternion a, Quaternion b);  // RVA: 0x69C170
        bool Equals(Il2CppObject* other);  // RVA: 0x69B750
        bool Equals(ObscuredQuaternion other);  // RVA: 0x69B650
        bool Equals(Quaternion other);  // RVA: 0x69B8F0
        int32_t GetHashCode();  // RVA: 0x69B9A0
        Il2CppString* ToString();  // RVA: 0x69BB70
        Il2CppString* xcy(Il2CppString* a);  // RVA: 0x69C350
        void xcz();  // RVA: 0x69C3A0
        Quaternion xda();  // RVA: 0x69C4C0
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(Quaternion value);  // RVA: 0x69BBB0
        void .ctor(float x, float y, float z, float w);  // RVA: 0x69BCB0
        float xdb();  // RVA: 0x69C500
        void xdc(float a);  // RVA: 0x69C520
        float xdd();  // RVA: 0x69C5C0
        void xde(float a);  // RVA: 0x69C5E0
        float xdf();  // RVA: 0x69C680
        void xdg(float a);  // RVA: 0x69C6A0
        float xdh();  // RVA: 0x69C740
        void xdi(float a);  // RVA: 0x69C760
        float get_Item(int32_t index);  // RVA: 0x69BCF0
        void set_Item(int32_t index, float value);  // RVA: 0x69BE50
        static RawEncryptedQuaternion xdj(Quaternion a, int32_t b);  // RVA: 0x69C800
        static RawEncryptedQuaternion xdk(float a, float b, float c, float d, int32_t e);  // RVA: 0x69C8C0
        static Quaternion xdl(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x69C980
        static ObscuredQuaternion xdm(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x69CA20
        static int32_t xdn();  // RVA: 0x68DD40
        static bool xdo(Quaternion a, Quaternion b);  // RVA: 0x69CA60
        RawEncryptedQuaternion xdp(int32_t a);  // RVA: 0x69CB80
        void xdq(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x69CC30
        Quaternion xdr();  // RVA: 0x69BDE0
        void woh();  // RVA: 0x69BF20
        static bool xds(Quaternion a, int32_t b);  // RVA: 0x69CD50
        void xdt(Quaternion a);  // RVA: 0x69CD70
        Quaternion xdu();  // RVA: 0x69CE50
        bool xdv();  // RVA: 0x69D1B0
        static void xdw(int32_t a);  // RVA: 0x634510
        void xdx();  // RVA: 0x634510
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x69BA30
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
        static ObscuredSByte op_Implicit(int8_t value);  // RVA: 0x6AE490
        static int8_t op_Implicit(ObscuredSByte value);  // RVA: 0x6AE4F0
        static ObscuredSByte xdy(ObscuredSByte a);  // RVA: 0x6AE550
        static ObscuredSByte xdz(ObscuredSByte a);  // RVA: 0x6AE5B0
        static ObscuredSByte xea(ObscuredSByte a, int32_t b);  // RVA: 0x6AE610
        int32_t GetHashCode();  // RVA: 0x6AE390
        Il2CppString* ToString();  // RVA: 0x6AE3C0
        Il2CppString* xeb(Il2CppString* a);  // RVA: 0x6AE670
        Il2CppString* xec(IFormatProvider* a);  // RVA: 0x6AE6A0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AE3F0
        bool Equals(Il2CppObject* other);  // RVA: 0x6AE240
        bool Equals(ObscuredSByte obj);  // RVA: 0x6AE1E0
        bool Equals(int8_t other);  // RVA: 0x6AE1B0
        int32_t CompareTo(ObscuredSByte other);  // RVA: 0x6AE170
        int32_t CompareTo(int8_t other);  // RVA: 0x6AE140
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AE110
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(int8_t value);  // RVA: 0x6AE430
        static int8_t xed(int8_t a, int8_t b);  // RVA: 0x68F1D0
        static int8_t xee(int8_t a, int8_t b);  // RVA: 0x68F240
        static ObscuredSByte xef(int8_t a, int8_t b);  // RVA: 0x6AE6D0
        static int8_t xeg();  // RVA: 0x6AE720
        int8_t xeh(int8_t a);  // RVA: 0x6AE730
        void xei(int8_t a, int8_t b);  // RVA: 0x6AE7B0
        int8_t xej();  // RVA: 0x6AE800
        void woh();  // RVA: 0x6AE510
        static bool xek(int8_t a, int32_t b);  // RVA: 0x6AE810
        void xel(int8_t a);  // RVA: 0x6AE820
        int8_t xem();  // RVA: 0x6AE850
        bool xen();  // RVA: 0x68F520
        static void xeo(int8_t a);  // RVA: 0x634510
        void xep();  // RVA: 0x634510
        static int8_t xeq(int8_t a, int8_t b);  // RVA: 0x68F5C0
        static int8_t xer(int8_t a, int8_t b);  // RVA: 0x68F5C0
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x68EE70
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
        static ObscuredShort op_Implicit(int16_t value);  // RVA: 0x6AED90
        static int16_t op_Implicit(ObscuredShort value);  // RVA: 0x6AED80
        static ObscuredShort xes(ObscuredShort a);  // RVA: 0x6AEE40
        static ObscuredShort xet(ObscuredShort a);  // RVA: 0x6AEED0
        static ObscuredShort xeu(ObscuredShort a, int32_t b);  // RVA: 0x6AEF60
        int32_t GetHashCode();  // RVA: 0x6AEC20
        Il2CppString* ToString();  // RVA: 0x6AECA0
        Il2CppString* xev(Il2CppString* a);  // RVA: 0x6AEFE0
        Il2CppString* xew(IFormatProvider* a);  // RVA: 0x6AF020
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AECD0
        bool Equals(Il2CppObject* other);  // RVA: 0x6AEAB0
        bool Equals(ObscuredShort obj);  // RVA: 0x6AEA10
        bool Equals(int16_t other);  // RVA: 0x6AEA70
        int32_t CompareTo(ObscuredShort other);  // RVA: 0x6AE9D0
        int32_t CompareTo(int16_t other);  // RVA: 0x6AE990
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AE950
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(int16_t value);  // RVA: 0x6AED20
        static int16_t xex(int16_t a, int16_t b);  // RVA: 0x68FD00
        static int16_t xey(int16_t a, int16_t b);  // RVA: 0x68FD10
        static ObscuredShort xez(int16_t a, int16_t b);  // RVA: 0x6AF060
        static int16_t xfa();  // RVA: 0x6AF0C0
        int16_t xfb(int16_t a);  // RVA: 0x6AF0D0
        void xfc(int16_t a, int16_t b);  // RVA: 0x6AF160
        int16_t xfd();  // RVA: 0x6AF1B0
        void woh();  // RVA: 0x6AEDF0
        static bool xfe(int16_t a, int32_t b);  // RVA: 0x6AF1C0
        void xff(int16_t a);  // RVA: 0x6AF1D0
        int16_t xfg();  // RVA: 0x6AF200
        bool xfh();  // RVA: 0x6AF320
        static void xfi(int16_t a);  // RVA: 0x634510
        void xfj();  // RVA: 0x634510
        static int16_t xfk(int16_t a, int16_t b);  // RVA: 0x690070
        static int16_t xfl(int16_t a, int16_t b);  // RVA: 0x690070
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x6AEC50
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
        Il2CppString* bmqv; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Il2CppString* currentCryptoKey; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Byte[][] hiddenValue; // 0x0038
    
        // Methods
        int32_t xfm();  // RVA: 0x6AFAD0
        wchar_t get_Item(int32_t index);  // RVA: 0x6AF950
        static ObscuredString* op_Implicit(Il2CppString* value);  // RVA: 0x6AF9D0
        static Il2CppString* op_Implicit(ObscuredString* value);  // RVA: 0x6AFA40
        static bool xfn(ObscuredString* a, ObscuredString* b);  // RVA: 0x6AFAF0
        static bool xfo(ObscuredString* a, ObscuredString* b);  // RVA: 0x6AFC30
        Il2CppString* xfp(int32_t a);  // RVA: 0x6AFC50
        Il2CppString* xfq(int32_t a, int32_t b);  // RVA: 0x6AFCB0
        bool xfr(Il2CppString* a, StringComparison b);  // RVA: 0x6AFD00
        bool xfs(Il2CppString* a, StringComparison b);  // RVA: 0x6AFD50
        int32_t GetHashCode();  // RVA: 0x6AF660
        Il2CppString* ToString();  // RVA: 0x6AF7E0
        static bool xft(ObscuredString* a);  // RVA: 0x6AFDA0
        static bool xfu(ObscuredString* a);  // RVA: 0x6AFDF0
        bool Equals(Il2CppObject* other);  // RVA: 0x6AF580
        bool Equals(ObscuredString* obj);  // RVA: 0x6AF470
        bool xfv(ObscuredString* a, StringComparison b);  // RVA: 0x6AFEF0
        bool Equals(Il2CppString* other);  // RVA: 0x6AF430
        int32_t CompareTo(ObscuredString* other);  // RVA: 0x6AF340
        int32_t CompareTo(Il2CppString* other);  // RVA: 0x6AF3F0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AF3B0
        int32_t wog();  // RVA: 0x667D80
        void .ctor();  // RVA: 0x6AF800
        void .ctor(Il2CppString* value);  // RVA: 0x6AF840
        static Char[][] xfw();  // RVA: 0x6AFF70
        static Char[][] xfx(Il2CppString* a, Il2CppString* b);  // RVA: 0x6AFFD0
        static Char[][] xfy(Il2CppString* a, Char[][] b);  // RVA: 0x6B0030
        static Char[][] xfz(Char[][] a, Char[][] b);  // RVA: 0x6B0060
        static Il2CppString* xga(Char[][] a, Il2CppString* b);  // RVA: 0x6B0070
        static Il2CppString* xgb(Char[][] a, Char[][] b);  // RVA: 0x6B00C0
        static ObscuredString* xgc(Char[][] a, Char[][] b);  // RVA: 0x6B00F0
        static Char[][] xgd();  // RVA: 0x6B0180
        static void xge(Char[][] a);  // RVA: 0x6B01E0
        Char[][] xgf(Char[][] a);  // RVA: 0x6B01F0
        void xgg(Char[][] a, Char[][] b);  // RVA: 0x6B02D0
        Il2CppString* xgh();  // RVA: 0x6AF7E0
        Char[][] xgi();  // RVA: 0x6B0360
        void woh();  // RVA: 0x6AFA70
        static bool xgj(Char[][] a, int32_t b);  // RVA: 0x6B0370
        void xgk(Char[][] a);  // RVA: 0x6B0380
        static Char[][] xgl(Char[][] a, Char[][] b);  // RVA: 0x6B03D0
        static wchar_t xgm(Char[][] a, Char[][] b, int32_t c);  // RVA: 0x6B0540
        static bool xgn(ObscuredString* a);  // RVA: 0x6AFDF0
        Il2CppString* xgo();  // RVA: 0x6AF7E0
        Char[][] xgp();  // RVA: 0x6B0590
        bool xgq();  // RVA: 0x6B08B0
        bool xgr(Char[][] a, Il2CppString* b);  // RVA: 0x6B08E0
        static void xgs(Il2CppString* a);  // RVA: 0x634510
        void xgt();  // RVA: 0x634510
        static Il2CppString* xgu(Il2CppString* a);  // RVA: 0x6B0A40
        static Il2CppString* xgv(Il2CppString* a, Il2CppString* b);  // RVA: 0x6B0A80
        Il2CppString* xgw();  // RVA: 0x6B0A90
        void xgx(Il2CppString* a);  // RVA: 0x634510
        static ObscuredString* xgy(Il2CppString* a, Il2CppString* b);  // RVA: 0x6B0AD0
        void xgz(Il2CppString* a, Il2CppString* b);  // RVA: 0x6B0C30
        static Char[][] xha(Char[][] a);  // RVA: 0x6B0D40
        static Il2CppString* xhb(Il2CppString* a, Il2CppString* b);  // RVA: 0x6B0D60
        static Il2CppString* xhc(Byte[][] a);  // RVA: 0x6B0F30
        static Byte[][] xhd(Il2CppString* a);  // RVA: 0x6B0FC0
        static bool xhe(Char[][] a, Char[][] b);  // RVA: 0x6B1050
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x6AF6A0
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
        static ObscuredUInt op_Implicit(uint32_t value);  // RVA: 0x69A770
        static uint32_t op_Implicit(ObscuredUInt value);  // RVA: 0x6B5BB0
        static ObscuredInt xhf(ObscuredUInt a);  // RVA: 0x6B5C00
        static ObscuredUInt xhg(ObscuredUInt a);  // RVA: 0x6B5C40
        static ObscuredUInt xhh(ObscuredUInt a);  // RVA: 0x6B5CB0
        static ObscuredUInt xhi(ObscuredUInt a, int32_t b);  // RVA: 0x6B5D20
        int32_t GetHashCode();  // RVA: 0x6B5B00
        Il2CppString* ToString();  // RVA: 0x6B5B30
        Il2CppString* xhj(Il2CppString* a);  // RVA: 0x6B5D90
        Il2CppString* xhk(IFormatProvider* a);  // RVA: 0x6B5DD0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B5B60
        bool Equals(Il2CppObject* other);  // RVA: 0x6B5960
        bool Equals(ObscuredUInt obj);  // RVA: 0x6B5AA0
        bool Equals(uint32_t other);  // RVA: 0x6B5930
        int32_t CompareTo(ObscuredUInt other);  // RVA: 0x6B58C0
        int32_t CompareTo(uint32_t other);  // RVA: 0x6B5900
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B5880
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(uint32_t value);  // RVA: 0x69A640
        static uint32_t xhl(uint32_t a, uint32_t b);  // RVA: 0x69AAA0
        static uint32_t xhm(uint32_t a, uint32_t b);  // RVA: 0x69AAB0
        static ObscuredUInt xhn(uint32_t a, uint32_t b);  // RVA: 0x69AAC0
        static uint32_t xho();  // RVA: 0x68DD40
        uint32_t xhp(uint32_t a);  // RVA: 0x69AB10
        void xhq(uint32_t a, uint32_t b);  // RVA: 0x69AB80
        uint32_t xhr();  // RVA: 0x6B5E10
        void woh();  // RVA: 0x6B5BC0
        static bool xhs(uint32_t a, int32_t b);  // RVA: 0x69ABD0
        void xht(uint32_t a);  // RVA: 0x69ABE0
        uint32_t xhu();  // RVA: 0x6B5E20
        bool xhv();  // RVA: 0x698DA0
        static void xhw(uint32_t a);  // RVA: 0x634510
        void xhx();  // RVA: 0x634510
        static uint32_t xhy(uint32_t a, uint32_t b);  // RVA: 0x69AD00
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x69A570
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
        static ObscuredULong op_Implicit(uint64_t value);  // RVA: 0x6B62E0
        static uint64_t op_Implicit(ObscuredULong value);  // RVA: 0x6B62D0
        static ObscuredULong xhz(ObscuredULong a);  // RVA: 0x6B6380
        static ObscuredULong xia(ObscuredULong a);  // RVA: 0x6B6410
        static ObscuredULong xib(ObscuredULong a, bool b);  // RVA: 0x6B64A0
        int32_t GetHashCode();  // RVA: 0x6B61C0
        Il2CppString* ToString();  // RVA: 0x6B6240
        Il2CppString* xic(Il2CppString* a);  // RVA: 0x6B6520
        Il2CppString* xid(IFormatProvider* a);  // RVA: 0x6B6560
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B61F0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B5FD0
        bool Equals(ObscuredULong obj);  // RVA: 0x6B6160
        bool Equals(uint64_t other);  // RVA: 0x6B6120
        int32_t CompareTo(ObscuredULong other);  // RVA: 0x6B5F90
        int32_t CompareTo(uint64_t other);  // RVA: 0x6B5F10
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B5F50
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(uint64_t value);  // RVA: 0x6B6270
        static uint64_t xie(uint64_t a, uint64_t b);  // RVA: 0x6938B0
        static uint64_t xif(uint64_t a, uint64_t b);  // RVA: 0x6938C0
        static ObscuredULong xig(uint64_t a, uint64_t b);  // RVA: 0x6B65A0
        static uint64_t xih();  // RVA: 0x693580
        uint64_t xii(uint64_t a);  // RVA: 0x6B65F0
        void xij(uint64_t a, uint64_t b);  // RVA: 0x6B6680
        uint64_t xik();  // RVA: 0x6B66D0
        void woh();  // RVA: 0x6B6340
        static bool xil(uint64_t a, int32_t b);  // RVA: 0x6B66E0
        void xim(uint64_t a);  // RVA: 0x6B66F0
        uint64_t xin();  // RVA: 0x6B6720
        bool xio();  // RVA: 0x693B00
        static void xip(uint64_t a);  // RVA: 0x634510
        void xiq();  // RVA: 0x634510
        static uint64_t xir(uint64_t a, uint64_t b);  // RVA: 0x69B640
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x69AFF0
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
        static ObscuredUShort op_Implicit(uint16_t value);  // RVA: 0x6B6C30
        static uint16_t op_Implicit(ObscuredUShort value);  // RVA: 0x6B6C20
        static ObscuredUShort xis(ObscuredUShort a);  // RVA: 0x6B6CE0
        static ObscuredUShort xit(ObscuredUShort a);  // RVA: 0x6B6D70
        static ObscuredUShort xiu(ObscuredUShort a, int32_t b);  // RVA: 0x6B6E00
        int32_t GetHashCode();  // RVA: 0x6B6B10
        Il2CppString* ToString();  // RVA: 0x6B6B40
        Il2CppString* xiv(Il2CppString* a);  // RVA: 0x6B6E80
        Il2CppString* xiw(IFormatProvider* a);  // RVA: 0x6B6EC0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B6B70
        bool Equals(Il2CppObject* other);  // RVA: 0x6B69A0
        bool Equals(ObscuredUShort obj);  // RVA: 0x6B6900
        bool Equals(uint16_t other);  // RVA: 0x6B6960
        int32_t CompareTo(ObscuredUShort other);  // RVA: 0x6B68C0
        int32_t CompareTo(uint16_t other);  // RVA: 0x6B6840
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B6880
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(uint16_t value);  // RVA: 0x6B6BC0
        static uint16_t xix(uint16_t a, uint16_t b);  // RVA: 0x68FD00
        static uint16_t xiy(uint16_t a, uint16_t b);  // RVA: 0x68FD10
        static ObscuredUShort xiz(uint16_t a, uint16_t b);  // RVA: 0x68FD20
        static uint16_t xja();  // RVA: 0x6B6F00
        uint16_t xjb(uint16_t a);  // RVA: 0x6B6F10
        void xjc(uint16_t a, uint16_t b);  // RVA: 0x68FE40
        uint16_t xjd();  // RVA: 0x6B6F90
        void woh();  // RVA: 0x6B6C90
        static bool xje(uint16_t a, int32_t b);  // RVA: 0x68FEA0
        void xjf(uint16_t a);  // RVA: 0x68FEB0
        uint16_t xjg();  // RVA: 0x6B6FA0
        bool xjh();  // RVA: 0x6AF320
        static void xji(uint16_t a);  // RVA: 0x634510
        void xjj();  // RVA: 0x634510
        static uint16_t xjk(uint16_t a, uint16_t b);  // RVA: 0x690070
        static uint16_t xjl(uint16_t a, uint16_t b);  // RVA: 0x690070
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x6AEC50
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
    bool Equals(RawEncryptedVector2 other);  // RVA: 0x6BF020
    bool Equals(Il2CppObject* obj);  // RVA: 0x6BF050
    int32_t GetHashCode();  // RVA: 0x6BF040
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
        static ObscuredVector2 op_Implicit(Vector2 value);  // RVA: 0x6B8C90
        static Vector2 op_Implicit(ObscuredVector2 value);  // RVA: 0x6B8C80
        static Vector3 op_Implicit(ObscuredVector2 value);  // RVA: 0x6B8CC0
        static ObscuredVector2 xjm(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6B8E20
        static ObscuredVector2 xjn(Vector2 a, ObscuredVector2 b);  // RVA: 0x6B8F30
        static ObscuredVector2 xjo(ObscuredVector2 a, Vector2 b);  // RVA: 0x6B9030
        static ObscuredVector2 xjp(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6B9130
        static ObscuredVector2 xjq(Vector2 a, ObscuredVector2 b);  // RVA: 0x6B9240
        static ObscuredVector2 xjr(ObscuredVector2 a, Vector2 b);  // RVA: 0x6B9340
        static ObscuredVector2 xjs(ObscuredVector2 a);  // RVA: 0x6B9440
        static ObscuredVector2 xjt(ObscuredVector2 a, float b);  // RVA: 0x6B9540
        static ObscuredVector2 xju(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6B9670
        static ObscuredVector2 xjv(float a, ObscuredVector2 b);  // RVA: 0x6B9780
        static ObscuredVector2 xjw(ObscuredVector2 a, float b);  // RVA: 0x6B98B0
        static bool xjx(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6B99E0
        static bool xjy(Vector2 a, ObscuredVector2 b);  // RVA: 0x6B9A40
        static bool xjz(ObscuredVector2 a, Vector2 b);  // RVA: 0x6B9AA0
        static bool xka(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6B9AF0
        static bool xkb(Vector2 a, ObscuredVector2 b);  // RVA: 0x6B9B50
        static bool xkc(ObscuredVector2 a, Vector2 b);  // RVA: 0x6B9BB0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B8830
        bool Equals(ObscuredVector2 other);  // RVA: 0x6B8750
        bool Equals(Vector2 other);  // RVA: 0x6B87E0
        int32_t GetHashCode();  // RVA: 0x6B8A10
        Il2CppString* ToString();  // RVA: 0x6B8AE0
        Il2CppString* xkd(Il2CppString* a);  // RVA: 0x6B9C00
        void xke();  // RVA: 0x6B9C40
        Vector2 xkf();  // RVA: 0x6B9CF0
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(Vector2 value);  // RVA: 0x6B8B20
        void .ctor(float x, float y);  // RVA: 0x6B8B10
        float xkg();  // RVA: 0x6B9D30
        void xkh(float a);  // RVA: 0x6B9D50
        float xki();  // RVA: 0x6B9E30
        void xkj(float a);  // RVA: 0x6B9E50
        float get_Item(int32_t index);  // RVA: 0x6B8BD0
        void set_Item(int32_t index, float value);  // RVA: 0x6B8D00
        static RawEncryptedVector2 xkk(Vector2 a, int32_t b);  // RVA: 0x6B9F30
        static RawEncryptedVector2 xkl(float a, float b, int32_t c);  // RVA: 0x6B9F70
        static Vector2 xkm(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6B9FB0
        static ObscuredVector2 xkn(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6B9FF0
        static int32_t xko();  // RVA: 0x68DD40
        static bool xkp(Vector2 a, Vector2 b);  // RVA: 0x6BA020
        static bool xkq(float a, float b);  // RVA: 0x6BA070
        RawEncryptedVector2 xkr(int32_t a);  // RVA: 0x6BA130
        void xks(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6BA1B0
        Vector2 xkt();  // RVA: 0x6BA250
        void woh();  // RVA: 0x6B8DA0
        static bool xku(Vector2 a, int32_t b);  // RVA: 0x6BA260
        void xkv(Vector2 a);  // RVA: 0x6BA270
        Vector2 xkw();  // RVA: 0x6BA2E0
        bool xkx();  // RVA: 0x6B86F0
        static void xky(int32_t a);  // RVA: 0x634510
        void xkz();  // RVA: 0x634510
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x6B8A50
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
    bool Equals(RawEncryptedVector2Int other);  // RVA: 0x6BF020
    bool Equals(Il2CppObject* obj);  // RVA: 0x6BEF90
    int32_t GetHashCode();  // RVA: 0x6BF040
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
        static ObscuredVector2Int op_Implicit(Vector2Int value);  // RVA: 0x6B7720
        static Vector2Int op_Implicit(ObscuredVector2Int value);  // RVA: 0x6B7750
        static Vector3Int op_Explicit(ObscuredVector2Int v);  // RVA: 0x6B76A0
        static Vector2 op_Implicit(ObscuredVector2Int value);  // RVA: 0x6B76F0
        static ObscuredVector2Int xla(ObscuredVector2Int a);  // RVA: 0x6B7880
        static ObscuredVector2Int xlb(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B78F0
        static ObscuredVector2Int xlc(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6B7990
        static ObscuredVector2Int xld(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B7A10
        static ObscuredVector2Int xle(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6B7AB0
        static ObscuredVector2Int xlf(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6B7B20
        static ObscuredVector2Int xlg(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6B7BA0
        static ObscuredVector2Int xlh(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B7C20
        static ObscuredVector2Int xli(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6B7CC0
        static ObscuredVector2Int xlj(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6B7D40
        static ObscuredVector2Int xlk(int32_t a, ObscuredVector2Int b);  // RVA: 0x6B7DC0
        static ObscuredVector2Int xll(ObscuredVector2Int a, int32_t b);  // RVA: 0x6B7E40
        static ObscuredVector2Int xlm(ObscuredVector2Int a, int32_t b);  // RVA: 0x6B7EC0
        static bool xln(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B7F50
        static bool xlo(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B7FD0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B70F0
        bool Equals(ObscuredVector2Int other);  // RVA: 0x6B7270
        bool Equals(Vector2Int other);  // RVA: 0x6B70B0
        int32_t GetHashCode();  // RVA: 0x6B7300
        Il2CppString* ToString();  // RVA: 0x6B73B0
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(Vector2Int value);  // RVA: 0x6B7580
        void .ctor(int32_t x, int32_t y);  // RVA: 0x6B7560
        int32_t xlp();  // RVA: 0x6B8060
        void xlq(int32_t a);  // RVA: 0x6B8070
        int32_t xlr();  // RVA: 0x6B8130
        void xls(int32_t a);  // RVA: 0x6B8150
        int32_t get_Item(int32_t index);  // RVA: 0x6B7600
        void set_Item(int32_t index, int32_t value);  // RVA: 0x6B7760
        static RawEncryptedVector2Int xlt(Vector2Int a, int32_t b);  // RVA: 0x6B8210
        static RawEncryptedVector2Int xlu(int32_t a, int32_t b, int32_t c);  // RVA: 0x6B8250
        static Vector2Int xlv(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6B8290
        static ObscuredVector2Int xlw(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6B82D0
        static int32_t xlx();  // RVA: 0x68DD40
        RawEncryptedVector2Int xly(int32_t a);  // RVA: 0x6B8360
        void xlz(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6B8420
        Vector2Int xma();  // RVA: 0x6B84A0
        void woh();  // RVA: 0x6B7800
        static bool xmb(Vector2Int a, int32_t b);  // RVA: 0x6B84B0
        void xmc(Vector2Int a);  // RVA: 0x6B84C0
        Vector2Int xmd();  // RVA: 0x6B8530
        bool xme();  // RVA: 0x6B86F0
        static void xmf(int32_t a);  // RVA: 0x634510
        void xmg();  // RVA: 0x634510
        static Vector2Int xmh(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6B8710
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x6B7330
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
    bool Equals(RawEncryptedVector3 other);  // RVA: 0x6BF0E0
    bool Equals(Il2CppObject* obj);  // RVA: 0x6BF1D0
    int32_t GetHashCode();  // RVA: 0x6BF1B0
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
        static ObscuredVector3 op_Implicit(Vector3 value);  // RVA: 0x6BCD30
        static Vector3 op_Implicit(ObscuredVector3 value);  // RVA: 0x6BCD70
        static ObscuredVector3 xmi(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6BCF00
        static ObscuredVector3 xmj(Vector3 a, ObscuredVector3 b);  // RVA: 0x6BD050
        static ObscuredVector3 xmk(ObscuredVector3 a, Vector3 b);  // RVA: 0x6BD1A0
        static ObscuredVector3 xml(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6BD2E0
        static ObscuredVector3 xmm(Vector3 a, ObscuredVector3 b);  // RVA: 0x6BD430
        static ObscuredVector3 xmn(ObscuredVector3 a, Vector3 b);  // RVA: 0x6BD580
        static ObscuredVector3 xmo(ObscuredVector3 a);  // RVA: 0x6BD6C0
        static ObscuredVector3 xmp(ObscuredVector3 a, float b);  // RVA: 0x6BD7F0
        static ObscuredVector3 xmq(float a, ObscuredVector3 b);  // RVA: 0x6BD930
        static ObscuredVector3 xmr(ObscuredVector3 a, float b);  // RVA: 0x6BDA70
        static bool xms(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6BDBB0
        static bool xmt(Vector3 a, ObscuredVector3 b);  // RVA: 0x6BDC50
        static bool xmu(ObscuredVector3 a, Vector3 b);  // RVA: 0x6BDCC0
        static bool xmv(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6BDD40
        static bool xmw(Vector3 a, ObscuredVector3 b);  // RVA: 0x6BDDE0
        static bool xmx(ObscuredVector3 a, Vector3 b);  // RVA: 0x6BDE50
        bool Equals(Il2CppObject* other);  // RVA: 0x6BC800
        bool Equals(ObscuredVector3 other);  // RVA: 0x6BC710
        bool Equals(Vector3 other);  // RVA: 0x6BC960
        int32_t GetHashCode();  // RVA: 0x6BC9C0
        Il2CppString* ToString();  // RVA: 0x6BCB10
        Il2CppString* xmy(Il2CppString* a);  // RVA: 0x6BDEC0
        void xmz();  // RVA: 0x6BDF10
        Vector3 xna();  // RVA: 0x6BE070
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(Vector3 value);  // RVA: 0x6BCB90
        void .ctor(float x, float y, float z);  // RVA: 0x6BCB60
        float xnb();  // RVA: 0x6BE1A0
        void xnc(float a);  // RVA: 0x6BE1C0
        float xnd();  // RVA: 0x6BE2E0
        void xne(float a);  // RVA: 0x6BE300
        float xnf();  // RVA: 0x6BE420
        void xng(float a);  // RVA: 0x6BE440
        float get_Item(int32_t index);  // RVA: 0x6BCC60
        void set_Item(int32_t index, float value);  // RVA: 0x6BCDA0
        static RawEncryptedVector3 xnh(Vector3 a, int32_t b);  // RVA: 0x6BE570
        static RawEncryptedVector3 xni(float a, float b, float c, int32_t d);  // RVA: 0x6BE5E0
        static Vector3 xnj(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6BE650
        static ObscuredVector3 xnk(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6BE6C0
        static int32_t xnl();  // RVA: 0x68DD40
        static bool xnm(Vector3 a, Vector3 b);  // RVA: 0x6BE700
        static bool xnn(float a, float b);  // RVA: 0x6BE770
        RawEncryptedVector3 xno(int32_t a);  // RVA: 0x6BE830
        void xnp(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6BE990
        Vector3 xnq();  // RVA: 0x6BCD70
        void woh();  // RVA: 0x6BCE50
        static bool xnr(Vector3 a, int32_t b);  // RVA: 0x6BEA70
        void xns(Vector3 a);  // RVA: 0x6BEAA0
        Vector3 xnt();  // RVA: 0x6BEB40
        bool xnu();  // RVA: 0x6BC670
        static void xnv(int32_t a);  // RVA: 0x634510
        void xnw();  // RVA: 0x634510
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x6BCA40
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
    bool Equals(RawEncryptedVector3Int other);  // RVA: 0x6BF0E0
    bool Equals(Il2CppObject* obj);  // RVA: 0x6BF100
    int32_t GetHashCode();  // RVA: 0x6BF1B0
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
        static ObscuredVector3Int op_Implicit(Vector3Int value);  // RVA: 0x6BAB60
        static Vector3Int op_Implicit(ObscuredVector3Int value);  // RVA: 0x6BABA0
        static Vector2Int xnx(ObscuredVector3Int a);  // RVA: 0x6BAD30
        static Vector3 op_Implicit(ObscuredVector3Int value);  // RVA: 0x6BAB00
        static ObscuredVector3Int xny(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6BAD70
        static ObscuredVector3Int xnz(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6BAEB0
        static ObscuredVector3Int xoa(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6BAFF0
        static ObscuredVector3Int xob(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6BB110
        static ObscuredVector3Int xoc(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6BB250
        static ObscuredVector3Int xod(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6BB390
        static ObscuredVector3Int xoe(ObscuredVector3Int a, int32_t b);  // RVA: 0x6BB4C0
        static ObscuredVector3Int xof(int32_t a, ObscuredVector3Int b);  // RVA: 0x6BB5E0
        static ObscuredVector3Int xog(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6BB710
        static ObscuredVector3Int xoh(ObscuredVector3Int a, int32_t b);  // RVA: 0x6BB7C0
        static bool xoi(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6BB850
        static bool xoj(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6BB8E0
        static bool xok(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6BB950
        static bool xol(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6BB9B0
        static bool xom(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6BBA40
        static bool xon(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6BBAB0
        bool Equals(Il2CppObject* other);  // RVA: 0x6BA5B0
        bool Equals(ObscuredVector3Int other);  // RVA: 0x6BA4D0
        bool Equals(Vector3Int other);  // RVA: 0x6BA700
        int32_t GetHashCode();  // RVA: 0x6BA770
        Il2CppString* ToString();  // RVA: 0x6BA8D0
        Il2CppString* xoo(Il2CppString* a);  // RVA: 0x6BBB20
        int32_t wog();  // RVA: 0x68AE00
        void .ctor(Vector3Int value);  // RVA: 0x6BA910
        void .ctor(int32_t x, int32_t y, int32_t z);  // RVA: 0x6BA9E0
        int32_t xop();  // RVA: 0x6BBB70
        void xoq(int32_t a);  // RVA: 0x6BBBA0
        int32_t xor();  // RVA: 0x6BBCB0
        void xos(int32_t a);  // RVA: 0x6BBCE0
        int32_t xot();  // RVA: 0x6BBDF0
        void xou(int32_t a);  // RVA: 0x6BBE10
        int32_t get_Item(int32_t index);  // RVA: 0x6BAA10
        void set_Item(int32_t index, int32_t value);  // RVA: 0x6BABD0
        static RawEncryptedVector3Int xov(Vector3Int a, int32_t b);  // RVA: 0x6BBF20
        static RawEncryptedVector3Int xow(int32_t a, int32_t b, int32_t c, int32_t d);  // RVA: 0x6BBF90
        static Vector3Int xox(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6BC000
        static ObscuredVector3Int xoy(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6BC070
        static int32_t xoz();  // RVA: 0x68DD40
        RawEncryptedVector3Int xpa(int32_t a);  // RVA: 0x6BC0B0
        void xpb(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6BC200
        Vector3Int xpc();  // RVA: 0x6BABA0
        void woh();  // RVA: 0x6BAC80
        static bool xpd(Vector3Int a, int32_t b);  // RVA: 0x6BC2D0
        void xpe(Vector3Int a);  // RVA: 0x6BC300
        Vector3Int xpf();  // RVA: 0x6BC390
        bool xpg();  // RVA: 0x6BC670
        static void xph(int32_t a);  // RVA: 0x634510
        void xpi();  // RVA: 0x634510
        static Vector3Int xpj(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6BC6A0
        void OnBeforeSerialize();  // RVA: 0x634510
        void OnAfterDeserialize();  // RVA: 0x6BA810
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
    static void .cctor();  // RVA: 0x6BF600
    void .ctor();  // RVA: 0x629570
    void xpk(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BF6E0
    void xpl(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BF7D0
    void xpm(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BF870
    void xpn(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BF900
    void xpo(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BF9A0
    void xpp(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BFA40
    void xpq(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BFB00
    void xpr(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BFBC0
    void xps(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BFC70
    void xpt(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BFD10
    void xpu(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BFDD0
    void xpv(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BFE70
    void xpw(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6BFF10
    void xpx(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C0160
    void xpy(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C0200
    void xpz(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C02A0
    void xqa(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C0340
    void xqb(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C03E0
    void xqc(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C0480
    void xqd(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C0520
    void xqe(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C06D0
    void xqf(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C0870
    void xqg(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C0A60
};

namespace CodeStage.AntiCheat.ObscuredTypes.Converters
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes.Converters
    class ObscuredTypesNewtonsoftConverter : public JsonConverter
    {
    public:
        // Static fields
        // static Il2CppString* bmqw;
        // static Il2CppString* bmqx;
        // static Il2CppString* bmqy;
        // static Il2CppString* bmqz;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.HashSet<System.Type> bmra; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.Dictionary<System.Type,System.Action<Newtonsoft.Json.JsonWriter,System.Object>> bmrb; // 0x0018
    
        // Methods
        void WriteJson(JsonWriter* writer, Il2CppObject* value, JsonSerializer* serializer);  // RVA: 0x6B34C0
        static void xqh(JsonWriter* a, Quaternion b);  // RVA: 0x6B5210
        static void xqi(JsonWriter* a, Vector2 b);  // RVA: 0x6B53B0
        static void xqj(JsonWriter* a, Vector2Int b);  // RVA: 0x6B54C0
        static void xqk(JsonWriter* a, Vector3 b);  // RVA: 0x6B55D0
        static void xql(JsonWriter* a, Vector3Int b);  // RVA: 0x6B5730
        Il2CppObject* ReadJson(JsonReader* reader, Type* objectType, Il2CppObject* existingValue, JsonSerializer* serializer);  // RVA: 0x6B1130
        bool CanConvert(Type* objectType);  // RVA: 0x6B10D0
        void .ctor();  // RVA: 0x6B37A0
        static void .cctor();  // RVA: 0x6B3660
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
    static void .cctor();  // RVA: 0x6BF590
    void .ctor();  // RVA: 0x629570
    int32_t xqm(dby* a, dby* b);  // RVA: 0x6C0C50
};

// Namespace: <global>
class dbv
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmrc>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.IReadOnlyList<dby> <bmrd>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* <bmre>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    double <bmrf>k__BackingField; // 0x0028

    // Methods
    void iwn();  // RVA: 0x6C1FC0
    void .ctor(Il2CppString* a, dby[][] b, Il2CppString* c);  // RVA: 0x6C0E10
    Il2CppString* xqp();  // RVA: 0x63DB10
    Il2CppString* hps(dby[][] a);  // RVA: 0x6C18E0
    Il2CppString* xqn();  // RVA: 0x6C2F10
    void bha();  // RVA: 0x6C0E80
    void xqt();  // RVA: 0x6C30C0
    bool xqs(Il2CppString* a);  // RVA: 0x6C2F40
    bool kov(Il2CppString* a);  // RVA: 0x6C24F0
    void xqr(double a);  // RVA: 0x6C2F30
    Il2CppString* xqu(dby[][] a);  // RVA: 0x6C35F0
    void .ctor(Il2CppString* a, dby[][] b);  // RVA: 0x6C0C90
    void mot();  // RVA: 0x6C2670
    double xqq();  // RVA: 0x6C2F20
    Il2CppString* s(dby[][] a);  // RVA: 0x6C2BA0
    void fsw();  // RVA: 0x6C13B0
    Il2CppString* huv(dby[][] a);  // RVA: 0x6C1C50
    System.Collections.Generic.IReadOnlyList<dby> xqo();  // RVA: 0x69E850
};

// Namespace: <global>
class dbw
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmrg; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmrh; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbx* bmri; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x674D60
    void xqv();  // RVA: 0x634510
    bool MoveNext();  // RVA: 0x6C3960
    Il2CppObject* xqw();  // RVA: 0x69E850
    void xqx();  // RVA: 0x6C3A60
    Il2CppObject* xqy();  // RVA: 0x69E850
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
    void MoveNext();  // RVA: 0x6BF280
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6BF520
};

// Namespace: <global>
class dbx : public dcx`1
{
public:
    // Static fields
    // static int32_t bmrj;
    // static HashGeneratorResultHandler* bmrk;

    uint8_t pad_0000[0x30]; // 0x0000
    dcc* <bmrl>k__BackingField; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    WaitForSeconds* bmrm; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    dcf* bmrn; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    SemaphoreSlim* bmro; // 0x0048

    // Methods
    void .ctor();  // RVA: 0x6C3B10
    static void xra(HashGeneratorResultHandler* a);  // RVA: 0x6C43D0
    static dcd* xrf(int32_t a);  // RVA: 0x6C44E0
    IEnumerator* xrm();  // RVA: 0x6C4910
    dcd* mdl(int32_t a);  // RVA: 0x6C3F90
    static dcd* xre();  // RVA: 0x6C44B0
    void OnDestroy();  // RVA: 0x6C3AA0
    static System.Threading.Tasks.Task<dcc> xrg(int32_t a);  // RVA: 0x6C4530
    dcd* xrl(int32_t a);  // RVA: 0x6C4750
    static bool eck();  // RVA: 0x66D1E0
    static bool mzh();  // RVA: 0x66D1E0
    static System.Threading.Tasks.Task<dcc> iux(int32_t a);  // RVA: 0x6C3F40
    void xrc(dcc* a);  // RVA: 0x6C44A0
    static dcd* bnq();  // RVA: 0x6C3B90
    dcd* iqq(int32_t a);  // RVA: 0x6C3D80
    static void xqz(HashGeneratorResultHandler* a);  // RVA: 0x6C4310
    System.Threading.Tasks.Task<dcc> xrk(int32_t a);  // RVA: 0x6C4640
    static bool xrd();  // RVA: 0x66D1E0
    dcd* xri(int32_t a);  // RVA: 0x6C45A0
    System.Threading.Tasks.Task<dcc> xrj(int32_t a);  // RVA: 0x6C45F0
    static bool dvg();  // RVA: 0x66D1E0
    static bool lyc();  // RVA: 0x66D1E0
    dcd* olw(int32_t a);  // RVA: 0x6C4150
    dcc* xrb();  // RVA: 0x6C4490
    dcd* efp(int32_t a);  // RVA: 0x6C3BC0
    bool xrh();  // RVA: 0x6C4580
};

// Namespace: <global>
class dby
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmrp>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* <bmrq>k__BackingField; // 0x0018

    // Methods
    Il2CppString* xrn();  // RVA: 0x6C2F10
    Il2CppString* xro();  // RVA: 0x69E850
    void .ctor(Il2CppString* a, Stream* b, dax<dce> c);  // RVA: 0x6C49F0
    void .ctor(Il2CppString* a, Il2CppString* b);  // RVA: 0x6C4AF0
    Il2CppString* ToString();  // RVA: 0x6C4980
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> <>9__2_0;


    // Methods
    static void .cctor();  // RVA: 0x6BF670
    void .ctor();  // RVA: 0x629570
    void xrp(FilesProgress a);  // RVA: 0x634510
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    struct FilesProgress
    {
    public:
    
        // Methods
        static FilesProgress xrq(float a, Il2CppString* b);  // RVA: 0x629C20
        static FilesProgress None();  // RVA: 0x629C20
        static System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> xrr(Il2CppString* a);  // RVA: 0x6ADE90
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dbz
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool bmrr; // 0x0010
    bool bmrs; // 0x0011
    bool bmrt; // 0x0012
    bool bmru; // 0x0013
    uint8_t pad_0014[0x4]; // 0x0014
    Il2CppString* bmrv; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* bmrw; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bmrx; // 0x0028

    // Methods
    static bool ngc(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6C4F20
    static bool xrt(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6C5380
    void .ctor();  // RVA: 0x629570
    Il2CppString* ToString();  // RVA: 0x6C4B40
    static bool ne(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6C4E50
    bool xrs(Il2CppString* a);  // RVA: 0x6C4FF0
    static bool bse(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6C4D80
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
    dbz[][] <bmry>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    dbz[][] <bmrz>k__BackingField; // 0x0018

    // Methods
    dbz[][] xrv();  // RVA: 0x69E850
    bool mbu(Il2CppString* a);  // RVA: 0x6C5450
    dca* nam(dca* a);  // RVA: 0x6C55A0
    dca* sh(dca* a);  // RVA: 0x6C5670
    bool xrw(Il2CppString* a);  // RVA: 0x6C5450
    void .ctor(dbz[][] a, dbz[][] b);  // RVA: 0x6C4AF0
    bool btk(Il2CppString* a);  // RVA: 0x6C5450
    bool hdg(Il2CppString* a);  // RVA: 0x6C5450
    bool nfd(Il2CppString* a);  // RVA: 0x6C5450
    bool xrz(Il2CppString* a, dbz[][] b);  // RVA: 0x6C58A0
    a[][] xsa(a[][] a, a[][] b);  // RVA: 0x42ED20
    bool xrx(Il2CppString* a);  // RVA: 0x6C5740
    dbz[][] xru();  // RVA: 0x6C2F10
    dca* xry(dca* a);  // RVA: 0x6C57D0
    dca* euf(dca* a);  // RVA: 0x6C54D0
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
        FilterGroup get_DefaultGroup();  // RVA: 0x6ADFC0
        void set_DefaultGroup(FilterGroup value);  // RVA: 0x6ADFD0
        void .ctor();  // RVA: 0x6ADFB0
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dcb
{
public:

    // Methods
    static dca* ya(bool a);  // RVA: 0x6C85E0
    static FilteringSettings* cnu();  // RVA: 0x6C6080
    static dca* bjn(bool a);  // RVA: 0x6C5920
    static dca* xsh(bool a);  // RVA: 0x6C7F70
    static dca* ffp(bool a);  // RVA: 0x6C6030
    static dca* dyr(bool a);  // RVA: 0x6C6100
    static dca* gpz(bool a);  // RVA: 0x6C6DE0
    static dca* kdn(bool a);  // RVA: 0x6C7460
    static dca* jwj(bool a);  // RVA: 0x6C6030
    static dca* bxs(bool a);  // RVA: 0x6C5EF0
    static dca* gdd(bool a);  // RVA: 0x6C6030
    static dca* xsi(bool a);  // RVA: 0x6C82F0
    static dca* xsj(bool a);  // RVA: 0x6C60B0
    static dca* fej(bool a);  // RVA: 0x6C60B0
    static dca* eef(bool a);  // RVA: 0x6C6770
    static dca* kav(bool a);  // RVA: 0x6C7170
    static dca* dwq(bool a);  // RVA: 0x6C60B0
    static dca* xsd(bool a);  // RVA: 0x6C78F0
    static dca* cef(bool a);  // RVA: 0x6C6030
    static dca* xsc(bool a);  // RVA: 0x6C77B0
    static dca* hhh(bool a);  // RVA: 0x6C7030
    static FilteringSettings* lso();  // RVA: 0x6C7750
    static dca* xsg(bool a);  // RVA: 0x6C6030
    static dca* xsf(bool a);  // RVA: 0x6C7D20
    static dca* xse(bool a);  // RVA: 0x6C7A30
    static dca* ecs(bool a);  // RVA: 0x6C6480
    static dca* eei(bool a);  // RVA: 0x6C6A60
    static FilteringSettings* xsb();  // RVA: 0x6C7780
    static dca* bpt(bool a);  // RVA: 0x6C5B70
};

// Namespace: <global>
class dcc
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmsa>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* bmsb; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbv* bmsc; // 0x0020

    // Methods
    static dcc* mgc(Il2CppString* a);  // RVA: 0x6C8930
    Il2CppString* xsl();  // RVA: 0x6C8A10
    double xsq();  // RVA: 0x6C8A70
    static dcc* xss(dbv* a);  // RVA: 0x6C8B00
    static dcc* lnu(Il2CppString* a);  // RVA: 0x6C88C0
    bool ihf(Il2CppString* a);  // RVA: 0x6C8830
    static dcc* irz(Il2CppString* a);  // RVA: 0x6C8850
    bool xst(Il2CppString* a);  // RVA: 0x6C8830
    bool iya(Il2CppString* a);  // RVA: 0x6C8830
    Il2CppString* xsn();  // RVA: 0x6C2F10
    void xso(Il2CppString* a);  // RVA: 0x6C8A50
    void .ctor();  // RVA: 0x629570
    void xsu();  // RVA: 0x6C8B70
    static dcc* nmg(Il2CppString* a);  // RVA: 0x6C89A0
    System.Collections.Generic.IReadOnlyList<dby> xsm();  // RVA: 0x6C8A30
    bool xsp();  // RVA: 0x6C8A60
    Il2CppString* xsk();  // RVA: 0x6C8A10
    static dcc* xsr(Il2CppString* a);  // RVA: 0x6C8A90
    bool lht(Il2CppString* a);  // RVA: 0x6C8830
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    class HashGeneratorResultHandler : public MulticastDelegate
    {
    public:
    
        // Methods
        void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6ADFE0
        void Invoke(dcc* result);  // RVA: 0x667F10
        IAsyncResult* BeginInvoke(dcc* result, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x668040
        void EndInvoke(IAsyncResult* result);  // RVA: 0x667F00
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dcd
{
public:

    // Methods
    dcc* xrb();  // RVA: 0x41ED50
    bool xrh();  // RVA: 0x423890
    dcd* xsv(int32_t a);  // RVA: 0x41F360
    System.Threading.Tasks.Task<dcc> xsw(int32_t a);  // RVA: 0x41F360
};

// Namespace: <global>
class dce
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SHA1Managed* bmsd; // 0x0010

    // Methods
    Byte[][] hrg(Stream* a);  // RVA: 0x6C8C90
    Byte[][] ees(Byte[][] a);  // RVA: 0x6C8C70
    Byte[][] el(Stream* a);  // RVA: 0x6C8C90
    Byte[][] ohz(Stream* a);  // RVA: 0x6C8C90
    void Dispose();  // RVA: 0x6C8BE0
    Byte[][] lya(Byte[][] a);  // RVA: 0x6C8C70
    void .ctor();  // RVA: 0x6C8C00
    Byte[][] hdy(Byte[][] a);  // RVA: 0x6C8C70
    Byte[][] xsx(Stream* a);  // RVA: 0x6C8C90
    Byte[][] xsy(Byte[][] a);  // RVA: 0x6C8C70
};

// Namespace: <global>
class dcf
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dcc* <bmse>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool <bmsf>k__BackingField; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t bmsg; // 0x001C

    // Methods
    dcc* xsz();  // RVA: 0x6C2F10
    void xta(dcc* a);  // RVA: 0x6C8A50
    bool xtb();  // RVA: 0x6C8CF0
    void xtc(bool a);  // RVA: 0x6C8D00
    void .ctor(int32_t a);  // RVA: 0x6C8CC0
    void Execute();  // RVA: 0x6C8CB0
    void xtd(dcc* a);  // RVA: 0x6C8D10
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<dce> <>9__1_0;


    // Methods
    static void .cctor();  // RVA: 0x6D4FA0
    void .ctor();  // RVA: 0x629570
    dce* xte();  // RVA: 0x6D5010
};

// Namespace: <global>
class dcg
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dca* bmsh; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Concurrent.ConcurrentBag<dby> bmsi; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dax<dce> bmsj; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bmsk; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t bmsl; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> bmsm; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t bmsn; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t bmso; // 0x0044

    // Methods
    void .ctor();  // RVA: 0x629570
    void xtf(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6EE7F0
    void ocn(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6EE2C0
    void bll(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6EDD90
};

// Namespace: <global>
class dch
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dci* bmsp; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* bmsq; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dca* bmsr; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x629570
    void xtg();  // RVA: 0x6EED20
};

// Namespace: <global>
class dci : public dcf
{
public:
    // Static fields
    // static Il2CppObject* bmss;


    // Methods
    static dbv* men(Il2CppString* a, dca* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6C9A50
    static void .cctor();  // RVA: 0x6C9080
    void Execute();  // RVA: 0x6C8D30
    void xti(Il2CppString* a, dca* b);  // RVA: 0x6CA390
    static dbv* lqx(Il2CppString* a, dca* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6C95B0
    void .ctor(int32_t a);  // RVA: 0x6C8CC0
    void lck(Il2CppString* a, dca* b);  // RVA: 0x6C9420
    static dbv* xth(Il2CppString* a, dca* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6C9EF0
    void dai(Il2CppString* a, dca* b);  // RVA: 0x6C9100
    void ghh(Il2CppString* a, dca* b);  // RVA: 0x6C9290
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
    Il2CppString* <bmst>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    AndroidAppSource <bmsu>k__BackingField; // 0x0018

    // Methods
    AndroidAppSource xtk();  // RVA: 0x6ADFC0
    AndroidAppSource oqu(Il2CppString* a);  // RVA: 0x6EF290
    AndroidAppSource xtl(Il2CppString* a);  // RVA: 0x6EF780
    void .ctor(Il2CppString* a);  // RVA: 0x6EED50
    Il2CppString* xtj();  // RVA: 0x6C2F10
    AndroidAppSource gld(Il2CppString* a);  // RVA: 0x6EEDA0
};

// Namespace: <global>
class dck
{
public:

    // Methods
    static bool bel();  // RVA: 0x6EFC70
    static bool xtn();  // RVA: 0x6EFC70
    static dcj* fec();  // RVA: 0x6EFDB0
    static dcj* xtm();  // RVA: 0x6EFEC0
    static dcj* dbn();  // RVA: 0x6EFCA0
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class ACTkDetectorBase`1 : public dcx`1
    {
    public:
        // Static fields
        // static Il2CppString* bmsv;
    
        bool autoStart; // 0x0000
        bool autoDispose; // 0x0000
        Action* bmsw; // 0x0000
        bool <bmsx>k__BackingField; // 0x0000
        UnityEvent* detectionEvent; // 0x0000
        bool detectionEventHasListener; // 0x0000
        bool <bmsy>k__BackingField; // 0x0000
        bool <bmsz>k__BackingField; // 0x0000
        dcl* <bmta>k__BackingField; // 0x0000
    
        // Methods
        void xto(Action* a);  // RVA: 0x41A660
        void xtp(Action* a);  // RVA: 0x41A660
        bool xtq();  // RVA: 0x423890
        void xtr(bool a);  // RVA: 0x41F2E0
        bool xts();  // RVA: 0x423890
        void xtt(bool a);  // RVA: 0x41F2E0
        bool xtu();  // RVA: 0x423890
        void xtv(bool a);  // RVA: 0x41F2E0
        dcl* xtw();  // RVA: 0x41ED50
        void xtx(dcl* a);  // RVA: 0x41A660
        void Start();  // RVA: 0x430730
        void OnEnable();  // RVA: 0x430730
        void OnDisable();  // RVA: 0x430730
        void OnApplicationQuit();  // RVA: 0x430730
        void OnDestroy();  // RVA: 0x430730
        void xty(dcl* a);  // RVA: 0x41A660
        void xtz();  // RVA: 0x430730
        bool xua();  // RVA: 0x423890
        void xub();  // RVA: 0x430730
        void xuc();  // RVA: 0x430730
        bool xud();  // RVA: 0x423890
        bool xue();  // RVA: 0x423890
        void xuf();  // RVA: 0x430730
        void .ctor();  // RVA: 0x430730
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcl
{
public:

    // Methods
    Il2CppString* xug();  // RVA: 0x41ED50
};

// Namespace: <global>
class dcm
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmtb>k__BackingField; // 0x0010

    // Methods
    Il2CppString* xuh();  // RVA: 0x6C2F10
    void .ctor(Il2CppString* a);  // RVA: 0x6F00C0
    Il2CppString* xug();  // RVA: 0x6EFFD0
    Il2CppString* ToString();  // RVA: 0x6EFFD0
};

// Namespace: <global>
class InjectionDetectedEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6CC930
    void Invoke(Il2CppString* reason);  // RVA: 0x667F10
    IAsyncResult* BeginInvoke(Il2CppString* reason, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x668040
    void EndInvoke(IAsyncResult* result);  // RVA: 0x667F00
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class InjectionDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmtc;
    
    
        // Methods
        dcm* xui();  // RVA: 0x6CCAB0
        static InjectionDetector* xuj();  // RVA: 0x6CCB30
        static void xuk();  // RVA: 0x6CCBB0
        static void xul(System.Action<System.String> a);  // RVA: 0x6CCC30
        static void xum();  // RVA: 0x6CCCB0
        static void xun();  // RVA: 0x6CCD30
        void xuf();  // RVA: 0x6CCA30
        void .ctor();  // RVA: 0x6CC9F0
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcn
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Type* <bmtd>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool <bmte>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppObject* <bmtf>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppObject* <bmtg>k__BackingField; // 0x0028

    // Methods
    Type* xuo();  // RVA: 0x6C2F10
    bool xup();  // RVA: 0x6C8CF0
    Il2CppObject* xuq();  // RVA: 0x63DB10
    Il2CppObject* xur();  // RVA: 0x67A2A0
    void .ctor(Type* a, bool b, Il2CppObject* c, Il2CppObject* d);  // RVA: 0x6F0110
    Il2CppString* xug();  // RVA: 0x6F0190
    Il2CppString* ToString();  // RVA: 0x6F0100
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class ObscuredCheatingDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmth;
    
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
        dcn* xus();  // RVA: 0x6CCE30
        static ObscuredCheatingDetector* xut();  // RVA: 0x6CCEB0
        static ObscuredCheatingDetector* xuu();  // RVA: 0x6CCEE0
        static ObscuredCheatingDetector* xuv(Action* a);  // RVA: 0x6CD0D0
        static void xuw();  // RVA: 0x6CD120
        static void xux();  // RVA: 0x6CD230
        static bool xuy();  // RVA: 0x6CD340
        static bool xuz();  // RVA: 0x6CD440
        void .ctor();  // RVA: 0x6CCDB0
        void xva();  // RVA: 0x6CD5B0
        void xvb(dbt* a, Il2CppObject* b, Il2CppObject* c);  // RVA: 0x6CD8F0
        void xvc(dbt* a, bool b, Il2CppObject* c, Il2CppObject* d);  // RVA: 0x6CD9D0
        ObscuredCheatingDetector* xvd(Action* a);  // RVA: 0x6CDAC0
        void xuf();  // RVA: 0x6CCE20
        static void xve(b a, bool b, c c, bool d, a e, d f);  // RVA: 0x564EA0
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dco
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool <bmti>k__BackingField; // 0x0010
    bool <bmtj>k__BackingField; // 0x0011
    bool <bmtk>k__BackingField; // 0x0012
    bool <bmtl>k__BackingField; // 0x0013
    bool <bmtm>k__BackingField; // 0x0014

    // Methods
    bool xvf();  // RVA: 0x668AF0
    bool xvg();  // RVA: 0x6755E0
    bool xvh();  // RVA: 0x6F0AC0
    bool xvi();  // RVA: 0x6F0AD0
    bool xvj();  // RVA: 0x6F0AE0
    void .ctor(bool a, bool b, bool c, bool d, bool e);  // RVA: 0x6F04C0
    Il2CppString* xug();  // RVA: 0x6F0520
    Il2CppString* ToString();  // RVA: 0x6F04B0
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class SpeedHackDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmtn;
    
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
        uint8_t bmto; // 0x0076
        uint8_t pad_0077[0x1]; // 0x0077
        int32_t bmtp; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        int64_t bmtq; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        int64_t bmtr; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        int64_t bmts; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        int64_t bmtt; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        bool bmtu; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float bmtv; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        bool bmtw; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        double bmtx; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        bool bmty; // 0x00B8
    
        // Methods
        dco* xvk();  // RVA: 0x6CEA60
        int32_t get_TimeJumpThreshold();  // RVA: 0x6CE970
        void set_TimeJumpThreshold(int32_t value);  // RVA: 0x6CE9A0
        bool get_UseDsp();  // RVA: 0x6CE980
        void set_UseDsp(bool value);  // RVA: 0x6CE9B0
        bool get_WatchTimeScale();  // RVA: 0x6CE990
        void set_WatchTimeScale(bool value);  // RVA: 0x6CE9C0
        static SpeedHackDetector* xvl();  // RVA: 0x6CEAE0
        static SpeedHackDetector* xvm();  // RVA: 0x6CEB10
        static SpeedHackDetector* xvn(Action* a);  // RVA: 0x6CEE20
        static SpeedHackDetector* xvo(Action* a, float b);  // RVA: 0x6CEF40
        static SpeedHackDetector* xvp(Action* a, float b, uint8_t c);  // RVA: 0x6CF030
        static SpeedHackDetector* xvq(Action* a, float b, uint8_t c, int32_t d);  // RVA: 0x6CF0F0
        static void xvr();  // RVA: 0x6CF180
        static void xvs();  // RVA: 0x6CF290
        static void xvt(float a);  // RVA: 0x6CF3A0
        static void xvu(float a);  // RVA: 0x6CF500
        static void xvv();  // RVA: 0x6CF640
        static void xvw();  // RVA: 0x6CF770
        void xvx();  // RVA: 0x6CF890
        void .ctor();  // RVA: 0x6CE8F0
        void OnApplicationPause(bool pause);  // RVA: 0x6CE4C0
        void Update();  // RVA: 0x6CE550
        SpeedHackDetector* xvy(Action* a, float b, uint8_t c, int32_t d);  // RVA: 0x6CFA10
        void xuf();  // RVA: 0x6CEA30
        void xub();  // RVA: 0x6CE9D0
        bool xvz(int64_t a, int64_t b, int64_t c);  // RVA: 0x6CFEC0
        void xwa(float a);  // RVA: 0x6CFF80
        bool xwb();  // RVA: 0x6CFFD0
        void xwc(float a);  // RVA: 0x6D0070
        void xwd();  // RVA: 0x6D00B0
        void xwe();  // RVA: 0x6D00D0
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcp
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CheckResult <bmtz>k__BackingField; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    ErrorKind <bmua>k__BackingField; // 0x0014

    // Methods
    CheckResult xwf();  // RVA: 0x667D80
    ErrorKind xwg();  // RVA: 0x6F0D80
    void .ctor(CheckResult a, ErrorKind b);  // RVA: 0x6F0B00
    Il2CppString* xug();  // RVA: 0x6F0B40
    Il2CppString* ToString();  // RVA: 0x6F0AF0
};

// Namespace: <global>
class OnlineTimeCallback : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6CDFD0
    void Invoke(OnlineTimeResult result);  // RVA: 0x6CDF90
    IAsyncResult* BeginInvoke(OnlineTimeResult result, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6CDF10
    void EndInvoke(IAsyncResult* result);  // RVA: 0x667F00
};

// Namespace: <global>
class TimeCheatingDetectorEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6D01D0
    void Invoke(CheckResult result, ErrorKind error);  // RVA: 0x6D01C0
    IAsyncResult* BeginInvoke(CheckResult result, ErrorKind error, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6D0120
    void EndInvoke(IAsyncResult* result);  // RVA: 0x667F00
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
    bool xwh();  // RVA: 0x668240
    Il2CppString* xwi();  // RVA: 0x668250
    int64_t xwj();  // RVA: 0x6C2F10
    double xwk();  // RVA: 0x6CE3C0
    DateTime xwl();  // RVA: 0x63DB10
    OnlineTimeResult xwm(double a, DateTime b);  // RVA: 0x6CE3D0
    OnlineTimeResult xwn(Il2CppString* a, int64_t b);  // RVA: 0x6CE450
    Il2CppString* ToString();  // RVA: 0x6CE080
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
    int32_t bmub; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmuc; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TimeCheatingDetector* bmud; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x674D60
    void xwo();  // RVA: 0x634510
    bool MoveNext();  // RVA: 0x6F0D90
    Il2CppObject* xwp();  // RVA: 0x69E850
    void xwq();  // RVA: 0x6F1240
    Il2CppObject* xwr();  // RVA: 0x69E850
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
    void MoveNext();  // RVA: 0x6D35E0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6D3870
};

// Namespace: <global>
class dcr
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmue; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmuf; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TimeCheatingDetector* bmug; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x674D60
    void xws();  // RVA: 0x634510
    bool MoveNext();  // RVA: 0x6F1280
    Il2CppObject* xwt();  // RVA: 0x69E850
    void xwu();  // RVA: 0x6F1390
    Il2CppObject* xwv();  // RVA: 0x69E850
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
    void MoveNext();  // RVA: 0x6D38A0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6D3BB0
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
    void MoveNext();  // RVA: 0x6D3C20
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6D4510
};

// Namespace: <global>
class dcs
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmuh; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmui; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* bmuj; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    OnlineTimeCallback* bmuk; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RequestMethod bmul; // 0x0030

    // Methods
    void .ctor(int32_t a);  // RVA: 0x674D60
    void xww();  // RVA: 0x634510
    bool MoveNext();  // RVA: 0x6F13D0
    Il2CppObject* xwx();  // RVA: 0x69E850
    void xwy();  // RVA: 0x6F1480
    Il2CppObject* xwz();  // RVA: 0x69E850
};

// Namespace: <global>
class dct
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmum; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmun; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Uri* bmuo; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RequestMethod bmup; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    OnlineTimeCallback* bmuq; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    OnlineTimeResult bmur; // 0x0038
    uint8_t pad_0039[0x27]; // 0x0039
    UnityWebRequest* bmus; // 0x0060

    // Methods
    void .ctor(int32_t a);  // RVA: 0x674D60
    Il2CppObject* xxc();  // RVA: 0x69E850
    void gdd();  // RVA: 0x6F1850
    void xxb();  // RVA: 0x6F1980
    void xxa();  // RVA: 0x6F18F0
    void xxd();  // RVA: 0x6F19D0
    bool MoveNext();  // RVA: 0x6F14C0
    void bbn();  // RVA: 0x6F1800
    void ij();  // RVA: 0x6F18A0
    Il2CppObject* xxe();  // RVA: 0x69E850
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
    void MoveNext();  // RVA: 0x6D4540
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6D4F30
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class TimeCheatingDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmut;
        // static int32_t bmuu;
        // static WaitForEndOfFrame* bmuv;
        // static System.Lazy<das> <bmuw>k__BackingField;
        // static bool bmux;
    
        uint8_t pad_0000[0x60]; // 0x0000
        TimeCheatingDetectorEventHandler* bmuy; // 0x0060
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
        ErrorKind <bmuz>k__BackingField; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        CheckResult <bmva>k__BackingField; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        OnlineTimeResult <bmvb>k__BackingField; // 0x0090
        uint8_t pad_0091[0x27]; // 0x0091
        bool <bmvc>k__BackingField; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Il2CppString* bmvd; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Uri* bmve; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        TimeCheatingDetectorEventHandler* bmvf; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        float bmvg; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        bool bmvh; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        double bmvi; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> bmvj; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Action* bmvk; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        int32_t threshold; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Il2CppString* timeServer; // 0x0100
    
        // Methods
        dcp* xxf();  // RVA: 0x6D0970
        static System.Lazy<das> xxg();  // RVA: 0x6D09F0
        void xxh(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6D0A40
        void xxi(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6D0AE0
        Il2CppString* xxj();  // RVA: 0x6D0B80
        void xxk(Il2CppString* a);  // RVA: 0x6D0B90
        ErrorKind xxl();  // RVA: 0x6D0C50
        void xxm(ErrorKind a);  // RVA: 0x6D0C60
        CheckResult xxn();  // RVA: 0x6D0C70
        void xxo(CheckResult a);  // RVA: 0x6D0C80
        OnlineTimeResult xxp();  // RVA: 0x6D0C90
        void xxq(OnlineTimeResult a);  // RVA: 0x6D0CC0
        bool xxr();  // RVA: 0x6D0CF0
        void xxs(bool a);  // RVA: 0x6D0D00
        void OnApplicationPause(bool pauseStatus);  // RVA: 0x6D0280
        void Update();  // RVA: 0x6D0300
        static TimeCheatingDetector* xxt();  // RVA: 0x6D0D10
        static TimeCheatingDetector* xxu(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6D0D40
        static TimeCheatingDetector* xxv(float a, TimeCheatingDetectorEventHandler* b);  // RVA: 0x6D0F30
        static void xxw();  // RVA: 0x6D0F90
        static void xxx();  // RVA: 0x6D10A0
        static IEnumerator* xxy(Il2CppString* a, OnlineTimeCallback* b, RequestMethod c);  // RVA: 0x6D11B0
        static IEnumerator* xxz(Uri* a, OnlineTimeCallback* b, RequestMethod c);  // RVA: 0x6D1250
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xya(Il2CppString* a, RequestMethod b);  // RVA: 0x6D12F0
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyb(Il2CppString* a, CancellationToken b, RequestMethod c);  // RVA: 0x6D13C0
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyc(Uri* a, RequestMethod b);  // RVA: 0x6D1440
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyd(Uri* a, CancellationToken b, RequestMethod c);  // RVA: 0x6D14D0
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xye(Il2CppString* a, RequestMethod b);  // RVA: 0x6D1620
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyf(Il2CppString* a, CancellationToken b, RequestMethod c);  // RVA: 0x6D16F0
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyg(Uri* a, RequestMethod b);  // RVA: 0x6D1770
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyh(Uri* a, CancellationToken b, RequestMethod c);  // RVA: 0x6D1800
        static das* xyi();  // RVA: 0x6D1910
        static UnityWebRequest* xyj(Uri* a, RequestMethod b);  // RVA: 0x6D1960
        static void xyk(UnityWebRequest* a, OnlineTimeResult b);  // RVA: 0x6D1CC0
        static Uri* xyl(Il2CppString* a);  // RVA: 0x6D2260
        static bool xym(Il2CppString* a, DateTime b);  // RVA: 0x6D23C0
        void xyn();  // RVA: 0x6D2730
        bool xyo();  // RVA: 0x6D2870
        IEnumerator* xyp();  // RVA: 0x6D2900
        System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> xyq();  // RVA: 0x6D2970
        UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> xyr();  // RVA: 0x6D2A60
        bool xys();  // RVA: 0x6D2B20
        TimeCheatingDetector* xyt(float a, TimeCheatingDetectorEventHandler* b);  // RVA: 0x6D2D70
        bool xyu(TimeCheatingDetector* a);  // RVA: 0x6D2FE0
        void xuf();  // RVA: 0x6D0960
        bool xua();  // RVA: 0x6D0840
        void xuc();  // RVA: 0x6D0910
        void xub();  // RVA: 0x6D08A0
        IEnumerator* xyv();  // RVA: 0x6D30B0
        void xyw();  // RVA: 0x6D3120
        void xyx(OnlineTimeResult a);  // RVA: 0x6D3260
        void xyy(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x6D32F0
        void xyz(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x6D33B0
        void xza(Action* a);  // RVA: 0x6D3470
        void xzb(Action* a);  // RVA: 0x6D3520
        static double xzc(Il2CppString* a);  // RVA: 0x6D35D0
        static void xzd(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x634510
        static void xze(Action* a, int32_t b);  // RVA: 0x634510
        static void xzf(Action* a, System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> b, int32_t c);  // RVA: 0x634510
        static void xzg(float a, Action* b, System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> c, Action* d);  // RVA: 0x634510
        void .ctor();  // RVA: 0x6D04F0
        static void .cctor();  // RVA: 0x6D03D0
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcu
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool <bmvl>k__BackingField; // 0x0010
    bool <bmvm>k__BackingField; // 0x0011
    bool <bmvn>k__BackingField; // 0x0012
    bool <bmvo>k__BackingField; // 0x0013

    // Methods
    bool xzh();  // RVA: 0x668AF0
    bool xzi();  // RVA: 0x6755E0
    bool xzj();  // RVA: 0x6F0AC0
    bool xzk();  // RVA: 0x6F0AD0
    void .ctor(bool a, bool b, bool c, bool d);  // RVA: 0x6F1A20
    Il2CppString* xug();  // RVA: 0x6F1A80
    Il2CppString* ToString();  // RVA: 0x6F1A10
};

// Namespace: <global>
class dcv
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmvp; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmvq; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    WallHackDetector* bmvr; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RenderTexture* bmvs; // 0x0028

    // Methods
    void .ctor(int32_t a);  // RVA: 0x674D60
    void xzl();  // RVA: 0x634510
    bool MoveNext();  // RVA: 0x6F1F50
    Il2CppObject* xzm();  // RVA: 0x69E850
    void xzn();  // RVA: 0x6F2580
    Il2CppObject* xzo();  // RVA: 0x69E850
};

// Namespace: <global>
class dcw
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmvt; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmvu; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    WallHackDetector* bmvv; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x674D60
    void xzp();  // RVA: 0x634510
    bool MoveNext();  // RVA: 0x6F25C0
    Il2CppObject* xzq();  // RVA: 0x69E850
    void xzr();  // RVA: 0x6F2680
    Il2CppObject* xzs();  // RVA: 0x69E850
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class WallHackDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static int32_t bmwa;
        // static float bmwc;
        // static int32_t bmwb;
        // static int32_t bmvz;
        // static Il2CppString* bmvy;
        // static Il2CppString* bmvx;
        // static Il2CppString* bmvw;
        // static Il2CppString* ComponentName;
    
        uint8_t pad_0000[0x60]; // 0x0000
        Vector3 bmwd; // 0x0060
        uint8_t pad_0061[0xF]; // 0x0061
        WaitForEndOfFrame* bmwe; // 0x0070
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
        GameObject* bmwf; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        GameObject* bmwg; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* bmwh; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Camera* bmwi; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        MeshRenderer* bmwj; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        MeshRenderer* bmwk; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Color bmwl; // 0x00C8
        uint8_t pad_00C9[0xF]; // 0x00C9
        Color bmwm; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        Shader* bmwn; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Material* bmwo; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        Texture2D* bmwp; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Texture2D* bmwq; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        RenderTexture* bmwr; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        int32_t bmws; // 0x0110
        uint8_t pad_0111[0x3]; // 0x0111
        int32_t bmwt; // 0x0114
        uint8_t pad_0115[0x3]; // 0x0115
        Rigidbody* bmwu; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        CharacterController* bmwv; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        float bmww; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        uint8_t bmwx; // 0x012C
        uint8_t bmwy; // 0x012D
        uint8_t bmwz; // 0x012E
        uint8_t bmxa; // 0x012F
        bool bmxb; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        RaycastHit[][] bmxc; // 0x0138
    
        // Methods
        dcu* xzt();  // RVA: 0x6D6000
        bool xzu();  // RVA: 0x6D6080
        void xzv(bool a);  // RVA: 0x6D6090
        bool xzw();  // RVA: 0x6D6160
        void xzx(bool a);  // RVA: 0x6D6170
        bool xzy();  // RVA: 0x6D6240
        void xzz(bool a);  // RVA: 0x6D6250
        bool yaa();  // RVA: 0x6D6320
        void yab(bool a);  // RVA: 0x6D6330
        static WallHackDetector* yac();  // RVA: 0x6D6400
        static WallHackDetector* yad();  // RVA: 0x6D6430
        static WallHackDetector* yae(Action* a);  // RVA: 0x6D6700
        static WallHackDetector* yaf(Action* a, Vector3 b);  // RVA: 0x6D6800
        static WallHackDetector* yag(Action* a, Vector3 b, uint8_t c);  // RVA: 0x6D68C0
        static void yah();  // RVA: 0x6D6950
        static void yai();  // RVA: 0x6D6A60
        void yaj();  // RVA: 0x6D6B70
        void .ctor();  // RVA: 0x6D5C90
        void OnDestroy();  // RVA: 0x6D5150
        void FixedUpdate();  // RVA: 0x6D5060
        void Update();  // RVA: 0x6D5B10
        WallHackDetector* yak(Action* a, Vector3 b, uint8_t c);  // RVA: 0x6D6CF0
        void xuf();  // RVA: 0x6D5FC0
        void xuc();  // RVA: 0x6D5E30
        bool xud();  // RVA: 0x6D5F30
        void xub();  // RVA: 0x6D5DC0
        void yal();  // RVA: 0x6D71D0
        IEnumerator* yam();  // RVA: 0x6D8D60
        void StartRigidModule();  // RVA: 0x6D5820
        void StartControllerModule();  // RVA: 0x6D55D0
        void yan();  // RVA: 0x6D8DD0
        void ShootWireframeModule();  // RVA: 0x6D5510
        IEnumerator* yao();  // RVA: 0x6D8EA0
        bool yap(Color a, Color b);  // RVA: 0x6D8F10
        void yaq();  // RVA: 0x6D9000
        void ShootRaycastModule();  // RVA: 0x6D5300
        void yar();  // RVA: 0x6D90C0
        void yas();  // RVA: 0x6D91B0
        void yat();  // RVA: 0x6D9250
        void yau();  // RVA: 0x6D92E0
        void yav();  // RVA: 0x6D9340
        void yaw();  // RVA: 0x6D93A0
        void yax();  // RVA: 0x6D95E0
        void yay();  // RVA: 0x6D9840
        void yaz();  // RVA: 0x6D9900
        bool yba();  // RVA: 0x6D99C0
        static Color32 ybb();  // RVA: 0x6D9AA0
        static bool ybc(Color32 a, Color32 b, int32_t c);  // RVA: 0x6D9AF0
    };

} // namespace CodeStage.AntiCheat.Detectors

namespace CodeStage.AntiCheat.Common
{

    // Namespace: CodeStage.AntiCheat.Common
    class ACTk
    {
    public:
        // Static fields
        // static Il2CppString* bmxd;
        // static Il2CppString* bmxe;
        // static Il2CppString* bmxf;
        // static Il2CppString* bmxg;
        // static Char[][] bmxh;
        // static Il2CppString* bmxi;
        // static Il2CppString* bmxj;
    
    
        // Methods
        static void GetUnityInfo();  // RVA: 0x6CB860
        static void ybd(Il2CppString* a, Exception* b);  // RVA: 0x6CB9F0
        static void ybe(Il2CppString* a, Il2CppString* b, Exception* c);  // RVA: 0x6CBA50
        static Il2CppString* ybf(Il2CppString* a, Il2CppString* b, Exception* c);  // RVA: 0x6CBB10
        static Il2CppString* ybg(Exception* a);  // RVA: 0x6CBD20
        static void .cctor();  // RVA: 0x6CB960
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
        bool Equals(ACTkByte16 other);  // RVA: 0x6CB580
        bool Equals(Il2CppObject* obj);  // RVA: 0x6CB420
        int32_t GetHashCode();  // RVA: 0x6CB620
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
        void ybh();  // RVA: 0x6CB7E0
        void ybi();  // RVA: 0x6CB7F0
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
        void ybj();  // RVA: 0x6CB800
        void ybk();  // RVA: 0x6CB830
    };

    // Namespace: CodeStage.AntiCheat.Common
    class BackgroundThreadAccessException : public Exception
    {
    public:
        uint8_t pad_0000[0x90]; // 0x0000
        Il2CppString* <bmxk>k__BackingField; // 0x0090
    
        // Methods
        Il2CppString* ybl();  // RVA: 0x6CC300
        void .ctor(Il2CppString* apiName);  // RVA: 0x6CC110
    };

    // Namespace: CodeStage.AntiCheat.Common
    class ContainerHolder
    {
    public:
        // Static fields
        // static Il2CppString* bmxl;
        // static GameObject* container;
        // static bool bmxm;
    
    
        // Methods
        static void AfterAssembliesLoaded();  // RVA: 0x6CC310
        static void BeforeSplashScreen();  // RVA: 0x6CC4D0
        static void BeforeSceneLoad();  // RVA: 0x6CC3F0
        static void ybm(Il2CppString* a);  // RVA: 0x6CC5B0
        static a ybn();  // RVA: 0x564EA0
        static void ybo(GameObject* a);  // RVA: 0x6CC790
    };

} // namespace CodeStage.AntiCheat.Common

// Namespace: <global>
class dcx`1 : public MonoBehaviour
{
public:
    // Static fields
    // static a <bmxq>k__BackingField;

    bool keepAlive; // 0x0000
    int32_t bmxn; // 0x0000
    bool bmxo; // 0x0000
    Scene bmxp; // 0x0000

    // Methods
    static a ybp();  // RVA: 0x564EA0
    static void ybq(a a);  // RVA: 0x564EA0
    static a ybr();  // RVA: 0x564EA0
    void Awake();  // RVA: 0x430730
    void Start();  // RVA: 0x430730
    void OnDestroy();  // RVA: 0x430730
    void wcg(Scene a, LoadSceneMode b);
    void ybs(Scene a);
    bool xyu(a a);  // RVA: 0x564EA0
    void ybt();  // RVA: 0x430730
    void .ctor();  // RVA: 0x430730
};

// Namespace: <global>
class dcy
{
public:
    // Static fields
    // static Il2CppString* bmxr;
    // static Il2CppString* bmxs;
    // static System.Nullable<System.Boolean> bmxt;


    // Methods
    static void myo(bool a);  // RVA: 0x6F30E0
    static Il2CppString* ybv();  // RVA: 0x6F3540
    static Il2CppString* ybw();  // RVA: 0x6F3640
    static bool ybx();  // RVA: 0x6F3740
    static Il2CppString* fb();  // RVA: 0x6F2B80
    static void ybu(bool a);  // RVA: 0x6F3400
    static void lqx(bool a);  // RVA: 0x6F2FA0
    static Il2CppString* yby();  // RVA: 0x6F3820
    static Il2CppString* dgn();  // RVA: 0x6F29A0
    static Il2CppString* nez();  // RVA: 0x6F3300
    static Il2CppString* bfs();  // RVA: 0x6F26C0
    static void iyp(bool a);  // RVA: 0x6F2D60
    static Il2CppString* leh();  // RVA: 0x6F2EA0
    static Il2CppString* cmn();  // RVA: 0x6F27C0
    static bool fqq();  // RVA: 0x6F2C80
    static bool cti();  // RVA: 0x6F28C0
    static bool mzz();  // RVA: 0x6F3220
    static bool era();  // RVA: 0x6F2AA0
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

namespace <PrivateImplementationDetails>{F712CE00-33BD-4EC2-BD6D-1C67BFB58A67}
{

    // Namespace: <PrivateImplementationDetails>{F712CE00-33BD-4EC2-BD6D-1C67BFB58A67}
    class a
    {
    public:
        // Static fields
        // static a_ a_;
        // static Byte[][] a__;
        // static String[][] a___;
    
    
        // Methods
        static Il2CppString* a_(int32_t param0, int32_t param1, int32_t param2);  // RVA: 0x6D9D50
        static Il2CppString* a();  // RVA: 0x6D9E40
        static Il2CppString* b();  // RVA: 0x6D9ED0
        static Il2CppString* c();  // RVA: 0x6DAFB0
        static Il2CppString* d();  // RVA: 0x6DC090
        static Il2CppString* e();  // RVA: 0x6DD170
        static Il2CppString* f();  // RVA: 0x6DE250
        static Il2CppString* g();  // RVA: 0x6DF330
        static Il2CppString* h();  // RVA: 0x6E0410
        static Il2CppString* i();  // RVA: 0x6E14F0
        static Il2CppString* j();  // RVA: 0x6E25D0
        static Il2CppString* k();  // RVA: 0x6E36B0
        static Il2CppString* l();  // RVA: 0x6E4790
        static Il2CppString* m();  // RVA: 0x6E5870
        static Il2CppString* n();  // RVA: 0x6E6950
        static Il2CppString* o();  // RVA: 0x6E7A30
        static Il2CppString* p();  // RVA: 0x6E8B10
        static Il2CppString* q();  // RVA: 0x6E9BF0
        static Il2CppString* r();  // RVA: 0x6EACD0
        static Il2CppString* s();  // RVA: 0x6EBDB0
        static Il2CppString* t();  // RVA: 0x6ECE90
        static Il2CppString* u();  // RVA: 0x6ED9D0
        static Il2CppString* v();  // RVA: 0x6EDA70
        static Il2CppString* w();  // RVA: 0x6EDB10
        static Il2CppString* x();  // RVA: 0x6EDBB0
        static Il2CppString* y();  // RVA: 0x6EDC50
        static Il2CppString* z();  // RVA: 0x6EDCF0
        static Il2CppString* ba();  // RVA: 0x6D9F70
        static Il2CppString* bb();  // RVA: 0x6DA010
        static Il2CppString* bc();  // RVA: 0x6DA0B0
        static Il2CppString* bd();  // RVA: 0x6DA150
        static Il2CppString* be();  // RVA: 0x6DA1F0
        static Il2CppString* bf();  // RVA: 0x6DA290
        static Il2CppString* bg();  // RVA: 0x6DA330
        static Il2CppString* bh();  // RVA: 0x6DA3D0
        static Il2CppString* bi();  // RVA: 0x6DA470
        static Il2CppString* bj();  // RVA: 0x6DA510
        static Il2CppString* bk();  // RVA: 0x6DA5B0
        static Il2CppString* bl();  // RVA: 0x6DA650
        static Il2CppString* bm();  // RVA: 0x6DA6F0
        static Il2CppString* bn();  // RVA: 0x6DA790
        static Il2CppString* bo();  // RVA: 0x6DA830
        static Il2CppString* bp();  // RVA: 0x6DA8D0
        static Il2CppString* bq();  // RVA: 0x6DA970
        static Il2CppString* br();  // RVA: 0x6DAA10
        static Il2CppString* bs();  // RVA: 0x6DAAB0
        static Il2CppString* bt();  // RVA: 0x6DAB50
        static Il2CppString* bu();  // RVA: 0x6DABF0
        static Il2CppString* bv();  // RVA: 0x6DAC90
        static Il2CppString* bw();  // RVA: 0x6DAD30
        static Il2CppString* bx();  // RVA: 0x6DADD0
        static Il2CppString* by();  // RVA: 0x6DAE70
        static Il2CppString* bz();  // RVA: 0x6DAF10
        static Il2CppString* ca();  // RVA: 0x6DB050
        static Il2CppString* cb();  // RVA: 0x6DB0F0
        static Il2CppString* cc();  // RVA: 0x6DB190
        static Il2CppString* cd();  // RVA: 0x6DB230
        static Il2CppString* ce();  // RVA: 0x6DB2D0
        static Il2CppString* cf();  // RVA: 0x6DB370
        static Il2CppString* cg();  // RVA: 0x6DB410
        static Il2CppString* ch();  // RVA: 0x6DB4B0
        static Il2CppString* ci();  // RVA: 0x6DB550
        static Il2CppString* cj();  // RVA: 0x6DB5F0
        static Il2CppString* ck();  // RVA: 0x6DB690
        static Il2CppString* cl();  // RVA: 0x6DB730
        static Il2CppString* cm();  // RVA: 0x6DB7D0
        static Il2CppString* cn();  // RVA: 0x6DB870
        static Il2CppString* co();  // RVA: 0x6DB910
        static Il2CppString* cp();  // RVA: 0x6DB9B0
        static Il2CppString* cq();  // RVA: 0x6DBA50
        static Il2CppString* cr();  // RVA: 0x6DBAF0
        static Il2CppString* cs();  // RVA: 0x6DBB90
        static Il2CppString* ct();  // RVA: 0x6DBC30
        static Il2CppString* cu();  // RVA: 0x6DBCD0
        static Il2CppString* cv();  // RVA: 0x6DBD70
        static Il2CppString* cw();  // RVA: 0x6DBE10
        static Il2CppString* cx();  // RVA: 0x6DBEB0
        static Il2CppString* cy();  // RVA: 0x6DBF50
        static Il2CppString* cz();  // RVA: 0x6DBFF0
        static Il2CppString* da();  // RVA: 0x6DC130
        static Il2CppString* db();  // RVA: 0x6DC1D0
        static Il2CppString* dc();  // RVA: 0x6DC270
        static Il2CppString* dd();  // RVA: 0x6DC310
        static Il2CppString* de();  // RVA: 0x6DC3B0
        static Il2CppString* df();  // RVA: 0x6DC450
        static Il2CppString* dg();  // RVA: 0x6DC4F0
        static Il2CppString* dh();  // RVA: 0x6DC590
        static Il2CppString* di();  // RVA: 0x6DC630
        static Il2CppString* dj();  // RVA: 0x6DC6D0
        static Il2CppString* dk();  // RVA: 0x6DC770
        static Il2CppString* dl();  // RVA: 0x6DC810
        static Il2CppString* dm();  // RVA: 0x6DC8B0
        static Il2CppString* dn();  // RVA: 0x6DC950
        static Il2CppString* do();  // RVA: 0x6DC9F0
        static Il2CppString* dp();  // RVA: 0x6DCA90
        static Il2CppString* dq();  // RVA: 0x6DCB30
        static Il2CppString* dr();  // RVA: 0x6DCBD0
        static Il2CppString* ds();  // RVA: 0x6DCC70
        static Il2CppString* dt();  // RVA: 0x6DCD10
        static Il2CppString* du();  // RVA: 0x6DCDB0
        static Il2CppString* dv();  // RVA: 0x6DCE50
        static Il2CppString* dw();  // RVA: 0x6DCEF0
        static Il2CppString* dx();  // RVA: 0x6DCF90
        static Il2CppString* dy();  // RVA: 0x6DD030
        static Il2CppString* dz();  // RVA: 0x6DD0D0
        static Il2CppString* ea();  // RVA: 0x6DD210
        static Il2CppString* eb();  // RVA: 0x6DD2B0
        static Il2CppString* ec();  // RVA: 0x6DD350
        static Il2CppString* ed();  // RVA: 0x6DD3F0
        static Il2CppString* ee();  // RVA: 0x6DD490
        static Il2CppString* ef();  // RVA: 0x6DD530
        static Il2CppString* eg();  // RVA: 0x6DD5D0
        static Il2CppString* eh();  // RVA: 0x6DD670
        static Il2CppString* ei();  // RVA: 0x6DD710
        static Il2CppString* ej();  // RVA: 0x6DD7B0
        static Il2CppString* ek();  // RVA: 0x6DD850
        static Il2CppString* el();  // RVA: 0x6DD8F0
        static Il2CppString* em();  // RVA: 0x6DD990
        static Il2CppString* en();  // RVA: 0x6DDA30
        static Il2CppString* eo();  // RVA: 0x6DDAD0
        static Il2CppString* ep();  // RVA: 0x6DDB70
        static Il2CppString* eq();  // RVA: 0x6DDC10
        static Il2CppString* er();  // RVA: 0x6DDCB0
        static Il2CppString* es();  // RVA: 0x6DDD50
        static Il2CppString* et();  // RVA: 0x6DDDF0
        static Il2CppString* eu();  // RVA: 0x6DDE90
        static Il2CppString* ev();  // RVA: 0x6DDF30
        static Il2CppString* ew();  // RVA: 0x6DDFD0
        static Il2CppString* ex();  // RVA: 0x6DE070
        static Il2CppString* ey();  // RVA: 0x6DE110
        static Il2CppString* ez();  // RVA: 0x6DE1B0
        static Il2CppString* fa();  // RVA: 0x6DE2F0
        static Il2CppString* fb();  // RVA: 0x6DE390
        static Il2CppString* fc();  // RVA: 0x6DE430
        static Il2CppString* fd();  // RVA: 0x6DE4D0
        static Il2CppString* fe();  // RVA: 0x6DE570
        static Il2CppString* ff();  // RVA: 0x6DE610
        static Il2CppString* fg();  // RVA: 0x6DE6B0
        static Il2CppString* fh();  // RVA: 0x6DE750
        static Il2CppString* fi();  // RVA: 0x6DE7F0
        static Il2CppString* fj();  // RVA: 0x6DE890
        static Il2CppString* fk();  // RVA: 0x6DE930
        static Il2CppString* fl();  // RVA: 0x6DE9D0
        static Il2CppString* fm();  // RVA: 0x6DEA70
        static Il2CppString* fn();  // RVA: 0x6DEB10
        static Il2CppString* fo();  // RVA: 0x6DEBB0
        static Il2CppString* fp();  // RVA: 0x6DEC50
        static Il2CppString* fq();  // RVA: 0x6DECF0
        static Il2CppString* fr();  // RVA: 0x6DED90
        static Il2CppString* fs();  // RVA: 0x6DEE30
        static Il2CppString* ft();  // RVA: 0x6DEED0
        static Il2CppString* fu();  // RVA: 0x6DEF70
        static Il2CppString* fv();  // RVA: 0x6DF010
        static Il2CppString* fw();  // RVA: 0x6DF0B0
        static Il2CppString* fx();  // RVA: 0x6DF150
        static Il2CppString* fy();  // RVA: 0x6DF1F0
        static Il2CppString* fz();  // RVA: 0x6DF290
        static Il2CppString* ga();  // RVA: 0x6DF3D0
        static Il2CppString* gb();  // RVA: 0x6DF470
        static Il2CppString* gc();  // RVA: 0x6DF510
        static Il2CppString* gd();  // RVA: 0x6DF5B0
        static Il2CppString* ge();  // RVA: 0x6DF650
        static Il2CppString* gf();  // RVA: 0x6DF6F0
        static Il2CppString* gg();  // RVA: 0x6DF790
        static Il2CppString* gh();  // RVA: 0x6DF830
        static Il2CppString* gi();  // RVA: 0x6DF8D0
        static Il2CppString* gj();  // RVA: 0x6DF970
        static Il2CppString* gk();  // RVA: 0x6DFA10
        static Il2CppString* gl();  // RVA: 0x6DFAB0
        static Il2CppString* gm();  // RVA: 0x6DFB50
        static Il2CppString* gn();  // RVA: 0x6DFBF0
        static Il2CppString* go();  // RVA: 0x6DFC90
        static Il2CppString* gp();  // RVA: 0x6DFD30
        static Il2CppString* gq();  // RVA: 0x6DFDD0
        static Il2CppString* gr();  // RVA: 0x6DFE70
        static Il2CppString* gs();  // RVA: 0x6DFF10
        static Il2CppString* gt();  // RVA: 0x6DFFB0
        static Il2CppString* gu();  // RVA: 0x6E0050
        static Il2CppString* gv();  // RVA: 0x6E00F0
        static Il2CppString* gw();  // RVA: 0x6E0190
        static Il2CppString* gx();  // RVA: 0x6E0230
        static Il2CppString* gy();  // RVA: 0x6E02D0
        static Il2CppString* gz();  // RVA: 0x6E0370
        static Il2CppString* ha();  // RVA: 0x6E04B0
        static Il2CppString* hb();  // RVA: 0x6E0550
        static Il2CppString* hc();  // RVA: 0x6E05F0
        static Il2CppString* hd();  // RVA: 0x6E0690
        static Il2CppString* he();  // RVA: 0x6E0730
        static Il2CppString* hf();  // RVA: 0x6E07D0
        static Il2CppString* hg();  // RVA: 0x6E0870
        static Il2CppString* hh();  // RVA: 0x6E0910
        static Il2CppString* hi();  // RVA: 0x6E09B0
        static Il2CppString* hj();  // RVA: 0x6E0A50
        static Il2CppString* hk();  // RVA: 0x6E0AF0
        static Il2CppString* hl();  // RVA: 0x6E0B90
        static Il2CppString* hm();  // RVA: 0x6E0C30
        static Il2CppString* hn();  // RVA: 0x6E0CD0
        static Il2CppString* ho();  // RVA: 0x6E0D70
        static Il2CppString* hp();  // RVA: 0x6E0E10
        static Il2CppString* hq();  // RVA: 0x6E0EB0
        static Il2CppString* hr();  // RVA: 0x6E0F50
        static Il2CppString* hs();  // RVA: 0x6E0FF0
        static Il2CppString* ht();  // RVA: 0x6E1090
        static Il2CppString* hu();  // RVA: 0x6E1130
        static Il2CppString* hv();  // RVA: 0x6E11D0
        static Il2CppString* hw();  // RVA: 0x6E1270
        static Il2CppString* hx();  // RVA: 0x6E1310
        static Il2CppString* hy();  // RVA: 0x6E13B0
        static Il2CppString* hz();  // RVA: 0x6E1450
        static Il2CppString* ia();  // RVA: 0x6E1590
        static Il2CppString* ib();  // RVA: 0x6E1630
        static Il2CppString* ic();  // RVA: 0x6E16D0
        static Il2CppString* id();  // RVA: 0x6E1770
        static Il2CppString* ie();  // RVA: 0x6E1810
        static Il2CppString* if();  // RVA: 0x6E18B0
        static Il2CppString* ig();  // RVA: 0x6E1950
        static Il2CppString* ih();  // RVA: 0x6E19F0
        static Il2CppString* ii();  // RVA: 0x6E1A90
        static Il2CppString* ij();  // RVA: 0x6E1B30
        static Il2CppString* ik();  // RVA: 0x6E1BD0
        static Il2CppString* il();  // RVA: 0x6E1C70
        static Il2CppString* im();  // RVA: 0x6E1D10
        static Il2CppString* in();  // RVA: 0x6E1DB0
        static Il2CppString* io();  // RVA: 0x6E1E50
        static Il2CppString* ip();  // RVA: 0x6E1EF0
        static Il2CppString* iq();  // RVA: 0x6E1F90
        static Il2CppString* ir();  // RVA: 0x6E2030
        static Il2CppString* is();  // RVA: 0x6E20D0
        static Il2CppString* it();  // RVA: 0x6E2170
        static Il2CppString* iu();  // RVA: 0x6E2210
        static Il2CppString* iv();  // RVA: 0x6E22B0
        static Il2CppString* iw();  // RVA: 0x6E2350
        static Il2CppString* ix();  // RVA: 0x6E23F0
        static Il2CppString* iy();  // RVA: 0x6E2490
        static Il2CppString* iz();  // RVA: 0x6E2530
        static Il2CppString* ja();  // RVA: 0x6E2670
        static Il2CppString* jb();  // RVA: 0x6E2710
        static Il2CppString* jc();  // RVA: 0x6E27B0
        static Il2CppString* jd();  // RVA: 0x6E2850
        static Il2CppString* je();  // RVA: 0x6E28F0
        static Il2CppString* jf();  // RVA: 0x6E2990
        static Il2CppString* jg();  // RVA: 0x6E2A30
        static Il2CppString* jh();  // RVA: 0x6E2AD0
        static Il2CppString* ji();  // RVA: 0x6E2B70
        static Il2CppString* jj();  // RVA: 0x6E2C10
        static Il2CppString* jk();  // RVA: 0x6E2CB0
        static Il2CppString* jl();  // RVA: 0x6E2D50
        static Il2CppString* jm();  // RVA: 0x6E2DF0
        static Il2CppString* jn();  // RVA: 0x6E2E90
        static Il2CppString* jo();  // RVA: 0x6E2F30
        static Il2CppString* jp();  // RVA: 0x6E2FD0
        static Il2CppString* jq();  // RVA: 0x6E3070
        static Il2CppString* jr();  // RVA: 0x6E3110
        static Il2CppString* js();  // RVA: 0x6E31B0
        static Il2CppString* jt();  // RVA: 0x6E3250
        static Il2CppString* ju();  // RVA: 0x6E32F0
        static Il2CppString* jv();  // RVA: 0x6E3390
        static Il2CppString* jw();  // RVA: 0x6E3430
        static Il2CppString* jx();  // RVA: 0x6E34D0
        static Il2CppString* jy();  // RVA: 0x6E3570
        static Il2CppString* jz();  // RVA: 0x6E3610
        static Il2CppString* ka();  // RVA: 0x6E3750
        static Il2CppString* kb();  // RVA: 0x6E37F0
        static Il2CppString* kc();  // RVA: 0x6E3890
        static Il2CppString* kd();  // RVA: 0x6E3930
        static Il2CppString* ke();  // RVA: 0x6E39D0
        static Il2CppString* kf();  // RVA: 0x6E3A70
        static Il2CppString* kg();  // RVA: 0x6E3B10
        static Il2CppString* kh();  // RVA: 0x6E3BB0
        static Il2CppString* ki();  // RVA: 0x6E3C50
        static Il2CppString* kj();  // RVA: 0x6E3CF0
        static Il2CppString* kk();  // RVA: 0x6E3D90
        static Il2CppString* kl();  // RVA: 0x6E3E30
        static Il2CppString* km();  // RVA: 0x6E3ED0
        static Il2CppString* kn();  // RVA: 0x6E3F70
        static Il2CppString* ko();  // RVA: 0x6E4010
        static Il2CppString* kp();  // RVA: 0x6E40B0
        static Il2CppString* kq();  // RVA: 0x6E4150
        static Il2CppString* kr();  // RVA: 0x6E41F0
        static Il2CppString* ks();  // RVA: 0x6E4290
        static Il2CppString* kt();  // RVA: 0x6E4330
        static Il2CppString* ku();  // RVA: 0x6E43D0
        static Il2CppString* kv();  // RVA: 0x6E4470
        static Il2CppString* kw();  // RVA: 0x6E4510
        static Il2CppString* kx();  // RVA: 0x6E45B0
        static Il2CppString* ky();  // RVA: 0x6E4650
        static Il2CppString* kz();  // RVA: 0x6E46F0
        static Il2CppString* la();  // RVA: 0x6E4830
        static Il2CppString* lb();  // RVA: 0x6E48D0
        static Il2CppString* lc();  // RVA: 0x6E4970
        static Il2CppString* ld();  // RVA: 0x6E4A10
        static Il2CppString* le();  // RVA: 0x6E4AB0
        static Il2CppString* lf();  // RVA: 0x6E4B50
        static Il2CppString* lg();  // RVA: 0x6E4BF0
        static Il2CppString* lh();  // RVA: 0x6E4C90
        static Il2CppString* li();  // RVA: 0x6E4D30
        static Il2CppString* lj();  // RVA: 0x6E4DD0
        static Il2CppString* lk();  // RVA: 0x6E4E70
        static Il2CppString* ll();  // RVA: 0x6E4F10
        static Il2CppString* lm();  // RVA: 0x6E4FB0
        static Il2CppString* ln();  // RVA: 0x6E5050
        static Il2CppString* lo();  // RVA: 0x6E50F0
        static Il2CppString* lp();  // RVA: 0x6E5190
        static Il2CppString* lq();  // RVA: 0x6E5230
        static Il2CppString* lr();  // RVA: 0x6E52D0
        static Il2CppString* ls();  // RVA: 0x6E5370
        static Il2CppString* lt();  // RVA: 0x6E5410
        static Il2CppString* lu();  // RVA: 0x6E54B0
        static Il2CppString* lv();  // RVA: 0x6E5550
        static Il2CppString* lw();  // RVA: 0x6E55F0
        static Il2CppString* lx();  // RVA: 0x6E5690
        static Il2CppString* ly();  // RVA: 0x6E5730
        static Il2CppString* lz();  // RVA: 0x6E57D0
        static Il2CppString* ma();  // RVA: 0x6E5910
        static Il2CppString* mb();  // RVA: 0x6E59B0
        static Il2CppString* mc();  // RVA: 0x6E5A50
        static Il2CppString* md();  // RVA: 0x6E5AF0
        static Il2CppString* me();  // RVA: 0x6E5B90
        static Il2CppString* mf();  // RVA: 0x6E5C30
        static Il2CppString* mg();  // RVA: 0x6E5CD0
        static Il2CppString* mh();  // RVA: 0x6E5D70
        static Il2CppString* mi();  // RVA: 0x6E5E10
        static Il2CppString* mj();  // RVA: 0x6E5EB0
        static Il2CppString* mk();  // RVA: 0x6E5F50
        static Il2CppString* ml();  // RVA: 0x6E5FF0
        static Il2CppString* mm();  // RVA: 0x6E6090
        static Il2CppString* mn();  // RVA: 0x6E6130
        static Il2CppString* mo();  // RVA: 0x6E61D0
        static Il2CppString* mp();  // RVA: 0x6E6270
        static Il2CppString* mq();  // RVA: 0x6E6310
        static Il2CppString* mr();  // RVA: 0x6E63B0
        static Il2CppString* ms();  // RVA: 0x6E6450
        static Il2CppString* mt();  // RVA: 0x6E64F0
        static Il2CppString* mu();  // RVA: 0x6E6590
        static Il2CppString* mv();  // RVA: 0x6E6630
        static Il2CppString* mw();  // RVA: 0x6E66D0
        static Il2CppString* mx();  // RVA: 0x6E6770
        static Il2CppString* my();  // RVA: 0x6E6810
        static Il2CppString* mz();  // RVA: 0x6E68B0
        static Il2CppString* na();  // RVA: 0x6E69F0
        static Il2CppString* nb();  // RVA: 0x6E6A90
        static Il2CppString* nc();  // RVA: 0x6E6B30
        static Il2CppString* nd();  // RVA: 0x6E6BD0
        static Il2CppString* ne();  // RVA: 0x6E6C70
        static Il2CppString* nf();  // RVA: 0x6E6D10
        static Il2CppString* ng();  // RVA: 0x6E6DB0
        static Il2CppString* nh();  // RVA: 0x6E6E50
        static Il2CppString* ni();  // RVA: 0x6E6EF0
        static Il2CppString* nj();  // RVA: 0x6E6F90
        static Il2CppString* nk();  // RVA: 0x6E7030
        static Il2CppString* nl();  // RVA: 0x6E70D0
        static Il2CppString* nm();  // RVA: 0x6E7170
        static Il2CppString* nn();  // RVA: 0x6E7210
        static Il2CppString* no();  // RVA: 0x6E72B0
        static Il2CppString* np();  // RVA: 0x6E7350
        static Il2CppString* nq();  // RVA: 0x6E73F0
        static Il2CppString* nr();  // RVA: 0x6E7490
        static Il2CppString* ns();  // RVA: 0x6E7530
        static Il2CppString* nt();  // RVA: 0x6E75D0
        static Il2CppString* nu();  // RVA: 0x6E7670
        static Il2CppString* nv();  // RVA: 0x6E7710
        static Il2CppString* nw();  // RVA: 0x6E77B0
        static Il2CppString* nx();  // RVA: 0x6E7850
        static Il2CppString* ny();  // RVA: 0x6E78F0
        static Il2CppString* nz();  // RVA: 0x6E7990
        static Il2CppString* oa();  // RVA: 0x6E7AD0
        static Il2CppString* ob();  // RVA: 0x6E7B70
        static Il2CppString* oc();  // RVA: 0x6E7C10
        static Il2CppString* od();  // RVA: 0x6E7CB0
        static Il2CppString* oe();  // RVA: 0x6E7D50
        static Il2CppString* of();  // RVA: 0x6E7DF0
        static Il2CppString* og();  // RVA: 0x6E7E90
        static Il2CppString* oh();  // RVA: 0x6E7F30
        static Il2CppString* oi();  // RVA: 0x6E7FD0
        static Il2CppString* oj();  // RVA: 0x6E8070
        static Il2CppString* ok();  // RVA: 0x6E8110
        static Il2CppString* ol();  // RVA: 0x6E81B0
        static Il2CppString* om();  // RVA: 0x6E8250
        static Il2CppString* on();  // RVA: 0x6E82F0
        static Il2CppString* oo();  // RVA: 0x6E8390
        static Il2CppString* op();  // RVA: 0x6E8430
        static Il2CppString* oq();  // RVA: 0x6E84D0
        static Il2CppString* or();  // RVA: 0x6E8570
        static Il2CppString* os();  // RVA: 0x6E8610
        static Il2CppString* ot();  // RVA: 0x6E86B0
        static Il2CppString* ou();  // RVA: 0x6E8750
        static Il2CppString* ov();  // RVA: 0x6E87F0
        static Il2CppString* ow();  // RVA: 0x6E8890
        static Il2CppString* ox();  // RVA: 0x6E8930
        static Il2CppString* oy();  // RVA: 0x6E89D0
        static Il2CppString* oz();  // RVA: 0x6E8A70
        static Il2CppString* pa();  // RVA: 0x6E8BB0
        static Il2CppString* pb();  // RVA: 0x6E8C50
        static Il2CppString* pc();  // RVA: 0x6E8CF0
        static Il2CppString* pd();  // RVA: 0x6E8D90
        static Il2CppString* pe();  // RVA: 0x6E8E30
        static Il2CppString* pf();  // RVA: 0x6E8ED0
        static Il2CppString* pg();  // RVA: 0x6E8F70
        static Il2CppString* ph();  // RVA: 0x6E9010
        static Il2CppString* pi();  // RVA: 0x6E90B0
        static Il2CppString* pj();  // RVA: 0x6E9150
        static Il2CppString* pk();  // RVA: 0x6E91F0
        static Il2CppString* pl();  // RVA: 0x6E9290
        static Il2CppString* pm();  // RVA: 0x6E9330
        static Il2CppString* pn();  // RVA: 0x6E93D0
        static Il2CppString* po();  // RVA: 0x6E9470
        static Il2CppString* pp();  // RVA: 0x6E9510
        static Il2CppString* pq();  // RVA: 0x6E95B0
        static Il2CppString* pr();  // RVA: 0x6E9650
        static Il2CppString* ps();  // RVA: 0x6E96F0
        static Il2CppString* pt();  // RVA: 0x6E9790
        static Il2CppString* pu();  // RVA: 0x6E9830
        static Il2CppString* pv();  // RVA: 0x6E98D0
        static Il2CppString* pw();  // RVA: 0x6E9970
        static Il2CppString* px();  // RVA: 0x6E9A10
        static Il2CppString* py();  // RVA: 0x6E9AB0
        static Il2CppString* pz();  // RVA: 0x6E9B50
        static Il2CppString* qa();  // RVA: 0x6E9C90
        static Il2CppString* qb();  // RVA: 0x6E9D30
        static Il2CppString* qc();  // RVA: 0x6E9DD0
        static Il2CppString* qd();  // RVA: 0x6E9E70
        static Il2CppString* qe();  // RVA: 0x6E9F10
        static Il2CppString* qf();  // RVA: 0x6E9FB0
        static Il2CppString* qg();  // RVA: 0x6EA050
        static Il2CppString* qh();  // RVA: 0x6EA0F0
        static Il2CppString* qi();  // RVA: 0x6EA190
        static Il2CppString* qj();  // RVA: 0x6EA230
        static Il2CppString* qk();  // RVA: 0x6EA2D0
        static Il2CppString* ql();  // RVA: 0x6EA370
        static Il2CppString* qm();  // RVA: 0x6EA410
        static Il2CppString* qn();  // RVA: 0x6EA4B0
        static Il2CppString* qo();  // RVA: 0x6EA550
        static Il2CppString* qp();  // RVA: 0x6EA5F0
        static Il2CppString* qq();  // RVA: 0x6EA690
        static Il2CppString* qr();  // RVA: 0x6EA730
        static Il2CppString* qs();  // RVA: 0x6EA7D0
        static Il2CppString* qt();  // RVA: 0x6EA870
        static Il2CppString* qu();  // RVA: 0x6EA910
        static Il2CppString* qv();  // RVA: 0x6EA9B0
        static Il2CppString* qw();  // RVA: 0x6EAA50
        static Il2CppString* qx();  // RVA: 0x6EAAF0
        static Il2CppString* qy();  // RVA: 0x6EAB90
        static Il2CppString* qz();  // RVA: 0x6EAC30
        static Il2CppString* ra();  // RVA: 0x6EAD70
        static Il2CppString* rb();  // RVA: 0x6EAE10
        static Il2CppString* rc();  // RVA: 0x6EAEB0
        static Il2CppString* rd();  // RVA: 0x6EAF50
        static Il2CppString* re();  // RVA: 0x6EAFF0
        static Il2CppString* rf();  // RVA: 0x6EB090
        static Il2CppString* rg();  // RVA: 0x6EB130
        static Il2CppString* rh();  // RVA: 0x6EB1D0
        static Il2CppString* ri();  // RVA: 0x6EB270
        static Il2CppString* rj();  // RVA: 0x6EB310
        static Il2CppString* rk();  // RVA: 0x6EB3B0
        static Il2CppString* rl();  // RVA: 0x6EB450
        static Il2CppString* rm();  // RVA: 0x6EB4F0
        static Il2CppString* rn();  // RVA: 0x6EB590
        static Il2CppString* ro();  // RVA: 0x6EB630
        static Il2CppString* rp();  // RVA: 0x6EB6D0
        static Il2CppString* rq();  // RVA: 0x6EB770
        static Il2CppString* rr();  // RVA: 0x6EB810
        static Il2CppString* rs();  // RVA: 0x6EB8B0
        static Il2CppString* rt();  // RVA: 0x6EB950
        static Il2CppString* ru();  // RVA: 0x6EB9F0
        static Il2CppString* rv();  // RVA: 0x6EBA90
        static Il2CppString* rw();  // RVA: 0x6EBB30
        static Il2CppString* rx();  // RVA: 0x6EBBD0
        static Il2CppString* ry();  // RVA: 0x6EBC70
        static Il2CppString* rz();  // RVA: 0x6EBD10
        static Il2CppString* sa();  // RVA: 0x6EBE50
        static Il2CppString* sb();  // RVA: 0x6EBEF0
        static Il2CppString* sc();  // RVA: 0x6EBF90
        static Il2CppString* sd();  // RVA: 0x6EC030
        static Il2CppString* se();  // RVA: 0x6EC0D0
        static Il2CppString* sf();  // RVA: 0x6EC170
        static Il2CppString* sg();  // RVA: 0x6EC210
        static Il2CppString* sh();  // RVA: 0x6EC2B0
        static Il2CppString* si();  // RVA: 0x6EC350
        static Il2CppString* sj();  // RVA: 0x6EC3F0
        static Il2CppString* sk();  // RVA: 0x6EC490
        static Il2CppString* sl();  // RVA: 0x6EC530
        static Il2CppString* sm();  // RVA: 0x6EC5D0
        static Il2CppString* sn();  // RVA: 0x6EC670
        static Il2CppString* so();  // RVA: 0x6EC710
        static Il2CppString* sp();  // RVA: 0x6EC7B0
        static Il2CppString* sq();  // RVA: 0x6EC850
        static Il2CppString* sr();  // RVA: 0x6EC8F0
        static Il2CppString* ss();  // RVA: 0x6EC990
        static Il2CppString* st();  // RVA: 0x6ECA30
        static Il2CppString* su();  // RVA: 0x6ECAD0
        static Il2CppString* sv();  // RVA: 0x6ECB70
        static Il2CppString* sw();  // RVA: 0x6ECC10
        static Il2CppString* sx();  // RVA: 0x6ECCB0
        static Il2CppString* sy();  // RVA: 0x6ECD50
        static Il2CppString* sz();  // RVA: 0x6ECDF0
        static Il2CppString* ta();  // RVA: 0x6ECF30
        static Il2CppString* tb();  // RVA: 0x6ECFD0
        static Il2CppString* tc();  // RVA: 0x6ED070
        static Il2CppString* td();  // RVA: 0x6ED110
        static Il2CppString* te();  // RVA: 0x6ED1B0
        static Il2CppString* tf();  // RVA: 0x6ED250
        static Il2CppString* tg();  // RVA: 0x6ED2F0
        static Il2CppString* th();  // RVA: 0x6ED390
        static Il2CppString* ti();  // RVA: 0x6ED430
        static Il2CppString* tj();  // RVA: 0x6ED4D0
        static Il2CppString* tk();  // RVA: 0x6ED570
        static Il2CppString* tl();  // RVA: 0x6ED610
        static Il2CppString* tm();  // RVA: 0x6ED6B0
        static Il2CppString* tn();  // RVA: 0x6ED750
        static Il2CppString* to();  // RVA: 0x6ED7F0
        static Il2CppString* tp();  // RVA: 0x6ED890
        static Il2CppString* tq();  // RVA: 0x6ED930
        static void .cctor();  // RVA: 0x6D9BE0
    };

} // namespace <PrivateImplementationDetails>{F712CE00-33BD-4EC2-BD6D-1C67BFB58A67}
