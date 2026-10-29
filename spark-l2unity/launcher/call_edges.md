# InfinityLauncher.exe - arestas de chamada (call_edges) por método


## <>f__AnonymousType0`3..ctor
  - call System.Object::.ctor

## <>f__AnonymousType0`3.Equals
  - call System.Collections.Generic.EqualityComparer`1::get_Default
  - callvirt System.Collections.Generic.EqualityComparer`1::Equals

## <>f__AnonymousType0`3.GetHashCode
  - call System.Collections.Generic.EqualityComparer`1::get_Default
  - callvirt System.Collections.Generic.EqualityComparer`1::GetHashCode

## <>f__AnonymousType0`3.ToString
  - callvirt System.Object::ToString
  - call System.String::Format

## SparkLauncher.ArquivoJogo..ctor
  - call System.Object::.ctor

## SparkLauncher.Manifesto.get_TotalBytes
  - ldftn <>c::<get_TotalBytes>b__10_0
  - newobj System.Func`2::.ctor
  - call System.Linq.Enumerable::Sum

## SparkLauncher.Manifesto..ctor
  - newobj System.Collections.Generic.List`1::.ctor
  - call System.Object::.ctor

## SparkLauncher.Plano.get_Bytes
  - ldftn <>c::<get_Bytes>b__3_0
  - newobj System.Func`2::.ctor
  - call System.Linq.Enumerable::Sum

## SparkLauncher.Plano.get_Vazio
  - callvirt System.Collections.Generic.List`1::get_Count

## SparkLauncher.Plano..ctor
  - newobj System.Collections.Generic.List`1::.ctor
  - call System.Object::.ctor

## SparkLauncher.Atualizador..ctor
  - call System.StringComparer::get_OrdinalIgnoreCase
  - newobj System.Collections.Generic.Dictionary`2::.ctor
  - newobj System.Object::.ctor
  - call System.Object::.ctor
  - call System.IO.Path::GetFullPath
  - call System.IO.Path::Combine
  - call SparkLauncher.Atualizador::CarregaCache

## SparkLauncher.Atualizador.CriaHttp
  - call System.Net.ServicePointManager::get_SecurityProtocol
  - call System.Net.ServicePointManager::set_SecurityProtocol
  - call System.Net.ServicePointManager::set_DefaultConnectionLimit
  - call System.Net.ServicePointManager::set_Expect100Continue
  - newobj System.Net.Http.HttpClientHandler::.ctor
  - callvirt System.Net.Http.HttpClientHandler::set_AutomaticDecompression
  - callvirt System.Net.Http.HttpClientHandler::set_UseCookies
  - newobj System.Net.Http.HttpClient::.ctor
  - callvirt System.Net.Http.HttpClient::set_Timeout
  - callvirt System.Net.Http.HttpClient::get_DefaultRequestHeaders
  - callvirt System.Net.Http.Headers.HttpRequestHeaders::get_UserAgent
  - call SparkLauncher.Config::get_VersaoTexto
  - call System.String::Concat
  - callvirt System.Net.Http.Headers.HttpHeaderValueCollection`1::ParseAdd

## SparkLauncher.Atualizador.BaixaTexto
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::get_Task

## SparkLauncher.Atualizador.SemCache
  - callvirt System.String::Contains
  - call System.DateTime::get_UtcNow
  - call System.DateTime::get_Ticks
  - call System.Int64::ToString
  - call System.String::Concat

## SparkLauncher.Atualizador.BuscaManifesto
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::get_Task

## SparkLauncher.Atualizador.Json
  - newobj System.Web.Script.Serialization.JavaScriptSerializer::.ctor
  - callvirt System.Web.Script.Serialization.JavaScriptSerializer::set_MaxJsonLength
  - callvirt System.Web.Script.Serialization.JavaScriptSerializer::set_RecursionLimit

## SparkLauncher.Atualizador.LeManifesto
  - call SparkLauncher.Atualizador::Json
  - callvirt System.Web.Script.Serialization.JavaScriptSerializer::DeserializeObject
  - newobj SparkLauncher.Manifesto::.ctor
  - callvirt System.Collections.Generic.Dictionary`2::get_Item
  - call System.Globalization.CultureInfo::get_InvariantCulture
  - call System.Convert::ToString
  - newobj System.Uri::.ctor
  - call System.Uri::get_AbsoluteUri
  - callvirt System.String::EndsWith
  - call System.String::Concat
  - callvirt System.Collections.Generic.Dictionary`2::TryGetValue
  - callvirt System.String::get_Length
  - callvirt System.String::ToLowerInvariant
  - newobj SparkLauncher.ArquivoJogo::.ctor
  - call System.Convert::ToInt64
  - call SparkLauncher.Atualizador::CaminhoSeguro
  - callvirt System.Collections.Generic.List`1::Add
  - call SparkLauncher.L::T
  - newobj SparkLauncher.ErroLauncher::.ctor

## SparkLauncher.Atualizador.CaminhoSeguro
  - call System.String::IsNullOrWhiteSpace
  - callvirt System.String::StartsWith
  - callvirt System.String::Contains
  - callvirt System.String::Split
  - ldftn <>c::<CaminhoSeguro>b__26_0
  - newobj System.Func`2::.ctor
  - call System.Linq.Enumerable::Any
  - call SparkLauncher.Config::get_Exe
  - call System.IO.Path::GetFileName
  - callvirt System.String::Equals
  - call SparkLauncher.L::T
  - call System.String::Concat
  - newobj SparkLauncher.ErroLauncher::.ctor

## SparkLauncher.Atualizador.Local
  - callvirt System.String::Replace
  - call System.IO.Path::Combine

## SparkLauncher.Atualizador.CarregaCache
  - call System.IO.File::Exists
  - call System.Text.Encoding::get_UTF8
  - call System.IO.File::ReadAllLines
  - callvirt System.String::Split
  - call System.Int64::Parse
  - callvirt System.Collections.Generic.Dictionary`2::set_Item
  - callvirt System.Exception::get_Message
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve
  - callvirt System.Collections.Generic.Dictionary`2::Clear

## SparkLauncher.Atualizador.SalvaCache
  - call System.Threading.Monitor::Enter
  - call System.IO.Path::GetDirectoryName
  - call System.IO.Directory::CreateDirectory
  - newobj System.Text.StringBuilder::.ctor
  - callvirt System.Collections.Generic.Dictionary`2::GetEnumerator
  - call Enumerator::get_Current
  - call System.Collections.Generic.KeyValuePair`2::get_Key
  - callvirt System.Text.StringBuilder::Append
  - call System.Collections.Generic.KeyValuePair`2::get_Value
  - call Enumerator::MoveNext
  - callvirt System.IDisposable::Dispose
  - call System.String::Concat
  - callvirt System.Object::ToString
  - newobj System.Text.UTF8Encoding::.ctor
  - call System.IO.File::WriteAllText
  - call SparkLauncher.Nativo::Troca
  - callvirt System.Exception::get_Message
  - call SparkLauncher.Log::Escreve
  - call System.Threading.Monitor::Exit

## SparkLauncher.Atualizador.Anota
  - call SparkLauncher.Atualizador::Local
  - newobj System.IO.FileInfo::.ctor
  - call System.Threading.Monitor::Enter
  - callvirt System.IO.FileInfo::get_Length
  - callvirt System.IO.FileSystemInfo::get_LastWriteTimeUtc
  - call System.DateTime::get_Ticks
  - callvirt System.Collections.Generic.Dictionary`2::set_Item
  - call System.Threading.Monitor::Exit

## SparkLauncher.Atualizador.MigraPastaDoJogo
  - call System.IO.Path::GetFileNameWithoutExtension
  - call System.String::Concat
  - call System.IO.Path::Combine
  - newobj <>c__DisplayClass31_0::.ctor
  - callvirt System.String::Equals
  - call System.IO.Directory::Exists
  - call System.IO.Directory::Move
  - call SparkLauncher.L::T
  - newobj SparkLauncher.ErroLauncher::.ctor
  - call System.IO.Path::GetFileName
  - call System.Threading.Monitor::Enter
  - callvirt System.Collections.Generic.Dictionary`2::get_Keys
  - ldftn <>c__DisplayClass31_0::<MigraPastaDoJogo>b__0
  - newobj System.Func`2::.ctor
  - call System.Linq.Enumerable::Where
  - call System.Linq.Enumerable::ToList
  - callvirt System.Collections.Generic.List`1::GetEnumerator
  - call Enumerator::get_Current
  - callvirt System.String::get_Length
  - callvirt System.String::Substring
  - callvirt System.Collections.Generic.Dictionary`2::get_Item
  - callvirt System.Collections.Generic.Dictionary`2::set_Item
  - callvirt System.Collections.Generic.Dictionary`2::Remove
  - call Enumerator::MoveNext
  - callvirt System.IDisposable::Dispose
  - call System.Threading.Monitor::Exit
  - call SparkLauncher.Atualizador::SalvaCache
  - call System.IO.File::Delete
  - call SparkLauncher.Log::Escreve

## SparkLauncher.Atualizador.Confere
  - call SparkLauncher.Atualizador::MigraPastaDoJogo
  - newobj SparkLauncher.Plano::.ctor
  - newobj System.Collections.Generic.List`1::.ctor
  - callvirt System.Collections.Generic.List`1::GetEnumerator
  - call Enumerator::get_Current
  - call SparkLauncher.Atualizador::Local
  - newobj System.IO.FileInfo::.ctor
  - callvirt System.IO.FileSystemInfo::get_Exists
  - callvirt System.IO.FileInfo::get_Length
  - callvirt System.Collections.Generic.List`1::Add
  - call System.Threading.Monitor::Enter
  - callvirt System.Collections.Generic.Dictionary`2::TryGetValue
  - call System.Threading.Monitor::Exit
  - callvirt System.IO.FileSystemInfo::get_LastWriteTimeUtc
  - call System.DateTime::get_Ticks
  - call System.String::op_Inequality
  - call Enumerator::MoveNext
  - callvirt System.IDisposable::Dispose
  - call SparkLauncher.L::T
  - ldftn <>c::<Confere>b__32_0
  - newobj System.Func`2::.ctor
  - call System.Linq.Enumerable::Sum
  - callvirt System.Collections.Generic.List`1::get_Count
  - call System.Int32::ToString
  - call SparkLauncher.Formata::Bytes
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve
  - call System.Threading.CancellationToken::ThrowIfCancellationRequested
  - call SparkLauncher.Atualizador::HashArquivo
  - call SparkLauncher.Atualizador::Anota
  - ldftn <>c::<Confere>b__32_1
  - call System.Linq.Enumerable::Select
  - call System.StringComparer::get_OrdinalIgnoreCase
  - newobj System.Collections.Generic.HashSet`1::.ctor
  - callvirt System.Collections.Generic.HashSet`1::Contains
  - call System.IO.File::Exists
  - call SparkLauncher.Atualizador::SalvaCache
  - callvirt SparkLauncher.Plano::get_Vazio
  - call SparkLauncher.Atualizador::GravaVersaoInstalada

## SparkLauncher.Atualizador.HashArquivo
  - newobj System.Security.Cryptography.SHA256Cng::.ctor
  - newobj System.IO.FileStream::.ctor
  - call System.Threading.CancellationToken::ThrowIfCancellationRequested
  - callvirt System.Security.Cryptography.HashAlgorithm::TransformBlock
  - call System.Threading.Interlocked::Add
  - callvirt System.IO.Stream::Read
  - callvirt System.Security.Cryptography.HashAlgorithm::TransformFinalBlock
  - callvirt System.Security.Cryptography.HashAlgorithm::get_Hash
  - call SparkLauncher.Atualizador::Hex
  - callvirt System.IDisposable::Dispose

## SparkLauncher.Atualizador.Hex
  - newobj System.Text.StringBuilder::.ctor
  - call System.Byte::ToString
  - callvirt System.Text.StringBuilder::Append
  - callvirt System.Object::ToString

## SparkLauncher.Atualizador.FaltaNoDisco
  - ldftn SparkLauncher.Atualizador::<FaltaNoDisco>b__35_0
  - newobj System.Func`2::.ctor
  - call System.Linq.Enumerable::Sum

## SparkLauncher.Atualizador.ConfereEspaco
  - call SparkLauncher.Atualizador::FaltaNoDisco
  - call System.IO.Path::GetPathRoot
  - newobj System.IO.DriveInfo::.ctor
  - callvirt System.IO.DriveInfo::get_AvailableFreeSpace
  - call SparkLauncher.L::T
  - callvirt System.IO.DriveInfo::get_Name
  - call SparkLauncher.Formata::Bytes
  - call System.String::Concat
  - newobj SparkLauncher.ErroLauncher::.ctor

## SparkLauncher.Atualizador.Executa
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## SparkLauncher.Atualizador.Url
  - callvirt System.String::Split
  - ldftn System.Uri::EscapeDataString
  - newobj System.Func`2::.ctor
  - call System.Linq.Enumerable::Select
  - call System.String::Join
  - call System.String::Concat

## SparkLauncher.Atualizador.Baixa
  - call SparkLauncher.Atualizador::Url
  - call SparkLauncher.Atualizador::Local
  - call SparkLauncher.Atualizador::BaixaPara

## SparkLauncher.Atualizador.BaixaPara
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## SparkLauncher.Atualizador.get_ArqVersao
  - call System.IO.Path::Combine

## SparkLauncher.Atualizador.VersaoInstalada
  - call SparkLauncher.Atualizador::get_ArqVersao
  - call System.IO.File::Exists
  - call System.IO.File::ReadAllText
  - callvirt System.String::Trim

## SparkLauncher.Atualizador.GravaVersaoInstalada
  - call SparkLauncher.Atualizador::get_ArqVersao
  - call System.IO.File::WriteAllText

## SparkLauncher.Atualizador.LauncherNovo
  - call System.String::IsNullOrEmpty
  - call System.Version::TryParse
  - call SparkLauncher.Config::get_Versao
  - call System.Version::op_GreaterThan

## SparkLauncher.Atualizador.AtualizaLauncher
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## SparkLauncher.Atualizador.LimpaLauncherVelho
  - ldftn <>c::<LimpaLauncherVelho>b__47_0
  - newobj System.Func`1::.ctor
  - call System.Threading.Tasks.Task::Run

## SparkLauncher.Atualizador..cctor
  - call System.TimeSpan::FromSeconds
  - call SparkLauncher.Atualizador::CriaHttp

## SparkLauncher.Atualizador.<FaltaNoDisco>b__35_0
  - call SparkLauncher.Atualizador::Local
  - call System.String::Concat
  - newobj System.IO.FileInfo::.ctor
  - callvirt System.IO.FileSystemInfo::get_Exists
  - callvirt System.IO.FileInfo::get_Length
  - call System.Math::Max

## SparkLauncher.Config.get_Versao
  - call System.Reflection.Assembly::GetExecutingAssembly
  - callvirt System.Reflection.Assembly::GetName
  - callvirt System.Reflection.AssemblyName::get_Version

## SparkLauncher.Config.get_VersaoTexto
  - call SparkLauncher.Config::get_Versao
  - callvirt System.Version::ToString

## SparkLauncher.Config.get_Exe
  - call System.Diagnostics.Process::GetCurrentProcess
  - callvirt System.Diagnostics.Process::get_MainModule
  - callvirt System.Diagnostics.ProcessModule::get_FileName

## SparkLauncher.Config.get_Raiz
  - call SparkLauncher.Config::get_Exe
  - call System.IO.Path::GetDirectoryName

## SparkLauncher.Config.get_Dados
  - call SparkLauncher.Config::get_Raiz
  - call System.IO.Path::Combine

## SparkLauncher.Log.LigaConsole
  - call SparkLauncher.Log::AttachConsole

## SparkLauncher.Log.Escreve
  - call System.DateTime::get_Now
  - call System.DateTime::ToString
  - call System.String::Concat
  - call System.Threading.Monitor::Enter
  - call SparkLauncher.Config::get_Dados
  - call System.IO.Directory::CreateDirectory
  - call System.IO.Path::Combine
  - newobj System.IO.FileInfo::.ctor
  - callvirt System.IO.FileSystemInfo::get_Exists
  - callvirt System.IO.FileInfo::get_Length
  - call System.IO.File::Delete
  - call System.Environment::get_NewLine
  - call System.Text.Encoding::get_UTF8
  - call System.IO.File::AppendAllText
  - call System.Console::WriteLine
  - call System.Threading.Monitor::Exit

## SparkLauncher.Log..cctor
  - newobj System.Object::.ctor

## SparkLauncher.Formata.get_C
  - call System.Globalization.CultureInfo::get_InvariantCulture
  - newobj System.Globalization.CultureInfo::.ctor

## SparkLauncher.Formata.Bytes
  - call SparkLauncher.Formata::get_C
  - call System.Double::ToString
  - call System.String::Concat

## SparkLauncher.Formata.Tempo
  - call System.Double::IsNaN
  - call System.Double::IsInfinity
  - call System.Math::Ceiling
  - call System.Double::ToString
  - call System.String::Concat
  - call System.Int32::ToString

## SparkLauncher.ErroLauncher..ctor
  - call System.Exception::.ctor

## SparkLauncher.Nativo.Troca
  - call SparkLauncher.Nativo::MoveFileEx
  - call System.Runtime.InteropServices.Marshal::GetLastWin32Error
  - call SparkLauncher.L::T
  - call System.IO.Path::GetFileName
  - call System.String::Concat
  - newobj SparkLauncher.ErroLauncher::.ctor
  - call System.Int32::ToString
  - newobj System.IO.IOException::.ctor

## SparkLauncher.Nativo.DiscoCheio
  - callvirt System.Exception::get_HResult

## SparkLauncher.Args.Tem
  - callvirt System.Collections.Generic.List`1::Contains

## SparkLauncher.Args.Valor
  - callvirt System.Collections.Generic.List`1::IndexOf
  - callvirt System.Collections.Generic.List`1::get_Count
  - callvirt System.Collections.Generic.List`1::get_Item

## SparkLauncher.Args.Linha
  - newobj System.Text.StringBuilder::.ctor
  - newobj System.Collections.Generic.List`1::.ctor
  - callvirt System.Collections.Generic.List`1::Contains
  - callvirt System.Collections.Generic.List`1::Add
  - callvirt System.Collections.Generic.List`1::GetEnumerator
  - call Enumerator::get_Current
  - callvirt System.Text.StringBuilder::get_Length
  - callvirt System.Text.StringBuilder::Append
  - callvirt System.String::IndexOf
  - callvirt System.String::get_Length
  - call System.String::Concat
  - call Enumerator::MoveNext
  - callvirt System.IDisposable::Dispose
  - callvirt System.Object::ToString

## SparkLauncher.Args..cctor
  - newobj System.Collections.Generic.List`1::.ctor

## SparkLauncher.Grafico.Arquivo
  - call System.IO.Path::Combine

## SparkLauncher.Grafico.Teste
  - call System.IO.Path::Combine

## SparkLauncher.Grafico.PastaDoJogo
  - call SparkLauncher.Config::get_Raiz
  - call System.String::IsNullOrEmpty
  - call System.IO.Path::Combine
  - call System.IO.Path::GetDirectoryName

## SparkLauncher.Grafico.Le
  - call SparkLauncher.Grafico::Arquivo
  - call System.IO.File::Exists
  - call System.IO.File::ReadAllLines
  - callvirt System.String::Trim
  - callvirt System.String::StartsWith
  - callvirt System.String::Substring
  - callvirt System.String::ToLowerInvariant
  - call System.Array::IndexOf

## SparkLauncher.Grafico.Grava
  - call System.IO.Directory::CreateDirectory
  - call SparkLauncher.Grafico::Arquivo
  - call System.String::Concat
  - call System.Text.Encoding::get_ASCII
  - call System.IO.File::WriteAllText
  - call SparkLauncher.Log::Escreve
  - callvirt System.Exception::get_Message

## SparkLauncher.Grafico.ArgumentoParaAbrir
  - call SparkLauncher.Grafico::Le
  - call SparkLauncher.Grafico::Teste
  - call System.Text.Encoding::get_ASCII
  - call System.IO.File::WriteAllText
  - call System.IO.File::Exists
  - call System.IO.File::Delete

## SparkLauncher.Grafico.ConfereFalha
  - call SparkLauncher.Grafico::Teste
  - call System.IO.File::Exists
  - call SparkLauncher.Grafico::JogoAberto
  - call System.IO.File::ReadAllText
  - callvirt System.String::Trim
  - callvirt System.String::ToLowerInvariant
  - call System.Array::IndexOf
  - call System.IO.File::Delete
  - call SparkLauncher.Grafico::Grava
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve
  - call SparkLauncher.L::T

## SparkLauncher.Grafico.JogoAberto
  - call System.String::IsNullOrEmpty
  - call System.IO.Path::GetFileNameWithoutExtension
  - call System.Diagnostics.Process::GetProcessesByName
  - call System.Linq.Enumerable::Any

## SparkLauncher.Janela..ctor
  - newobj System.Collections.Generic.List`1::.ctor
  - newobj System.Threading.CancellationTokenSource::.ctor
  - newobj System.Windows.Forms.Timer::.ctor
  - callvirt System.Windows.Forms.Timer::set_Interval
  - newobj System.Collections.Generic.Queue`1::.ctor
  - call System.Diagnostics.Stopwatch::StartNew
  - newobj System.Collections.Generic.Dictionary`2::.ctor
  - call System.Windows.Forms.Form::.ctor
  - callvirt System.Windows.Forms.Control::set_Text
  - call System.Windows.Forms.Form::set_FormBorderStyle
  - call System.Windows.Forms.Form::set_StartPosition
  - call System.Drawing.Color::get_Black
  - callvirt System.Windows.Forms.Control::set_BackColor
  - callvirt System.Windows.Forms.Control::set_DoubleBuffered
  - call System.Windows.Forms.Control::SetStyle
  - call SparkLauncher.Config::get_Exe
  - call System.Drawing.Icon::ExtractAssociatedIcon
  - call System.Windows.Forms.Form::set_Icon
  - call SparkLauncher.Recurso::Imagem
  - call System.Int32::ToString
  - call System.String::Concat
  - call SparkLauncher.Janela::MontaWidgets
  - ldftn SparkLauncher.Janela::<.ctor>b__33_0
  - newobj System.EventHandler::.ctor
  - callvirt System.Windows.Forms.Timer::add_Tick
  - ldftn SparkLauncher.Janela::<.ctor>b__33_1

## SparkLauncher.Janela.get_CreateParams
  - call System.Windows.Forms.Form::get_CreateParams
  - callvirt System.Windows.Forms.CreateParams::get_ClassStyle
  - callvirt System.Windows.Forms.CreateParams::set_ClassStyle
  - callvirt System.Windows.Forms.CreateParams::get_Style
  - callvirt System.Windows.Forms.CreateParams::set_Style

## SparkLauncher.Janela.Mostra
  - call SparkLauncher.Janela::ShowWindow
  - call SparkLauncher.Janela::SetForegroundWindow

## SparkLauncher.Janela.OnHandleCreated
  - call System.Windows.Forms.Form::OnHandleCreated
  - call System.Windows.Forms.Control::get_Handle
  - call SparkLauncher.Janela::DwmSetWindowAttribute
  - call SparkLauncher.Janela::GetDpiForWindow
  - call System.Windows.Forms.Control::CreateGraphics
  - callvirt System.Drawing.Graphics::get_DpiX
  - callvirt System.IDisposable::Dispose
  - call System.Windows.Forms.Cursor::get_Position
  - call System.Windows.Forms.Screen::FromPoint
  - callvirt System.Windows.Forms.Screen::get_WorkingArea
  - call SparkLauncher.Janela::AplicaEscala

## SparkLauncher.Janela.AplicaEscala
  - call System.Drawing.Rectangle::get_Width
  - call System.Drawing.Rectangle::get_Height
  - call System.Math::Min
  - call System.Math::Round
  - call System.Drawing.Size::.ctor
  - call System.Nullable`1::get_HasValue
  - call System.Nullable`1::get_Value
  - call System.Drawing.Rectangle::get_Location
  - newobj System.Drawing.Rectangle::.ctor
  - call System.Windows.Forms.Control::set_Bounds
  - call System.Drawing.Rectangle::get_Left
  - call System.Drawing.Size::get_Width
  - call System.Drawing.Rectangle::get_Top
  - call System.Drawing.Size::get_Height
  - call System.Drawing.Image::Dispose
  - callvirt System.Drawing.Image::get_Height
  - callvirt System.Drawing.Image::get_Width
  - newobj System.Drawing.Bitmap::.ctor
  - call System.Drawing.Graphics::FromImage
  - callvirt System.Drawing.Graphics::set_InterpolationMode
  - callvirt System.Drawing.Graphics::set_PixelOffsetMode
  - callvirt System.Drawing.Graphics::DrawImage
  - callvirt System.IDisposable::Dispose
  - call System.Windows.Forms.Control::Invalidate

## SparkLauncher.Janela.WndProc
  - call System.Windows.Forms.Message::get_Msg
  - call System.Windows.Forms.Message::get_WParam
  - call System.IntPtr::op_Explicit
  - call System.Windows.Forms.Message::get_LParam
  - call System.Type::GetTypeFromHandle
  - call System.Runtime.InteropServices.Marshal::PtrToStructure
  - call System.Windows.Forms.Control::get_Handle
  - call System.Windows.Forms.Screen::FromHandle
  - callvirt System.Windows.Forms.Screen::get_WorkingArea
  - newobj System.Drawing.Rectangle::.ctor
  - newobj System.Nullable`1::.ctor
  - call SparkLauncher.Janela::AplicaEscala
  - call System.Windows.Forms.Form::WndProc

## SparkLauncher.Janela.Logico
  - call System.Drawing.Point::get_X
  - call System.Drawing.Point::get_Y
  - newobj System.Drawing.PointF::.ctor

## SparkLauncher.Janela.Acha
  - call SparkLauncher.Janela::Logico
  - callvirt System.Collections.Generic.List`1::get_Count
  - callvirt System.Collections.Generic.List`1::get_Item
  - callvirt System.Func`1::Invoke
  - call System.Drawing.RectangleF::Contains

## SparkLauncher.Janela.OnMouseMove
  - callvirt System.Windows.Forms.MouseEventArgs::get_Location
  - call SparkLauncher.Janela::Acha
  - callvirt System.Func`1::Invoke
  - call System.Windows.Forms.Cursors::get_Default
  - call System.Windows.Forms.Cursors::get_Hand
  - callvirt System.Windows.Forms.Control::set_Cursor
  - call System.Windows.Forms.Control::Invalidate

## SparkLauncher.Janela.OnMouseLeave
  - call System.Windows.Forms.Control::Invalidate

## SparkLauncher.Janela.OnMouseDown
  - callvirt System.Windows.Forms.MouseEventArgs::get_Button
  - callvirt System.Windows.Forms.MouseEventArgs::get_Location
  - call SparkLauncher.Janela::Acha
  - call System.Windows.Forms.Control::Invalidate
  - call SparkLauncher.Janela::ReleaseCapture
  - call System.Windows.Forms.Control::get_Handle
  - call System.IntPtr::op_Explicit
  - call SparkLauncher.Janela::SendMessage

## SparkLauncher.Janela.OnMouseUp
  - callvirt System.Windows.Forms.MouseEventArgs::get_Location
  - call SparkLauncher.Janela::Acha
  - call System.Windows.Forms.Control::Invalidate
  - callvirt System.Func`1::Invoke
  - callvirt System.Action::Invoke

## SparkLauncher.Janela.OnShown
  - call System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start

## SparkLauncher.Janela.OnFormClosing
  - callvirt System.Threading.CancellationTokenSource::Cancel
  - call SparkLauncher.Atualizador::SalvaCache
  - call System.Windows.Forms.Form::OnFormClosing

## SparkLauncher.Janela.Confere
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## SparkLauncher.Janela.Define
  - callvirt SparkLauncher.Plano::get_Vazio
  - callvirt SparkLauncher.Atualizador::Local
  - call System.IO.File::Exists
  - callvirt System.Object::ToString
  - callvirt System.Collections.Generic.List`1::get_Count
  - call System.Int32::ToString
  - callvirt SparkLauncher.Plano::get_Bytes
  - call SparkLauncher.Formata::Bytes
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve

## SparkLauncher.Janela.Falhou
  - call SparkLauncher.L::T
  - callvirt System.Exception::get_Message
  - call System.String::Concat
  - callvirt System.Object::ToString
  - call SparkLauncher.Log::Escreve

## SparkLauncher.Janela.Trabalha
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## SparkLauncher.Janela.ConfirmaPasta
  - newobj <>c__DisplayClass59_0::.ctor
  - call SparkLauncher.Config::get_Exe
  - call System.IO.Path::GetFileName
  - call SparkLauncher.Config::get_Raiz
  - call System.IO.Directory::EnumerateFileSystemEntries
  - ldftn System.IO.Path::GetFileName
  - newobj System.Func`2::.ctor
  - call System.Linq.Enumerable::Select
  - ldftn <>c__DisplayClass59_0::<ConfirmaPasta>b__0
  - call System.Linq.Enumerable::Where
  - call System.Linq.Enumerable::ToList
  - callvirt SparkLauncher.Manifesto::get_TotalBytes
  - call SparkLauncher.Formata::Bytes
  - call System.String::Concat
  - call SparkLauncher.L::T
  - callvirt System.Collections.Generic.List`1::get_Count
  - call SparkLauncher.Args::Tem
  - callvirt System.Windows.Forms.Control::get_Text
  - call System.Windows.Forms.MessageBox::Show

## SparkLauncher.Janela.Jogar
  - call SparkLauncher.Config::get_Raiz
  - newobj SparkLauncher.Atualizador::.ctor
  - call SparkLauncher.Program::Jogar
  - call SparkLauncher.Janela::VigiaApi
  - call System.Windows.Forms.Form::Close
  - call System.Windows.Forms.Form::set_WindowState
  - call SparkLauncher.Janela::Falhou
  - call System.Windows.Forms.Control::Invalidate

## SparkLauncher.Janela.VigiaApi
  - newobj <>c__DisplayClass61_0::.ctor
  - call SparkLauncher.Grafico::PastaDoJogo
  - call SparkLauncher.Grafico::Le
  - ldftn <>c__DisplayClass61_0::<VigiaApi>b__0
  - newobj System.Action::.ctor
  - call System.Threading.Tasks.Task::Run

## SparkLauncher.Janela.CliquePrincipal
  - call SparkLauncher.Janela::Jogar
  - call SparkLauncher.Janela::Trabalha
  - call SparkLauncher.Janela::JogoInstalado
  - call SparkLauncher.Janela::Tentar

## SparkLauncher.Janela.Tentar
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## SparkLauncher.Janela.JogoInstalado
  - call SparkLauncher.Config::get_Raiz
  - call System.IO.Path::Combine
  - call System.IO.File::Exists

## SparkLauncher.Janela.Tique
  - callvirt System.Diagnostics.Stopwatch::get_Elapsed
  - call System.TimeSpan::get_TotalSeconds
  - call System.Threading.Interlocked::Read
  - newobj System.Collections.Generic.KeyValuePair`2::.ctor
  - callvirt System.Collections.Generic.Queue`1::Enqueue
  - callvirt System.Collections.Generic.Queue`1::Dequeue
  - callvirt System.Collections.Generic.Queue`1::get_Count
  - callvirt System.Collections.Generic.Queue`1::Peek
  - call System.Collections.Generic.KeyValuePair`2::get_Key
  - call System.Collections.Generic.KeyValuePair`2::get_Value
  - call System.Windows.Forms.Control::get_Width
  - call System.Windows.Forms.Control::get_Height
  - newobj System.Drawing.Rectangle::.ctor
  - call System.Windows.Forms.Control::Invalidate

## SparkLauncher.Janela.AtualizaSite
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## SparkLauncher.Janela.CarregaNoticias
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## SparkLauncher.Janela.Campo
  - callvirt System.Collections.Generic.Dictionary`2::get_Item
  - callvirt System.Collections.Generic.Dictionary`2::set_Item
  - call System.String::Concat
  - callvirt System.Collections.Generic.Dictionary`2::TryGetValue

## SparkLauncher.Janela.TrocaIdioma
  - call SparkLauncher.Preferencias::Salva
  - callvirt System.Collections.Generic.List`1::GetEnumerator
  - call Enumerator::get_Current
  - callvirt System.Collections.Generic.Dictionary`2::TryGetValue
  - call SparkLauncher.Janela::Campo
  - call Enumerator::MoveNext
  - callvirt System.IDisposable::Dispose
  - call System.Windows.Forms.Control::Invalidate

## SparkLauncher.Janela.DataNoticia
  - call System.Globalization.CultureInfo::get_InvariantCulture
  - call System.DateTime::TryParseExact
  - call System.DateTime::ToString

## SparkLauncher.Janela.Abre
  - newobj System.Diagnostics.ProcessStartInfo::.ctor
  - callvirt System.Diagnostics.ProcessStartInfo::set_UseShellExecute
  - call System.Diagnostics.Process::Start
  - callvirt System.Exception::get_Message
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve

## SparkLauncher.Janela.MontaWidgets
  - newobj Widget::.ctor
  - newobj System.Drawing.RectangleF::.ctor
  - ldftn SparkLauncher.Janela::<MontaWidgets>b__79_0
  - newobj System.Action::.ctor
  - callvirt System.Collections.Generic.List`1::Add
  - ldftn System.Windows.Forms.Form::Close
  - call System.Drawing.RectangleF::get_Right
  - call System.Drawing.RectangleF::get_Y
  - ldftn <>c::<MontaWidgets>b__79_1
  - newobj <>c__DisplayClass79_0::.ctor
  - call System.Drawing.RectangleF::get_X
  - call System.Drawing.RectangleF::get_Width
  - ldftn <>c__DisplayClass79_0::<MontaWidgets>b__2
  - newobj System.Func`1::.ctor
  - ldftn <>c__DisplayClass79_0::<MontaWidgets>b__3
  - ldftn SparkLauncher.Janela::<MontaWidgets>b__79_4
  - ldftn SparkLauncher.Janela::<MontaWidgets>b__79_5
  - ldftn SparkLauncher.Janela::<MontaWidgets>b__79_6
  - ldftn SparkLauncher.Janela::<MontaWidgets>b__79_7
  - ldftn SparkLauncher.Janela::CliquePrincipal
  - ldftn SparkLauncher.Janela::<MontaWidgets>b__79_8
  - ldftn SparkLauncher.Janela::AbreMenu

## SparkLauncher.Janela.Hover
  - callvirt System.Func`1::Invoke

## SparkLauncher.Janela.AbreMenu
  - newobj <>c__DisplayClass82_0::.ctor
  - newobj System.Windows.Forms.ContextMenuStrip::.ctor
  - newobj CoresMenu::.ctor
  - newobj System.Windows.Forms.ToolStripProfessionalRenderer::.ctor
  - callvirt System.Windows.Forms.ToolStripProfessionalRenderer::set_RoundedEdges
  - callvirt System.Windows.Forms.ToolStrip::set_Renderer
  - callvirt System.Windows.Forms.ToolStripDropDownMenu::set_ShowImageMargin
  - callvirt System.Windows.Forms.ToolStripDropDownMenu::set_ShowCheckMargin
  - newobj System.Drawing.Font::.ctor
  - callvirt System.Windows.Forms.Control::set_Font
  - call System.Drawing.Color::FromArgb
  - callvirt System.Windows.Forms.ToolStrip::set_ForeColor
  - call SparkLauncher.L::T
  - ldftn <>c__DisplayClass82_0::<AbreMenu>b__0
  - newobj System.Action::.ctor
  - call SparkLauncher.Janela::Item
  - ldftn <>c::<AbreMenu>b__82_1
  - callvirt System.Windows.Forms.ToolStrip::get_Items
  - newobj System.Windows.Forms.ToolStripSeparator::.ctor
  - callvirt System.Windows.Forms.ToolStripItemCollection::Add
  - ldftn <>c::<AbreMenu>b__82_2
  - ldftn <>c::<AbreMenu>b__82_3
  - ldftn <>c::<AbreMenu>b__82_4
  - ldftn <>c::<AbreMenu>b__82_5
  - ldftn <>c__DisplayClass82_0::<AbreMenu>b__6
  - ldftn <>c__DisplayClass82_0::<AbreMenu>b__7
  - call SparkLauncher.Grafico::PastaDoJogo
  - call SparkLauncher.Grafico::Le
  - newobj <>c__DisplayClass82_1::.ctor
  - call System.String::Concat
  - ldftn <>c__DisplayClass82_1::<AbreMenu>b__10
  - ldftn <>c::<AbreMenu>b__82_8
  - call SparkLauncher.Config::get_VersaoTexto
  - ldftn <>c__DisplayClass82_0::<AbreMenu>b__9
  - newobj System.Windows.Forms.ToolStripDropDownClosedEventHandler::.ctor
  - callvirt System.Windows.Forms.ToolStripDropDown::add_Closed
  - call System.Drawing.RectangleF::get_Right
  - call System.Drawing.RectangleF::get_Y
  - call System.Drawing.Point::.ctor
  - callvirt System.Windows.Forms.ToolStripDropDown::Show

## SparkLauncher.Janela.Item
  - newobj <>c__DisplayClass83_0::.ctor
  - newobj System.Windows.Forms.ToolStripMenuItem::.ctor
  - callvirt System.Windows.Forms.ToolStripItem::set_Enabled
  - callvirt System.Windows.Forms.ToolStripMenuItem::set_Checked
  - call System.Drawing.Color::FromArgb
  - callvirt System.Windows.Forms.ToolStripItem::set_ForeColor
  - newobj System.Windows.Forms.Padding::.ctor
  - callvirt System.Windows.Forms.ToolStripItem::set_Padding
  - ldftn <>c__DisplayClass83_0::<Item>b__0
  - newobj System.EventHandler::.ctor
  - callvirt System.Windows.Forms.ToolStripItem::add_Click
  - callvirt System.Windows.Forms.ToolStrip::get_Items
  - callvirt System.Windows.Forms.ToolStripItemCollection::Add

## SparkLauncher.Janela.OnPaint
  - callvirt System.Windows.Forms.PaintEventArgs::get_Graphics
  - call SparkLauncher.Janela::Pinta

## SparkLauncher.Janela.SalvaPrint
  - call System.Windows.Forms.Form::get_ClientSize
  - call System.Drawing.Size::get_Width
  - call System.Drawing.Size::get_Height
  - newobj System.Drawing.Bitmap::.ctor
  - call System.Drawing.Graphics::FromImage
  - call SparkLauncher.Janela::Pinta
  - callvirt System.IDisposable::Dispose
  - call System.IO.Path::GetFullPath
  - call System.IO.Path::GetDirectoryName
  - call System.IO.Directory::CreateDirectory
  - call System.Drawing.Imaging.ImageFormat::get_Png
  - callvirt System.Drawing.Image::Save
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve

## SparkLauncher.Janela.Pinta
  - call System.Drawing.Color::FromArgb
  - callvirt System.Drawing.Graphics::Clear
  - callvirt System.Drawing.Graphics::set_InterpolationMode
  - callvirt System.Drawing.Graphics::set_PixelOffsetMode
  - callvirt System.Drawing.Image::get_Width
  - callvirt System.Drawing.Image::get_Height
  - newobj System.Drawing.Rectangle::.ctor
  - callvirt System.Drawing.Graphics::DrawImage
  - callvirt System.Drawing.Graphics::ScaleTransform
  - callvirt System.Drawing.Graphics::set_SmoothingMode
  - callvirt System.Drawing.Graphics::set_TextRenderingHint
  - newobj System.Drawing.RectangleF::.ctor
  - newobj System.Drawing.Drawing2D.LinearGradientBrush::.ctor
  - callvirt System.Drawing.Graphics::FillRectangle
  - callvirt System.IDisposable::Dispose
  - call SparkLauncher.Janela::Moldura
  - callvirt System.Collections.Generic.List`1::get_Item
  - call SparkLauncher.Janela::Hover
  - newobj System.Drawing.SolidBrush::.ctor
  - call System.Drawing.RectangleF::get_X
  - call System.Drawing.RectangleF::get_Width
  - call System.Drawing.RectangleF::get_Y
  - call System.Drawing.RectangleF::get_Height
  - call System.Drawing.PointF::.ctor
  - newobj System.Drawing.Pen::.ctor
  - call System.Drawing.PointF::get_X
  - call System.Drawing.PointF::get_Y
  - callvirt System.Drawing.Graphics::DrawLine
  - call SparkLauncher.Janela::PintaNoticias
  - call SparkLauncher.Janela::PintaRanking
  - call SparkLauncher.Janela::PintaStatus
  - call SparkLauncher.Janela::PintaRodape
  - call SparkLauncher.Janela::Estrela
  - newobj System.Drawing.PointF::.ctor
  - call SparkLauncher.Janela::Losango

## SparkLauncher.Janela.Painel
  - call SparkLauncher.Janela::Chanfro
  - call System.Drawing.Color::FromArgb
  - newobj System.Drawing.Drawing2D.LinearGradientBrush::.ctor
  - callvirt System.Drawing.Graphics::FillPath
  - callvirt System.IDisposable::Dispose
  - call SparkLauncher.Janela::Moldura
  - call System.Drawing.RectangleF::Inflate
  - call System.Drawing.RectangleF::get_X
  - call System.Drawing.RectangleF::get_Width
  - newobj System.Drawing.PointF::.ctor
  - newobj System.Drawing.Drawing2D.ColorBlend::.ctor
  - callvirt System.Drawing.Drawing2D.ColorBlend::set_Colors
  - callvirt System.Drawing.Drawing2D.ColorBlend::set_Positions
  - callvirt System.Drawing.Drawing2D.LinearGradientBrush::set_InterpolationColors
  - newobj System.Drawing.Pen::.ctor
  - call System.Drawing.RectangleF::get_Y
  - callvirt System.Drawing.Graphics::DrawLine
  - call SparkLauncher.Janela::Estrela
  - call System.Drawing.RectangleF::get_Right
  - call System.Drawing.RectangleF::get_Bottom
  - call System.Drawing.PointF::get_X
  - call System.Drawing.PointF::get_Y
  - call SparkLauncher.Janela::Losango
  - call SparkLauncher.Texto::Cinzel
  - call SparkLauncher.Texto::Espacado

## SparkLauncher.Janela.PintaNoticias
  - call SparkLauncher.L::T
  - call SparkLauncher.Janela::Painel
  - callvirt System.Collections.Generic.List`1::get_Item
  - call SparkLauncher.Janela::Link
  - call SparkLauncher.Texto::Corpo
  - call System.Drawing.RectangleF::get_X
  - call System.Drawing.RectangleF::get_Y
  - call SparkLauncher.Texto::Simples
  - callvirt System.Collections.Generic.List`1::get_Count
  - call SparkLauncher.Janela::Hover
  - call System.Drawing.Color::FromArgb
  - newobj System.Drawing.SolidBrush::.ctor
  - callvirt System.Drawing.Graphics::FillRectangle
  - callvirt System.IDisposable::Dispose
  - call System.Drawing.RectangleF::.ctor
  - callvirt System.Drawing.Graphics::DrawImage
  - newobj System.Drawing.Pen::.ctor
  - call System.Drawing.RectangleF::get_Width
  - call System.Drawing.RectangleF::get_Height
  - callvirt System.Drawing.Graphics::DrawRectangle
  - call System.Drawing.RectangleF::get_Right
  - call SparkLauncher.Janela::DataNoticia
  - call System.Globalization.CultureInfo::get_CurrentCulture
  - callvirt System.String::ToUpper
  - call SparkLauncher.Texto::Cinzel
  - call SparkLauncher.Texto::Corta
  - call SparkLauncher.Texto::Espacado
  - newobj System.Drawing.RectangleF::.ctor
  - call SparkLauncher.Texto::Quebra
  - call System.Drawing.RectangleF::get_Bottom
  - callvirt System.Drawing.Graphics::DrawLine

## SparkLauncher.Janela.PintaRanking
  - call SparkLauncher.Janela::Painel
  - callvirt System.Collections.Generic.List`1::get_Item
  - call SparkLauncher.L::T
  - call System.String::op_Equality
  - call SparkLauncher.Janela::Aba
  - callvirt System.Collections.Generic.Dictionary`2::TryGetValue
  - callvirt System.Collections.Generic.List`1::get_Count
  - call SparkLauncher.Texto::Cinzel
  - call SparkLauncher.Texto::Largura
  - call System.Drawing.RectangleF::get_X
  - call System.Drawing.RectangleF::get_Width
  - call System.Drawing.RectangleF::get_Y
  - call SparkLauncher.Janela::Estrela
  - call SparkLauncher.Texto::Espacado
  - call SparkLauncher.Texto::Corpo
  - newobj System.Drawing.RectangleF::.ctor
  - call SparkLauncher.Texto::Centro
  - call System.Drawing.RectangleF::.ctor
  - call SparkLauncher.Janela::Chanfro
  - call System.Drawing.Color::FromArgb
  - newobj System.Drawing.SolidBrush::.ctor
  - callvirt System.Drawing.Graphics::FillPath
  - callvirt System.IDisposable::Dispose
  - call SparkLauncher.Janela::Moldura
  - call System.Globalization.CultureInfo::get_InvariantCulture
  - call System.Int32::ToString
  - call System.Drawing.RectangleF::get_Right
  - call System.String::Concat
  - call System.Drawing.StringFormat::get_GenericTypographic
  - callvirt System.Drawing.Graphics::MeasureString
  - call System.Drawing.SizeF::get_Width
  - callvirt System.String::ToUpperInvariant
  - call SparkLauncher.Texto::Corta
  - call System.String::IsNullOrEmpty
  - call SparkLauncher.Texto::Simples
  - callvirt System.Drawing.Graphics::FillEllipse
  - newobj System.Drawing.Pen::.ctor
  - callvirt System.Drawing.Graphics::DrawLine

## SparkLauncher.Janela.PintaStatus
  - call SparkLauncher.Janela::Painel
  - call System.Nullable`1::get_HasValue
  - call System.Nullable`1::get_Value
  - call SparkLauncher.L::T
  - call SparkLauncher.Texto::Cinzel
  - call SparkLauncher.Texto::Largura
  - call System.Drawing.RectangleF::get_Right
  - call System.Drawing.RectangleF::get_Y
  - call SparkLauncher.Texto::Espacado
  - newobj System.Drawing.SolidBrush::.ctor
  - callvirt System.Drawing.Graphics::FillEllipse
  - callvirt System.IDisposable::Dispose
  - call System.Nullable`1::GetValueOrDefault
  - call System.Drawing.Color::FromArgb
  - call System.Globalization.CultureInfo::get_InvariantCulture
  - call System.Int32::ToString
  - newobj <>f__AnonymousType0`3::.ctor
  - callvirt <>f__AnonymousType0`3::get_I
  - call System.Drawing.RectangleF::get_X
  - call SparkLauncher.Janela::Icone
  - callvirt <>f__AnonymousType0`3::get_R
  - call SparkLauncher.Texto::Corpo
  - callvirt <>f__AnonymousType0`3::get_V
  - call System.Drawing.StringFormat::get_GenericTypographic
  - callvirt System.Drawing.Graphics::MeasureString
  - call System.Drawing.SizeF::get_Width
  - call SparkLauncher.Texto::Simples
  - newobj System.Drawing.Pen::.ctor
  - callvirt System.Drawing.Graphics::DrawLine

## SparkLauncher.Janela.PintaRodape
  - call SparkLauncher.Janela::Chanfro
  - call System.Drawing.Color::FromArgb
  - newobj System.Drawing.SolidBrush::.ctor
  - callvirt System.Drawing.Graphics::FillPath
  - callvirt System.IDisposable::Dispose
  - call SparkLauncher.Janela::Moldura
  - call System.Drawing.RectangleF::Inflate
  - call System.Threading.Interlocked::Read
  - callvirt System.String::get_Length
  - call SparkLauncher.L::T
  - call SparkLauncher.Formata::Bytes
  - call System.String::Concat
  - call System.Int32::ToString
  - call System.String::op_Equality
  - callvirt System.Diagnostics.Stopwatch::get_Elapsed
  - call System.TimeSpan::get_TotalSeconds
  - call SparkLauncher.Formata::Tempo
  - call SparkLauncher.Plano::get_Bytes
  - callvirt System.Collections.Generic.List`1::get_Count
  - call System.Drawing.RectangleF::get_X
  - call System.Drawing.RectangleF::get_Right
  - call SparkLauncher.Texto::Corpo
  - call System.Drawing.RectangleF::get_Y
  - call System.Drawing.RectangleF::get_Width
  - newobj System.Drawing.RectangleF::.ctor
  - call SparkLauncher.Texto::Quebra
  - call System.Globalization.CultureInfo::get_CurrentCulture
  - callvirt System.String::ToUpper
  - call SparkLauncher.Texto::Cinzel
  - call SparkLauncher.Texto::Corta
  - call SparkLauncher.Texto::Espacado
  - call SparkLauncher.Janela::Link
  - call SparkLauncher.Texto::Largura
  - call System.Drawing.StringFormat::get_GenericTypographic
  - callvirt System.Drawing.Graphics::MeasureString
  - call System.Drawing.SizeF::get_Width
  - call SparkLauncher.Texto::Simples
  - call System.Drawing.RectangleF::.ctor
  - call SparkLauncher.Janela::Arredondado
  - newobj System.Drawing.Pen::.ctor
  - callvirt System.Drawing.Graphics::DrawPath
  - call System.Math::Min
  - call System.Math::Max
  - call System.Drawing.RectangleF::get_Height
  - newobj System.Drawing.Drawing2D.LinearGradientBrush::.ctor
  - call SparkLauncher.Janela::PintaJogar
  - call SparkLauncher.Janela::Hover
  - call SparkLauncher.Janela::Engrenagem

## SparkLauncher.Janela.PintaJogar
  - callvirt System.Func`1::Invoke
  - call SparkLauncher.Janela::Hover
  - call SparkLauncher.L::T
  - call SparkLauncher.Janela::JogoInstalado
  - call SparkLauncher.Janela::Hexagono
  - call System.Drawing.Color::FromArgb
  - newobj System.Drawing.Drawing2D.LinearGradientBrush::.ctor
  - callvirt System.Drawing.Graphics::FillPath
  - callvirt System.IDisposable::Dispose
  - newobj System.Drawing.Pen::.ctor
  - callvirt System.Drawing.Graphics::DrawPath
  - call System.Drawing.RectangleF::Inflate
  - call System.Drawing.RectangleF::get_X
  - call System.Drawing.RectangleF::get_Y
  - call System.Drawing.RectangleF::get_Height
  - call SparkLauncher.Janela::Estrela
  - call System.Drawing.RectangleF::get_Right
  - call System.Drawing.RectangleF::get_Width
  - call SparkLauncher.Texto::Cinzel
  - call SparkLauncher.Texto::Largura
  - callvirt System.Drawing.Font::GetHeight
  - call SparkLauncher.Texto::Espacado

## SparkLauncher.Janela.Link
  - call SparkLauncher.Texto::Cinzel
  - call SparkLauncher.Texto::Largura
  - call SparkLauncher.Janela::Hover
  - call System.Drawing.RectangleF::get_Right
  - call System.Drawing.RectangleF::get_Y
  - call System.Drawing.RectangleF::get_Height
  - callvirt System.Drawing.Font::GetHeight
  - call SparkLauncher.Texto::Espacado
  - newobj System.Drawing.Pen::.ctor
  - newobj System.Drawing.PointF::.ctor
  - callvirt System.Drawing.Graphics::DrawLines
  - callvirt System.IDisposable::Dispose

## SparkLauncher.Janela.Aba
  - call SparkLauncher.Texto::Cinzel
  - call SparkLauncher.Texto::Largura
  - call SparkLauncher.Janela::Hover
  - call System.Drawing.RectangleF::get_X
  - call System.Drawing.RectangleF::get_Width
  - call System.Drawing.RectangleF::get_Y
  - call System.Drawing.RectangleF::get_Height
  - callvirt System.Drawing.Font::GetHeight
  - call SparkLauncher.Texto::Espacado
  - call System.Drawing.Color::FromArgb
  - newobj System.Drawing.Pen::.ctor
  - call System.Drawing.RectangleF::get_Bottom
  - callvirt System.Drawing.Graphics::DrawLine
  - callvirt System.IDisposable::Dispose

## SparkLauncher.Janela.Chanfro
  - newobj System.Drawing.Drawing2D.GraphicsPath::.ctor
  - call System.Drawing.RectangleF::get_X
  - call System.Drawing.RectangleF::get_Y
  - newobj System.Drawing.PointF::.ctor
  - call System.Drawing.RectangleF::get_Right
  - call System.Drawing.RectangleF::get_Bottom
  - callvirt System.Drawing.Drawing2D.GraphicsPath::AddPolygon

## SparkLauncher.Janela.Hexagono
  - newobj System.Drawing.Drawing2D.GraphicsPath::.ctor
  - call System.Drawing.RectangleF::get_Y
  - call System.Drawing.RectangleF::get_Height
  - call System.Drawing.RectangleF::get_X
  - newobj System.Drawing.PointF::.ctor
  - call System.Drawing.RectangleF::get_Right
  - call System.Drawing.RectangleF::get_Bottom
  - callvirt System.Drawing.Drawing2D.GraphicsPath::AddPolygon

## SparkLauncher.Janela.Arredondado
  - newobj System.Drawing.Drawing2D.GraphicsPath::.ctor
  - call System.Drawing.RectangleF::get_Width
  - call System.Drawing.RectangleF::get_Height
  - call System.Math::Min
  - call System.Drawing.RectangleF::get_X
  - call System.Drawing.RectangleF::get_Y
  - callvirt System.Drawing.Drawing2D.GraphicsPath::AddArc
  - call System.Drawing.RectangleF::get_Right
  - call System.Drawing.RectangleF::get_Bottom
  - callvirt System.Drawing.Drawing2D.GraphicsPath::CloseFigure

## SparkLauncher.Janela.Moldura
  - call SparkLauncher.Janela::Chanfro
  - call System.Drawing.RectangleF::get_X
  - call System.Drawing.RectangleF::get_Y
  - call System.Drawing.RectangleF::get_Width
  - call System.Drawing.RectangleF::get_Height
  - newobj System.Drawing.RectangleF::.ctor
  - call System.Drawing.Color::FromArgb
  - newobj System.Drawing.Drawing2D.LinearGradientBrush::.ctor
  - newobj System.Drawing.Pen::.ctor
  - callvirt System.Drawing.Graphics::DrawPath
  - callvirt System.Drawing.Graphics::DrawRectangle
  - callvirt System.IDisposable::Dispose

## SparkLauncher.Janela.Losango
  - newobj System.Drawing.SolidBrush::.ctor
  - newobj System.Drawing.PointF::.ctor
  - callvirt System.Drawing.Graphics::FillPolygon
  - callvirt System.IDisposable::Dispose

## SparkLauncher.Janela.Estrela
  - newobj System.Drawing.Drawing2D.GraphicsPath::.ctor
  - callvirt System.Drawing.Drawing2D.GraphicsPath::AddEllipse
  - newobj System.Drawing.Drawing2D.PathGradientBrush::.ctor
  - call System.Math::Min
  - call System.Drawing.Color::FromArgb
  - callvirt System.Drawing.Drawing2D.PathGradientBrush::set_CenterColor
  - callvirt System.Drawing.Drawing2D.PathGradientBrush::set_SurroundColors
  - callvirt System.Drawing.Graphics::FillPath
  - callvirt System.IDisposable::Dispose
  - newobj System.Drawing.PointF::.ctor
  - newobj System.Drawing.SolidBrush::.ctor
  - callvirt System.Drawing.Graphics::FillPolygon

## SparkLauncher.Janela.Engrenagem
  - newobj System.Drawing.Drawing2D.GraphicsPath::.ctor
  - newobj System.Collections.Generic.List`1::.ctor
  - call System.Math::Cos
  - call System.Math::Sin
  - newobj System.Drawing.PointF::.ctor
  - callvirt System.Collections.Generic.List`1::Add
  - callvirt System.Collections.Generic.List`1::ToArray
  - callvirt System.Drawing.Drawing2D.GraphicsPath::AddPolygon
  - callvirt System.Drawing.Drawing2D.GraphicsPath::AddEllipse
  - callvirt System.Drawing.Drawing2D.GraphicsPath::set_FillMode
  - newobj System.Drawing.SolidBrush::.ctor
  - callvirt System.Drawing.Graphics::FillPath
  - callvirt System.IDisposable::Dispose

## SparkLauncher.Janela.Icone
  - newobj System.Drawing.Pen::.ctor
  - callvirt System.Drawing.Pen::set_LineJoin
  - newobj System.Drawing.SolidBrush::.ctor
  - callvirt System.Drawing.Graphics::FillEllipse
  - newobj System.Drawing.Drawing2D.GraphicsPath::.ctor
  - callvirt System.Drawing.Drawing2D.GraphicsPath::AddArc
  - callvirt System.Drawing.Drawing2D.GraphicsPath::CloseFigure
  - callvirt System.Drawing.Graphics::FillPath
  - callvirt System.IDisposable::Dispose
  - callvirt System.Drawing.Graphics::DrawEllipse
  - call SparkLauncher.Janela::Estrela
  - call System.Math::Cos
  - call System.Math::Sin
  - callvirt System.Drawing.Graphics::DrawLine
  - call System.Drawing.Color::FromArgb
  - newobj System.Drawing.PointF::.ctor
  - callvirt System.Drawing.Drawing2D.GraphicsPath::AddLines
  - callvirt System.Drawing.Graphics::DrawPath
  - call SparkLauncher.Janela::Losango
  - call SparkLauncher.Texto::Corpo
  - call System.Drawing.StringFormat::get_GenericTypographic
  - callvirt System.Drawing.Graphics::MeasureString
  - call System.Drawing.SizeF::get_Width
  - call System.Drawing.SizeF::get_Height
  - callvirt System.Drawing.Graphics::DrawString

## SparkLauncher.Janela..cctor
  - newobj System.Drawing.RectangleF::.ctor
  - call System.Drawing.Color::FromArgb

## SparkLauncher.Janela.<.ctor>b__33_0
  - call SparkLauncher.Janela::Tique

## SparkLauncher.Janela.<.ctor>b__33_1
  - call System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start

## SparkLauncher.Janela.<>n__0
  - call System.Windows.Forms.Form::OnShown

## SparkLauncher.Janela.<Confere>b__55_0
  - callvirt System.Threading.CancellationTokenSource::get_Token
  - callvirt SparkLauncher.Atualizador::Confere

## SparkLauncher.Janela.<CarregaNoticias>b__67_2
  - newobj Noticia::.ctor
  - callvirt System.Collections.Generic.Dictionary`2::get_Item
  - call SparkLauncher.Janela::Campo

## SparkLauncher.Janela.<MontaWidgets>b__79_0
  - call System.Windows.Forms.Form::set_WindowState

## SparkLauncher.Janela.<MontaWidgets>b__79_4
  - call System.Windows.Forms.Control::Invalidate

## SparkLauncher.Janela.<MontaWidgets>b__79_5
  - call System.Windows.Forms.Control::Invalidate

## SparkLauncher.Janela.<MontaWidgets>b__79_7
  - call SparkLauncher.Janela::Tentar

## SparkLauncher.Program.Main
  - call System.Linq.Enumerable::ToList
  - call SparkLauncher.Preferencias::Carrega
  - call SparkLauncher.Args::Valor
  - callvirt System.String::StartsWith
  - call SparkLauncher.Atualizador::LimpaLauncherVelho
  - call SparkLauncher.Args::Tem
  - call SparkLauncher.Log::LigaConsole
  - call SparkLauncher.Config::get_Raiz
  - callvirt System.String::ToLowerInvariant
  - callvirt System.Object::GetHashCode
  - call System.UInt32::ToString
  - call System.String::Concat
  - newobj System.Threading.Mutex::.ctor
  - callvirt System.Threading.WaitHandle::WaitOne
  - call SparkLauncher.Log::Escreve
  - call SparkLauncher.Program::TrazJanelaAberta
  - call SparkLauncher.Config::get_VersaoTexto
  - call System.String::Join
  - call SparkLauncher.Program::Cli
  - callvirt System.Threading.Tasks.Task`1::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter`1::GetResult
  - call System.Windows.Forms.Application::EnableVisualStyles
  - call System.Windows.Forms.Application::SetCompatibleTextRenderingDefault
  - ldftn <>c::<Main>b__1_0
  - newobj System.Threading.ThreadExceptionEventHandler::.ctor
  - call System.Windows.Forms.Application::add_ThreadException
  - call System.AppDomain::get_CurrentDomain
  - ldftn <>c::<Main>b__1_1
  - newobj System.UnhandledExceptionEventHandler::.ctor
  - callvirt System.AppDomain::add_UnhandledException
  - newobj SparkLauncher.Janela::.ctor
  - call System.Windows.Forms.Application::Run

## SparkLauncher.Program.TrazJanelaAberta
  - call SparkLauncher.Config::get_Exe
  - call System.IO.Path::GetFileNameWithoutExtension
  - call System.Diagnostics.Process::GetProcessesByName
  - callvirt System.Diagnostics.Process::get_Id
  - call System.Diagnostics.Process::GetCurrentProcess
  - callvirt System.Diagnostics.Process::get_MainWindowHandle
  - call System.IntPtr::op_Equality
  - call SparkLauncher.Janela::Mostra

## SparkLauncher.Program.ConferePasta
  - call SparkLauncher.Config::get_Raiz
  - callvirt System.String::IndexOf
  - call SparkLauncher.L::T
  - newobj SparkLauncher.ErroLauncher::.ctor
  - call SparkLauncher.Config::get_Dados
  - call System.IO.Directory::CreateDirectory
  - call System.IO.Path::Combine
  - call System.IO.File::WriteAllText
  - call System.IO.File::Delete
  - call System.String::Concat

## SparkLauncher.Program.Jogar
  - call System.String::IsNullOrEmpty
  - callvirt SparkLauncher.Atualizador::Local
  - call System.IO.File::Exists
  - call SparkLauncher.L::T
  - newobj SparkLauncher.ErroLauncher::.ctor
  - call System.IO.Path::GetDirectoryName
  - call SparkLauncher.Grafico::ArgumentoParaAbrir
  - newobj System.Diagnostics.ProcessStartInfo::.ctor
  - callvirt System.Diagnostics.ProcessStartInfo::set_WorkingDirectory
  - callvirt System.Diagnostics.ProcessStartInfo::set_UseShellExecute
  - call System.Diagnostics.Process::Start
  - callvirt System.Diagnostics.Process::get_Id
  - call System.Int32::ToString
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve

## SparkLauncher.Program.Cli
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::get_Task

## SparkLauncher.Preferencias.get_Arq
  - call SparkLauncher.Config::get_Dados
  - call System.IO.Path::Combine

## SparkLauncher.Preferencias.Carrega
  - call System.Globalization.CultureInfo::get_CurrentUICulture
  - callvirt System.Globalization.CultureInfo::get_TwoLetterISOLanguageName
  - call System.String::op_Equality
  - call SparkLauncher.Preferencias::get_Arq
  - call System.IO.File::Exists
  - call System.IO.File::ReadAllLines
  - callvirt System.String::Split
  - callvirt System.String::Trim

## SparkLauncher.Preferencias.Salva
  - call SparkLauncher.Config::get_Dados
  - call System.IO.Directory::CreateDirectory
  - call SparkLauncher.Preferencias::get_Arq
  - call System.String::Concat
  - call System.IO.File::WriteAllText

## SparkLauncher.Recurso.Abre
  - call System.Reflection.Assembly::GetExecutingAssembly
  - callvirt System.Reflection.Assembly::GetManifestResourceStream

## SparkLauncher.Recurso.Imagem
  - call SparkLauncher.Recurso::Abre
  - newobj System.Drawing.Bitmap::.ctor
  - callvirt System.IDisposable::Dispose

## SparkLauncher.Recurso.Bytes
  - call SparkLauncher.Recurso::Abre
  - newobj System.IO.MemoryStream::.ctor
  - callvirt System.IO.Stream::CopyTo
  - callvirt System.IO.MemoryStream::ToArray
  - callvirt System.IDisposable::Dispose

## SparkLauncher.Texto..cctor
  - newobj System.Drawing.Text.PrivateFontCollection::.ctor
  - newobj System.Collections.Generic.Dictionary`2::.ctor
  - call System.Drawing.StringFormat::get_GenericTypographic
  - call SparkLauncher.Recurso::Bytes
  - call System.Runtime.InteropServices.Marshal::AllocCoTaskMem
  - call System.Runtime.InteropServices.Marshal::Copy
  - callvirt System.Drawing.Text.PrivateFontCollection::AddMemoryFont
  - callvirt System.Drawing.Text.FontCollection::get_Families
  - call System.Drawing.FontFamily::get_GenericSerif
  - call SparkLauncher.Texto::Existe
  - newobj System.Drawing.FontFamily::.ctor

## SparkLauncher.Texto.Existe
  - newobj System.Drawing.FontFamily::.ctor
  - callvirt System.IDisposable::Dispose

## SparkLauncher.Texto.Pega
  - callvirt System.Drawing.FontFamily::get_Name
  - call System.Single::ToString
  - callvirt System.Object::ToString
  - call System.String::Concat
  - callvirt System.Collections.Generic.Dictionary`2::TryGetValue
  - callvirt System.Drawing.FontFamily::IsStyleAvailable
  - newobj System.Drawing.Font::.ctor
  - callvirt System.Collections.Generic.Dictionary`2::set_Item

## SparkLauncher.Texto.Cinzel
  - call SparkLauncher.Texto::Pega

## SparkLauncher.Texto.Corpo
  - call SparkLauncher.Texto::Pega

## SparkLauncher.Texto.Largura
  - call System.String::IsNullOrEmpty
  - callvirt System.String::get_Chars
  - call SparkLauncher.Texto::Avanco
  - callvirt System.String::get_Length

## SparkLauncher.Texto.Avanco
  - callvirt System.Drawing.Font::get_Name
  - callvirt System.Drawing.Font::get_Size
  - call System.Single::ToString
  - callvirt System.Drawing.Font::get_Style
  - callvirt System.Object::ToString
  - call System.Char::ToString
  - call System.String::Concat
  - callvirt System.Collections.Generic.Dictionary`2::TryGetValue
  - callvirt System.Drawing.Graphics::MeasureString
  - call System.Drawing.SizeF::get_Width
  - callvirt System.Collections.Generic.Dictionary`2::set_Item

## SparkLauncher.Texto.Espacado
  - call System.String::IsNullOrEmpty
  - newobj System.Drawing.SolidBrush::.ctor
  - callvirt System.Drawing.Graphics::DrawString
  - callvirt System.String::get_Chars
  - call System.Char::ToString
  - call SparkLauncher.Texto::Avanco
  - callvirt System.String::get_Length
  - callvirt System.IDisposable::Dispose

## SparkLauncher.Texto.Corta
  - call SparkLauncher.Texto::Largura
  - callvirt System.String::get_Length
  - callvirt System.String::Substring
  - call System.String::Concat
  - call System.Array::Empty
  - callvirt System.String::TrimEnd

## SparkLauncher.Texto.Simples
  - newobj System.Drawing.SolidBrush::.ctor
  - callvirt System.Drawing.Graphics::DrawString
  - callvirt System.IDisposable::Dispose

## SparkLauncher.Texto.Quebra
  - newobj System.Drawing.SolidBrush::.ctor
  - call System.Drawing.StringFormat::get_GenericTypographic
  - newobj System.Drawing.StringFormat::.ctor
  - callvirt System.Drawing.StringFormat::set_Trimming
  - callvirt System.Drawing.StringFormat::set_FormatFlags
  - call System.Drawing.RectangleF::get_Height
  - callvirt System.Drawing.Font::GetHeight
  - call System.Math::Min
  - call System.Drawing.RectangleF::set_Height
  - callvirt System.Drawing.Graphics::DrawString
  - callvirt System.IDisposable::Dispose

## SparkLauncher.Texto.Centro
  - newobj System.Drawing.SolidBrush::.ctor
  - newobj System.Drawing.StringFormat::.ctor
  - callvirt System.Drawing.StringFormat::set_Alignment
  - callvirt System.Drawing.StringFormat::set_LineAlignment
  - callvirt System.Drawing.StringFormat::set_Trimming
  - callvirt System.Drawing.Graphics::DrawString
  - callvirt System.IDisposable::Dispose

## <>c..cctor
  - newobj <>c::.ctor

## <>c..ctor
  - call System.Object::.ctor

## <>c.<CaminhoSeguro>b__26_0
  - call System.String::op_Equality
  - callvirt System.String::get_Length

## <>c.<Executa>b__37_6
  - callvirt System.Threading.Tasks.Task::get_IsFaulted

## <>c.<Executa>b__37_7
  - callvirt System.Threading.Tasks.Task::get_Exception
  - callvirt System.Exception::get_InnerException

## <>c.<LimpaLauncherVelho>b__47_0
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## <>c__DisplayClass31_0..ctor
  - call System.Object::.ctor

## <>c__DisplayClass31_0.<MigraPastaDoJogo>b__0
  - call System.String::Concat
  - callvirt System.String::StartsWith

## <>c__DisplayClass37_0..ctor
  - call System.Object::.ctor

## <>c__DisplayClass37_0.<Executa>g__Lote|2
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## <>c__DisplayClass37_1..ctor
  - call System.Object::.ctor

## <>c__DisplayClass37_1.<Executa>g__Trabalhador|4
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## <>c__DisplayClass37_1.<Executa>b__5
  - ldftn <>c__DisplayClass37_1::<Executa>g__Trabalhador|4
  - newobj System.Func`1::.ctor
  - call System.Threading.Tasks.Task::Run

## <>c__DisplayClass37_2..ctor
  - call System.Object::.ctor

## <>c__DisplayClass37_2.<Executa>b__9
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## <>c__DisplayClass40_0..ctor
  - call System.Object::.ctor

## <>c__DisplayClass40_0.<BaixaPara>b__0
  - callvirt System.Net.Http.HttpResponseMessage::Dispose

## <AtualizaLauncher>d__46.MoveNext
  - call SparkLauncher.Config::get_Exe
  - call System.String::Concat
  - call SparkLauncher.L::T
  - call SparkLauncher.Config::get_VersaoTexto
  - call SparkLauncher.Log::Escreve
  - call System.IO.File::Exists
  - call System.IO.File::Delete
  - call System.Net.Http.HttpMethod::get_Head
  - newobj System.Net.Http.HttpRequestMessage::.ctor
  - callvirt System.Net.Http.HttpMessageInvoker::SendAsync
  - callvirt System.Threading.Tasks.Task`1::ConfigureAwait
  - call System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::GetAwaiter
  - call ConfiguredTaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call ConfiguredTaskAwaiter::GetResult
  - callvirt System.Net.Http.HttpResponseMessage::get_IsSuccessStatusCode
  - callvirt System.Net.Http.HttpResponseMessage::get_Content
  - callvirt System.Net.Http.HttpContent::get_Headers
  - callvirt System.Net.Http.Headers.HttpContentHeaders::get_ContentLength
  - call System.Nullable`1::get_HasValue
  - callvirt System.Net.Http.HttpResponseMessage::get_StatusCode
  - call System.Int32::ToString
  - newobj SparkLauncher.ErroLauncher::.ctor
  - call System.Nullable`1::get_Value
  - callvirt System.IDisposable::Dispose
  - call System.IO.Path::GetFileName
  - call SparkLauncher.Atualizador::BaixaPara
  - callvirt System.Threading.Tasks.Task::ConfigureAwait
  - call System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter
  - call System.DateTime::get_Now
  - call System.DateTime::get_Ticks
  - call System.Int64::ToString
  - call System.IO.File::Move
  - call SparkLauncher.Args::Linha
  - newobj System.Diagnostics.ProcessStartInfo::.ctor
  - call System.IO.Path::GetDirectoryName
  - callvirt System.Diagnostics.ProcessStartInfo::set_WorkingDirectory
  - callvirt System.Diagnostics.ProcessStartInfo::set_UseShellExecute
  - call System.Diagnostics.Process::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <AtualizaLauncher>d__46.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <BaixaPara>d__40.MoveNext
  - call System.String::Concat
  - call System.IO.Path::GetDirectoryName
  - call System.IO.Directory::CreateDirectory
  - call System.Threading.CancellationToken::ThrowIfCancellationRequested
  - call System.IO.File::Exists
  - newobj System.IO.FileInfo::.ctor
  - call System.IO.FileInfo::get_Length
  - call System.IO.File::Delete
  - newobj System.Security.Cryptography.SHA256Cng::.ctor
  - call SparkLauncher.L::T
  - call System.Int64::ToString
  - call SparkLauncher.Formata::Bytes
  - call SparkLauncher.Log::Escreve
  - newobj System.IO.FileStream::.ctor
  - callvirt System.Security.Cryptography.HashAlgorithm::TransformBlock
  - call System.Math::Min
  - callvirt System.IO.Stream::Read
  - callvirt System.IDisposable::Dispose
  - call System.Threading.Interlocked::Add
  - newobj <>c__DisplayClass40_0::.ctor
  - call System.Net.Http.HttpMethod::get_Get
  - newobj System.Net.Http.HttpRequestMessage::.ctor
  - callvirt System.Net.Http.HttpRequestMessage::get_Headers
  - newobj System.Nullable`1::.ctor
  - newobj System.Net.Http.Headers.RangeHeaderValue::.ctor
  - callvirt System.Net.Http.Headers.HttpRequestHeaders::set_Range
  - call System.Threading.CancellationTokenSource::CreateLinkedTokenSource
  - callvirt System.Threading.CancellationTokenSource::CancelAfter
  - callvirt System.Threading.CancellationTokenSource::get_Token
  - callvirt System.Net.Http.HttpClient::SendAsync
  - callvirt System.Threading.Tasks.Task`1::ConfigureAwait
  - call System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::GetAwaiter
  - call ConfiguredTaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call ConfiguredTaskAwaiter::GetResult
  - call System.Threading.CancellationToken::get_IsCancellationRequested
  - newobj System.TimeoutException::.ctor
  - ldftn <>c__DisplayClass40_0::<BaixaPara>b__0
  - newobj System.Action::.ctor
  - call System.Threading.CancellationToken::Register
  - callvirt System.Net.Http.HttpResponseMessage::get_StatusCode
  - newobj System.IO.IOException::.ctor
  - newobj SparkLauncher.ErroLauncher::.ctor
  - callvirt System.Net.Http.HttpResponseMessage::get_IsSuccessStatusCode
  - call System.Int32::ToString
  - newobj System.Net.Http.HttpRequestException::.ctor
  - callvirt System.Net.Http.HttpResponseMessage::get_Content
  - callvirt System.Net.Http.HttpContent::get_Headers
  - callvirt System.Net.Http.Headers.HttpContentHeaders::get_ContentRange
  - call System.Net.Http.Headers.ContentRangeHeaderValue::get_From
  - call System.Nullable`1::GetValueOrDefault
  - call System.Nullable`1::get_HasValue
  - callvirt System.Security.Cryptography.HashAlgorithm::Initialize
  - callvirt System.Net.Http.HttpContent::ReadAsStreamAsync
  - callvirt System.IO.Stream::ReadAsync
  - call System.Threading.Tasks.Task::Delay
  - call System.Threading.Tasks.Task::WhenAny
  - callvirt System.Net.Http.HttpResponseMessage::Dispose
  - callvirt System.IO.Stream::Write
  - callvirt System.IO.FileStream::Flush
  - callvirt System.Security.Cryptography.HashAlgorithm::TransformFinalBlock
  - callvirt System.Security.Cryptography.HashAlgorithm::get_Hash
  - call SparkLauncher.Atualizador::Hex
  - call System.String::op_Inequality
  - call SparkLauncher.Nativo::Troca
  - call SparkLauncher.Atualizador::Anota
  - call System.Threading.Interlocked::Increment
  - call SparkLauncher.Nativo::DiscoCheio
  - callvirt System.Object::ToString
  - call System.IO.Path::GetFileName
  - callvirt System.Exception::get_Message
  - call System.TimeSpan::FromSeconds
  - callvirt System.Threading.Tasks.Task::ConfigureAwait
  - call System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <BaixaPara>d__40.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <BaixaTexto>d__21.MoveNext
  - call System.Threading.CancellationTokenSource::CreateLinkedTokenSource
  - call System.TimeSpan::FromSeconds
  - callvirt System.Threading.CancellationTokenSource::CancelAfter
  - call System.Net.Http.HttpMethod::get_Get
  - newobj System.Net.Http.HttpRequestMessage::.ctor
  - callvirt System.Net.Http.HttpRequestMessage::get_Headers
  - newobj System.Net.Http.Headers.CacheControlHeaderValue::.ctor
  - callvirt System.Net.Http.Headers.CacheControlHeaderValue::set_NoCache
  - callvirt System.Net.Http.Headers.HttpRequestHeaders::set_CacheControl
  - callvirt System.Threading.CancellationTokenSource::get_Token
  - callvirt System.Net.Http.HttpMessageInvoker::SendAsync
  - callvirt System.Threading.Tasks.Task`1::ConfigureAwait
  - call System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::GetAwaiter
  - call ConfiguredTaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::AwaitUnsafeOnCompleted
  - call ConfiguredTaskAwaiter::GetResult
  - callvirt System.Net.Http.HttpResponseMessage::get_IsSuccessStatusCode
  - callvirt System.Net.Http.HttpResponseMessage::get_StatusCode
  - call System.Int32::ToString
  - call System.String::Concat
  - newobj System.Net.Http.HttpRequestException::.ctor
  - callvirt System.Net.Http.HttpResponseMessage::get_Content
  - callvirt System.Net.Http.HttpContent::ReadAsByteArrayAsync
  - call System.Text.Encoding::get_UTF8
  - callvirt System.Text.Encoding::GetString
  - callvirt System.IDisposable::Dispose
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::SetResult

## <BaixaTexto>d__21.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::SetStateMachine

## <BuscaManifesto>d__23.MoveNext
  - call System.String::IsNullOrEmpty
  - call SparkLauncher.Atualizador::Json
  - call SparkLauncher.Atualizador::SemCache
  - call SparkLauncher.Atualizador::BaixaTexto
  - callvirt System.Threading.Tasks.Task`1::ConfigureAwait
  - call System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::GetAwaiter
  - call ConfiguredTaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::AwaitUnsafeOnCompleted
  - call ConfiguredTaskAwaiter::GetResult
  - callvirt System.Web.Script.Serialization.JavaScriptSerializer::DeserializeObject
  - callvirt System.Collections.Generic.Dictionary`2::get_Item
  - call System.Threading.CancellationToken::get_IsCancellationRequested
  - callvirt System.Exception::get_Message
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve
  - callvirt System.Object::ToString
  - call SparkLauncher.L::T
  - newobj SparkLauncher.ErroLauncher::.ctor
  - call SparkLauncher.Atualizador::LeManifesto
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::SetResult

## <BuscaManifesto>d__23.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::SetStateMachine

## <Executa>d__37.MoveNext
  - newobj <>c__DisplayClass37_0::.ctor
  - call SparkLauncher.Atualizador::ConfereEspaco
  - call SparkLauncher.L::T
  - callvirt SparkLauncher.Plano::get_Bytes
  - callvirt System.Collections.Generic.List`1::get_Count
  - call System.Int32::ToString
  - call SparkLauncher.Formata::Bytes
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve
  - ldftn <>c::<Executa>b__37_0
  - newobj System.Func`2::.ctor
  - call System.Linq.Enumerable::Where
  - ldftn <>c::<Executa>b__37_1
  - call System.Linq.Enumerable::OrderBy
  - call System.Linq.Enumerable::ToList
  - call System.Diagnostics.Stopwatch::StartNew
  - newobj <>c__DisplayClass37_2::.ctor
  - call System.Threading.CancellationTokenSource::CreateLinkedTokenSource
  - ldftn <>c__DisplayClass37_2::<Executa>b__9
  - newobj System.Func`1::.ctor
  - call System.Threading.Tasks.Task::Run
  - ldftn <>c::<Executa>b__37_10
  - callvirt <>c__DisplayClass37_0::<Executa>g__Lote|2
  - callvirt System.Threading.Tasks.Task::ConfigureAwait
  - call System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter
  - call ConfiguredTaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call ConfiguredTaskAwaiter::GetResult
  - ldftn <>c::<Executa>b__37_11
  - callvirt System.Threading.CancellationTokenSource::Cancel
  - call System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture
  - callvirt System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw
  - callvirt System.IDisposable::Dispose
  - callvirt System.Collections.Generic.List`1::GetEnumerator
  - call Enumerator::get_Current
  - call SparkLauncher.Atualizador::Local
  - call System.IO.File::Delete
  - newobj SparkLauncher.ErroLauncher::.ctor
  - call System.Threading.Monitor::Enter
  - callvirt System.Collections.Generic.Dictionary`2::Remove
  - call System.Threading.Monitor::Exit
  - call Enumerator::MoveNext
  - call SparkLauncher.Atualizador::SalvaCache
  - call SparkLauncher.Atualizador::GravaVersaoInstalada
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <Executa>d__37.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## Noticia..ctor
  - call System.Object::.ctor

## Jogador..ctor
  - call System.Object::.ctor

## Widget..ctor
  - ldftn <>c::<.ctor>b__6_0
  - newobj System.Func`1::.ctor
  - ldftn <>c::<.ctor>b__6_1
  - call System.Object::.ctor

## CoresMenu.get_MenuItemBorder
  - call System.Drawing.Color::FromArgb

## CoresMenu.get_SeparatorDark
  - call System.Drawing.Color::FromArgb

## CoresMenu.get_CheckBackground
  - call System.Drawing.Color::FromArgb

## CoresMenu.get_CheckSelectedBackground
  - call System.Drawing.Color::FromArgb

## CoresMenu.get_CheckPressedBackground
  - call System.Drawing.Color::FromArgb

## CoresMenu..ctor
  - call System.Windows.Forms.ProfessionalColorTable::.ctor

## CoresMenu..cctor
  - call System.Drawing.Color::FromArgb

## <<-ctor>b__33_1>d.MoveNext
  - call SparkLauncher.Janela::AtualizaSite
  - callvirt System.Threading.Tasks.Task::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter::GetResult
  - call System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult

## <<-ctor>b__33_1>d.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine

## <>c.<AtualizaSite>b__66_2
  - newobj Jogador::.ctor
  - callvirt System.Collections.Generic.Dictionary`2::get_Item
  - call System.Convert::ToString
  - callvirt System.Collections.Generic.Dictionary`2::TryGetValue
  - call System.Globalization.CultureInfo::get_InvariantCulture
  - call System.Convert::ToInt32

## <>c.<CarregaNoticias>b__67_0
  - callvirt System.Collections.Generic.Dictionary`2::get_Item
  - call System.String::op_Equality

## <>c.<CarregaNoticias>b__67_1
  - callvirt System.Collections.Generic.Dictionary`2::get_Item

## <>c.<MontaWidgets>b__79_1
  - call SparkLauncher.Janela::Abre

## <>c.<AbreMenu>b__82_1
  - call SparkLauncher.Config::get_Raiz
  - call SparkLauncher.Janela::Abre

## <>c.<AbreMenu>b__82_2
  - call SparkLauncher.Janela::Abre

## <>c.<AbreMenu>b__82_3
  - call SparkLauncher.Janela::Abre

## <>c.<AbreMenu>b__82_4
  - call SparkLauncher.Janela::Abre

## <>c.<AbreMenu>b__82_5
  - call SparkLauncher.Janela::Abre

## <>c.<AbreMenu>b__82_8
  - call SparkLauncher.Preferencias::Salva

## <>c__DisplayClass58_0..ctor
  - call System.Object::.ctor

## <>c__DisplayClass58_0.<Trabalha>b__1
  - callvirt System.Threading.CancellationTokenSource::get_Token
  - callvirt SparkLauncher.Atualizador::Confere

## <>c__DisplayClass58_0.<Trabalha>b__0
  - callvirt System.Threading.CancellationTokenSource::get_Token
  - callvirt SparkLauncher.Atualizador::Executa

## <>c__DisplayClass58_0.<Trabalha>b__2
  - callvirt System.Threading.CancellationTokenSource::get_Token
  - callvirt SparkLauncher.Atualizador::Confere

## <>c__DisplayClass59_0..ctor
  - call System.Object::.ctor

## <>c__DisplayClass59_0.<ConfirmaPasta>b__0
  - callvirt System.String::Equals
  - callvirt System.String::StartsWith

## <>c__DisplayClass61_0..ctor
  - call System.Object::.ctor

## <>c__DisplayClass61_0.<VigiaApi>b__0
  - callvirt System.Diagnostics.Process::WaitForExit
  - ldftn <>c__DisplayClass61_0::<VigiaApi>b__1
  - newobj System.Action::.ctor
  - call System.Windows.Forms.Control::BeginInvoke

## <>c__DisplayClass61_0.<VigiaApi>b__1
  - call SparkLauncher.Grafico::ConfereFalha
  - call System.Windows.Forms.Form::get_WindowState
  - call System.Windows.Forms.Form::set_WindowState
  - callvirt System.Windows.Forms.Control::get_Text
  - call System.Windows.Forms.MessageBox::Show
  - call System.Windows.Forms.Control::Invalidate

## <>c__DisplayClass66_0..ctor
  - call System.Object::.ctor

## <>c__DisplayClass66_0.<AtualizaSite>b__0
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## <>c__DisplayClass66_0.<AtualizaSite>b__1
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## <>c__DisplayClass79_0..ctor
  - call System.Object::.ctor

## <>c__DisplayClass79_0.<MontaWidgets>b__2
  - callvirt System.Collections.Generic.List`1::get_Count

## <>c__DisplayClass79_0.<MontaWidgets>b__3
  - callvirt System.Collections.Generic.List`1::get_Item
  - call System.String::Concat
  - call SparkLauncher.Janela::Abre

## <>c__DisplayClass82_0..ctor
  - call System.Object::.ctor

## <>c__DisplayClass82_0.<AbreMenu>b__0
  - call SparkLauncher.Janela::Trabalha

## <>c__DisplayClass82_0.<AbreMenu>b__6
  - call SparkLauncher.Janela::TrocaIdioma

## <>c__DisplayClass82_0.<AbreMenu>b__7
  - call SparkLauncher.Janela::TrocaIdioma

## <>c__DisplayClass82_0.<AbreMenu>b__9
  - ldftn <>c__DisplayClass82_0::<AbreMenu>b__11
  - newobj System.Action::.ctor
  - call System.Windows.Forms.Control::BeginInvoke

## <>c__DisplayClass82_0.<AbreMenu>b__11
  - callvirt System.ComponentModel.Component::Dispose

## <>c__DisplayClass82_1..ctor
  - call System.Object::.ctor

## <>c__DisplayClass82_1.<AbreMenu>b__10
  - call SparkLauncher.Grafico::Grava

## <>c__DisplayClass83_0..ctor
  - call System.Object::.ctor

## <>c__DisplayClass83_0.<Item>b__0
  - callvirt System.Action::Invoke

## <AtualizaSite>d__66.MoveNext
  - newobj <>c__DisplayClass66_0::.ctor
  - callvirt System.Threading.CancellationTokenSource::get_Token
  - newobj System.Collections.Generic.List`1::.ctor
  - ldftn <>c__DisplayClass66_0::<AtualizaSite>b__0
  - newobj System.Func`1::.ctor
  - call System.Threading.Tasks.Task::Run
  - callvirt System.Collections.Generic.List`1::Add
  - ldftn <>c__DisplayClass66_0::<AtualizaSite>b__1
  - ldftn SparkLauncher.Janela::CarregaNoticias
  - call System.Threading.Tasks.Task::WhenAll
  - callvirt System.Threading.Tasks.Task::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter::GetResult
  - call System.Windows.Forms.Control::get_IsDisposed
  - call System.Windows.Forms.Control::Invalidate
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <AtualizaSite>d__66.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <CarregaNoticias>d__67.MoveNext
  - call SparkLauncher.Config::get_Dados
  - call System.IO.Path::Combine
  - callvirt System.Threading.CancellationTokenSource::get_Token
  - call SparkLauncher.Atualizador::BaixaTexto
  - callvirt System.Threading.Tasks.Task`1::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter`1::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter`1::GetResult
  - call System.IO.File::WriteAllText
  - callvirt System.Exception::get_Message
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve
  - call System.IO.File::Exists
  - call System.IO.File::ReadAllText
  - newobj System.Collections.Generic.List`1::.ctor
  - call SparkLauncher.Atualizador::Json
  - callvirt System.Web.Script.Serialization.JavaScriptSerializer::DeserializeObject
  - call System.Linq.Enumerable::Cast
  - ldftn <>c::<CarregaNoticias>b__67_0
  - newobj System.Func`2::.ctor
  - call System.Linq.Enumerable::Where
  - ldftn <>c::<CarregaNoticias>b__67_1
  - call System.StringComparer::get_Ordinal
  - call System.Linq.Enumerable::OrderByDescending
  - call System.Linq.Enumerable::Take
  - ldftn SparkLauncher.Janela::<CarregaNoticias>b__67_2
  - call System.Linq.Enumerable::Select
  - call System.Linq.Enumerable::ToList
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <CarregaNoticias>d__67.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <Confere>d__55.MoveNext
  - call System.Windows.Forms.Control::Invalidate
  - call SparkLauncher.Program::ConferePasta
  - call SparkLauncher.Config::get_Raiz
  - newobj SparkLauncher.Atualizador::.ctor
  - call SparkLauncher.L::T
  - call SparkLauncher.Args::Valor
  - callvirt System.Threading.CancellationTokenSource::get_Token
  - call SparkLauncher.Atualizador::BuscaManifesto
  - callvirt System.Threading.Tasks.Task`1::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter`1::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter`1::GetResult
  - call SparkLauncher.Atualizador::LauncherNovo
  - callvirt SparkLauncher.Atualizador::AtualizaLauncher
  - callvirt System.Threading.Tasks.Task::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter::GetResult
  - call System.Windows.Forms.Form::Close
  - ldftn SparkLauncher.Janela::<Confere>b__55_0
  - newobj System.Func`1::.ctor
  - call System.Threading.Tasks.Task::Run
  - call SparkLauncher.Janela::Define
  - call SparkLauncher.Janela::Falhou
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <Confere>d__55.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <OnShown>d__53.MoveNext
  - call SparkLauncher.Janela::<>n__0
  - call SparkLauncher.Grafico::PastaDoJogo
  - call SparkLauncher.Grafico::ConfereFalha
  - call SparkLauncher.Args::Tem
  - call SparkLauncher.Args::Valor
  - callvirt System.Windows.Forms.Control::get_Text
  - call System.Windows.Forms.MessageBox::Show
  - callvirt System.Windows.Forms.Timer::Start
  - call SparkLauncher.Janela::AtualizaSite
  - call SparkLauncher.Janela::Confere
  - callvirt System.Threading.Tasks.Task::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter::GetResult
  - call SparkLauncher.Janela::Trabalha
  - call System.Globalization.CultureInfo::get_InvariantCulture
  - call System.Double::TryParse
  - call System.TimeSpan::FromSeconds
  - call System.Threading.Tasks.Task::Delay
  - call SparkLauncher.Janela::SalvaPrint
  - call System.Windows.Forms.Form::Close
  - call System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult

## <OnShown>d__53.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine

## <Tentar>d__63.MoveNext
  - call SparkLauncher.Janela::Confere
  - callvirt System.Threading.Tasks.Task::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter::GetResult
  - call SparkLauncher.Janela::Trabalha
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <Tentar>d__63.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <Trabalha>d__58.MoveNext
  - newobj <>c__DisplayClass58_0::.ctor
  - call SparkLauncher.Janela::Confere
  - callvirt System.Threading.Tasks.Task::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter::GetResult
  - call SparkLauncher.Janela::ConfirmaPasta
  - callvirt System.Collections.Generic.Queue`1::Clear
  - callvirt System.Diagnostics.Stopwatch::get_Elapsed
  - call System.TimeSpan::get_TotalSeconds
  - call System.Windows.Forms.Control::Invalidate
  - ldftn <>c__DisplayClass58_0::<Trabalha>b__1
  - newobj System.Func`1::.ctor
  - call System.Threading.Tasks.Task::Run
  - callvirt System.Threading.Tasks.Task`1::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter`1::get_IsCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter`1::GetResult
  - callvirt SparkLauncher.Plano::get_Vazio
  - ldftn <>c__DisplayClass58_0::<Trabalha>b__0
  - ldftn <>c__DisplayClass58_0::<Trabalha>b__2
  - call SparkLauncher.Janela::Define
  - call SparkLauncher.Janela::Falhou
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <Trabalha>d__58.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <>c.<Main>b__1_0
  - callvirt System.Threading.ThreadExceptionEventArgs::get_Exception
  - callvirt System.Object::ToString
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve

## <>c.<Main>b__1_1
  - callvirt System.UnhandledExceptionEventArgs::get_ExceptionObject
  - callvirt System.Object::ToString
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve

## <>c__DisplayClass5_0..ctor
  - call System.Object::.ctor

## <>c__DisplayClass5_0.<Cli>b__0
  - callvirt SparkLauncher.Atualizador::Confere

## <>c__DisplayClass5_0.<Cli>b__2
  - callvirt SparkLauncher.Atualizador::Confere

## <>c__DisplayClass5_1..ctor
  - call System.Object::.ctor

## <>c__DisplayClass5_1.<Cli>b__1
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task

## <Cli>d__5.MoveNext
  - newobj <>c__DisplayClass5_0::.ctor
  - call System.Threading.CancellationToken::get_None
  - call System.Diagnostics.Stopwatch::StartNew
  - call SparkLauncher.Program::ConferePasta
  - call SparkLauncher.Config::get_Raiz
  - newobj SparkLauncher.Atualizador::.ctor
  - call SparkLauncher.Args::Valor
  - call SparkLauncher.Atualizador::BuscaManifesto
  - callvirt System.Threading.Tasks.Task`1::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter`1::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::AwaitUnsafeOnCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter`1::GetResult
  - callvirt System.Collections.Generic.List`1::get_Count
  - call System.Int32::ToString
  - callvirt SparkLauncher.Manifesto::get_TotalBytes
  - call SparkLauncher.Formata::Bytes
  - callvirt SparkLauncher.Atualizador::VersaoInstalada
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve
  - call SparkLauncher.Atualizador::LauncherNovo
  - callvirt SparkLauncher.Atualizador::AtualizaLauncher
  - callvirt System.Threading.Tasks.Task::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter::GetResult
  - call SparkLauncher.Args::Tem
  - call SparkLauncher.Program::Jogar
  - callvirt System.Diagnostics.Process::get_Id
  - call System.Console::WriteLine
  - ldftn <>c__DisplayClass5_0::<Cli>b__0
  - newobj System.Func`1::.ctor
  - call System.Threading.Tasks.Task::Run
  - callvirt System.Diagnostics.Stopwatch::get_Elapsed
  - call System.TimeSpan::get_TotalSeconds
  - call System.Globalization.CultureInfo::get_InvariantCulture
  - call System.Double::ToString
  - callvirt SparkLauncher.Plano::get_Bytes
  - call System.Linq.Enumerable::Take
  - callvirt System.Collections.Generic.IEnumerable`1::GetEnumerator
  - callvirt System.Collections.Generic.IEnumerator`1::get_Current
  - callvirt System.Collections.IEnumerator::MoveNext
  - callvirt System.IDisposable::Dispose
  - callvirt SparkLauncher.Plano::get_Vazio
  - newobj <>c__DisplayClass5_1::.ctor
  - newobj System.Threading.CancellationTokenSource::.ctor
  - ldftn <>c__DisplayClass5_1::<Cli>b__1
  - callvirt SparkLauncher.Atualizador::Executa
  - callvirt System.Threading.CancellationTokenSource::Cancel
  - call System.Math::Max
  - call System.String::Format
  - ldftn <>c__DisplayClass5_0::<Cli>b__2
  - callvirt System.Exception::get_Message
  - callvirt System.Exception::get_InnerException
  - callvirt System.Object::ToString
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::SetResult

## <Cli>d__5.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::SetStateMachine

## <<LimpaLauncherVelho>b__47_0>d.MoveNext
  - call SparkLauncher.Config::get_Raiz
  - call SparkLauncher.Config::get_Exe
  - call System.IO.Path::GetFileName
  - call System.String::Concat
  - call System.IO.Directory::GetFiles
  - call System.IO.File::Delete
  - call System.Threading.Tasks.Task::Delay
  - callvirt System.Threading.Tasks.Task::ConfigureAwait
  - call System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter
  - call ConfiguredTaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call ConfiguredTaskAwaiter::GetResult
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <<LimpaLauncherVelho>b__47_0>d.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <<Executa>g__Lote|2>d.MoveNext
  - newobj <>c__DisplayClass37_1::.ctor
  - ldftn <>c::<Executa>b__37_3
  - newobj System.Func`2::.ctor
  - call System.StringComparer::get_Ordinal
  - call System.Linq.Enumerable::OrderBy
  - newobj System.Collections.Concurrent.ConcurrentQueue`1::.ctor
  - callvirt System.Collections.Concurrent.ConcurrentQueue`1::get_IsEmpty
  - call System.Threading.CancellationTokenSource::CreateLinkedTokenSource
  - call System.Linq.Enumerable::Range
  - ldftn <>c__DisplayClass37_1::<Executa>b__5
  - call System.Linq.Enumerable::Select
  - call System.Linq.Enumerable::ToList
  - call System.Threading.Tasks.Task::WhenAll
  - callvirt System.Threading.Tasks.Task::ConfigureAwait
  - call System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter
  - call ConfiguredTaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call ConfiguredTaskAwaiter::GetResult
  - callvirt System.Threading.CancellationTokenSource::Cancel
  - ldftn <>c::<Executa>b__37_6
  - call System.Linq.Enumerable::Where
  - ldftn <>c::<Executa>b__37_7
  - ldftn <>c::<Executa>b__37_8
  - call System.Linq.Enumerable::FirstOrDefault
  - call SparkLauncher.Atualizador::SalvaCache
  - callvirt System.IDisposable::Dispose
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <<Executa>g__Lote|2>d.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <<Executa>g__Trabalhador|4>d.MoveNext
  - callvirt System.Collections.Concurrent.ConcurrentQueue`1::TryDequeue
  - callvirt System.Threading.CancellationTokenSource::get_Token
  - call SparkLauncher.Atualizador::Baixa
  - callvirt System.Threading.Tasks.Task::ConfigureAwait
  - call System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter
  - call ConfiguredTaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call ConfiguredTaskAwaiter::GetResult
  - callvirt System.Diagnostics.Stopwatch::get_Elapsed
  - call System.TimeSpan::get_TotalSeconds
  - callvirt System.Diagnostics.Stopwatch::Restart
  - call SparkLauncher.Atualizador::SalvaCache
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <<Executa>g__Trabalhador|4>d.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <<Executa>b__9>d.MoveNext
  - callvirt System.Collections.Generic.List`1::GetEnumerator
  - call Enumerator::get_Current
  - callvirt System.Threading.CancellationTokenSource::get_Token
  - call SparkLauncher.Atualizador::Baixa
  - callvirt System.Threading.Tasks.Task::ConfigureAwait
  - call System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter
  - call ConfiguredTaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call ConfiguredTaskAwaiter::GetResult
  - call SparkLauncher.Atualizador::SalvaCache
  - call Enumerator::MoveNext
  - callvirt System.IDisposable::Dispose
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <<Executa>b__9>d.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <<AtualizaSite>b__0>d.MoveNext
  - call SparkLauncher.Atualizador::Json
  - call SparkLauncher.Atualizador::BaixaTexto
  - callvirt System.Threading.Tasks.Task`1::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter`1::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter`1::GetResult
  - callvirt System.Web.Script.Serialization.JavaScriptSerializer::DeserializeObject
  - callvirt System.Collections.Generic.Dictionary`2::TryGetValue
  - newobj System.Nullable`1::.ctor
  - call System.Globalization.CultureInfo::get_InvariantCulture
  - call System.Convert::ToInt32
  - callvirt System.Exception::get_Message
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <<AtualizaSite>b__0>d.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <<AtualizaSite>b__1>d.MoveNext
  - call SparkLauncher.Atualizador::Json
  - call SparkLauncher.Atualizador::BaixaTexto
  - callvirt System.Threading.Tasks.Task`1::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter`1::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter`1::GetResult
  - callvirt System.Web.Script.Serialization.JavaScriptSerializer::DeserializeObject
  - newobj System.Collections.Generic.Dictionary`2::.ctor
  - callvirt System.Collections.Generic.Dictionary`2::TryGetValue
  - newobj System.Collections.Generic.List`1::.ctor
  - call System.Linq.Enumerable::Cast
  - call System.Linq.Enumerable::Take
  - ldftn <>c::<AtualizaSite>b__66_2
  - newobj System.Func`2::.ctor
  - call System.Linq.Enumerable::Select
  - call System.Linq.Enumerable::ToList
  - callvirt System.Collections.Generic.Dictionary`2::set_Item
  - callvirt System.Exception::get_Message
  - call System.String::Concat
  - call SparkLauncher.Log::Escreve
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <<AtualizaSite>b__1>d.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine

## <<Cli>b__1>d.MoveNext
  - callvirt System.Threading.CancellationTokenSource::get_Token
  - call System.Threading.Tasks.Task::Delay
  - callvirt System.Threading.Tasks.Task::GetAwaiter
  - call System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
  - call System.Runtime.CompilerServices.TaskAwaiter::GetResult
  - callvirt System.Diagnostics.Stopwatch::get_Elapsed
  - call System.TimeSpan::get_TotalSeconds
  - call System.Math::Max
  - call System.Globalization.CultureInfo::get_InvariantCulture
  - call SparkLauncher.Formata::Bytes
  - call System.String::Format
  - call SparkLauncher.Log::Escreve
  - callvirt System.Threading.CancellationTokenSource::get_IsCancellationRequested
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult

## <<Cli>b__1>d.SetStateMachine
  - call System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine