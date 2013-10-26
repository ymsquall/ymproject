using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using cocos.picture2plist.mvvm.Models;
using cocos.picture2plist.mvvm.ViewModels;

namespace cocos.picture2plist.mvvm.ViewModels
{
    class ExplorerViewModel : ToolViewModel
    {
        public ExplorerViewModel() : base("资源列表")
        {
            this.Model = new CompositeNode { Name = "Item" };
            this.AddRecursive(this.Model, 4, 4);
            this.Title = "TreeListBox (N=" + this.Count + ")";
            this.RootModel = new NodeViewModel(this.Model, null);
        }
        private CompositeNode Model { get; set; }
        public NodeViewModel RootModel { get; set; }

        public IEnumerable Root
        {
            get
            {
                yield return RootModel;
            }
        }

        public IEnumerable Children
        {
            get
            {
                return RootModel.Children;
            }
        }

        public string Title { get; set; }

        public int Count { get; set; }

        private void AddRecursive(CompositeNode model, int n, int levels)
        {
            for (int i = 0; i < n; i++)
            {
                var m2 = new CompositeNode { Name = model.Name + (char)('A' + i) };
                model.Children.Add(m2);
                this.Count++;
                if (levels > 0)
                {
                    this.AddRecursive(m2, n, levels - 1);
                }
            }
        }

        public void Select(int count)
        {
            var children = this.RootModel.Children as IList<NodeViewModel>;
            for (int i = 0; i < count; i++)
            {
                children[i].IsSelected = true;
            }
        }
    }
}
